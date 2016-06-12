#include "first_object.h"
#include "strategy1.h"
#include "strategy4.h"

#include <iostream>

first_object::first_object( void )
{
	str1_ = new concrete_strategy1( );
	str2_ = new concrete_strategy4( );
}
first_object::~first_object( ) { }

void first_object::abstract_method( void )
{
	std::cout<<"first_object:abstract_method"<<std::endl;
}