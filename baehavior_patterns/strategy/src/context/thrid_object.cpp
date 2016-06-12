#include "thrid_object.h"
#include "strategy2.h"
#include "strategy5.h"

#include <iostream>

thrid_object::thrid_object( void )
{
	str1_ = new concrete_strategy2( );
	str2_ = new concrete_strategy5( );
}
thrid_object::~thrid_object( ) { }

void thrid_object::abstract_method( void )
{
	std::cout<<"thrid_object:abstract_method"<<std::endl;
}