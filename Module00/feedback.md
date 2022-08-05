# CPP Module 00
## Evaluation
### ex00
*	Your program doesn't print a newline when arguments are provided. (-10 points)
	*	_It's specified in Chapter II: General Rules of the subject that any output is expected to be ended with a newline._

Final Mark: 10/20
### ex01
*	In `Contact`, you write terrible getters for the private member variables. By returning the string _by value_, you create a copy of your fields every time. Now imagine you store a string that's 1 million characters long and you wanna get it: your getter will have to copy the whole string down resulting in linear O(n) complexity. That's why the best practice to write getters in C++ is to return <ins>const references</ins> to the private variables. Getting a _reference_, i.e. the address of the object, is O(1) constant time no matter how slow the copy-construction of the object is, and the `const` qualifier ensures no one can modify the object with the reference you returned. (-10 points) Hence the proper way to return your fields would be:
``` c++
const std::string	&getFirstName() const;
```
*	It's prohibited to provide implementation in the header files. Your `PhoneBook` provides definition for the default constructor; it must've been defined in the source .cpp file.
(-5 points)
*	Your input reading for creating contacts is messy and produces scrambled view. You should either always `std::cin >>` or always `std::getline()` so that the reading logic is consistent; you mix them up. You'd better use `std::cin.clear()` instead of `std::cin.ignore()`, here's a bug produced because of this inconsistency:
```
ADD
FIRST NAME: noooo
LAST NAME: nooooooo
NICKNAME: yes
PHONENUMBER: no
DARKEST SECRET: however
this
Contact added.
SEARCH
     index|first name| last name|  nickname
         1|         a|    asdasd|     asdas
         2|     sadad|    asdasd|    asdasd
         3|     noooo|  nooooooo|       yes

Choose an index of the needed contact.
3
Contact info: 
FIRST NAME: noooo
LAST NAME: nooooooo
NICKNAME: yes
PHONE NNUMBER: no
DARKEST SECRET: his
```
You can clearly see "however" didn't go into the darkest secret field. (-15 points)
*	After 3 contacts are added, and SEARCH is invoked, an ADD procedure enters an endless loop. (-5 points)
*	You have no mechanism whatsoever for contact overflow. Attempting to add a contant when there's already 8 added results in a segmentation fault (-15 points).
	*	The subject reads: "_It can store a maximum of 8 contacts. If the user tries to add a 9th contact, replace the oldest one by the new one._"

Final Mark: 0/50
### ex02
Final Mark: 30/30

## Final Grade
# __40/100__
Note: Passing grades start from 80/100.
## Notes
*	CamelCase is Java style of naming functions: lowercased first letter, then each new world capitalized. You'll be forced to use CamelCase in 42's CPP Modules, but do keep in mind that in real life C++ developers prefer _snake-case_ instead: everything's lowercased and words are separated by an underscore.
*	You forget to declare your getter/void functions to be `const`. Don't forget about best C++ practices.