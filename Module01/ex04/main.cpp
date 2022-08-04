#include <iostream>
#include <fstream> 

bool	has_an_error(int argc, char** argv)
{
	if (argc != 4)
	{
		std::cout << "Error: wrong number of arguments. Expected 3." << std::endl;
		return true;
	}
	std::cout << argv[0] << std::endl;
	return false;
}

int main(int argc, char** argv)
{
	if (has_an_error(argc, argv))
		return 1;
	std::string	filename = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	std::ifstream ifile ;
	ifile.open(filename.c_str());
	if (!ifile) 
	{
		std::cout << "File " << filename << "not found." << std::endl;
		return 1;
	}

	std::ofstream ofile ;
	ofile.open((filename + ".replace").c_str());
	if (!ofile)
	{
		std::cout << "File" << filename << "not opened" << std::endl;
		return 1;
	}
	ofile.clear();

	char		buffer;
	std::string	bufstr;
	unsigned int i;
	bool	replaced;
	while (ifile.get(buffer))
	{
		bufstr = "";
		replaced = false;
		if (buffer == s1[0])
		{
			i = 1;
			bufstr.push_back(buffer);
			while (i < s1.length() && ifile.get(buffer))
			{	
				if (buffer != s1[i])
					break;
				bufstr.push_back(buffer);
				i++;
			}
			i = 0;
			while (i < s2.length())
			{
				ofile << s2[i];
				i++;
			}
			replaced = true;
			bufstr = "";
		}
		if (!replaced)
			ofile << buffer;
	}
	return 0;
}