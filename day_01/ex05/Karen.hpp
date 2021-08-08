#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>

class Karen {
	typedef void (Karen::*func)();
public:
	Karen();
	void	complain( std::string level );
private:
	void 	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
	void	i_dont_know( void );
	func	array[5];
};


#endif
