#include "base_object.h"
#include "strategy1.h"
#include "strategy3.h"

#include <iostream>

base_object::base_object( void )
{
	str1_ = new concrete_strategy1();
	str2_ = new concrete_strategy3();
}


void base_object::method1( void )
{
	str1_->method1();
}


void base_object::method2( void )
{
	str2_->method2();
}

void base_object::method3( void )
{
	std::cout<<"base_object:method3"<<std::endl;
}

IStrategy1* base_object::get_strategy1( void ) const { return str1_; }

IStrategy2* base_object::get_strategy2( void ) const { return str2_; }

base_object::~base_object( )
{
	delete str1_;
	delete str2_;
}