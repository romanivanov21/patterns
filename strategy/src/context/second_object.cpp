#include "second_object.h"
#include "strategy2.h"
#include "strategy3.h"

#include <iostream>

second_object::second_object( void )
{
	str1_ = new concrete_strategy2( );
	str2_ = new concrete_strategy3( ); 
}

second_object::~second_object( ) { }

void second_object::abstract_method( void )
{
	std::cout<<"second_object:abstract_method"<<std::endl;
}