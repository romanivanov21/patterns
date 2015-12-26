#include "man.h"

man::man( const std::string &name, const unsigned int &age ) : name_( name ), age_( age ) { }

man::~man( ) { }

void man::update_name( const std::string &name )
{
	name_ = name;
}
void man::update_age( const unsigned int &age )
{
	age_ = age;
}

std::string man::get_name( void ) const { return name_; }

unsigned int man::get_age( void ) const { return age_; }

