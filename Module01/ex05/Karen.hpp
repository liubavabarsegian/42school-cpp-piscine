#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>

class	Karen
{
	private:
		void			(Karen::*action[4])(void);
		void			debug( void );
		void			info( void );
		void			warning( void );
		void			error( void );
	public:
		Karen();
		void	complain( std::string level );
		~Karen(){}
};

#endif