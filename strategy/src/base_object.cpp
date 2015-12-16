#include "base_object.h"
#include "interfaces.h"

#include <iostream>

base_object::base_object( void )
{
	str1_ = new strategy1();
	str2_ = new strategy2();
}


void base_object::method1( void )
{
	str1_->strategy1_us();
}


void base_object::method2( void )
{
	str2_->strategy2_us();
}

void base_object::method3( void )
{
	std::cout<<"base_object:method3"<<std::endl;
}

base_object::~base_object()
{
	delete str1_;
	delete str2_;
}