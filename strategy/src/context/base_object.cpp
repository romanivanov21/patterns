#include "base_object.h"
#include "strategy1.h"
#include "strategy3.h"

#include <iostream>
#include <assert.h>
#include <stdexcept>

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

void base_object::set_IStrategy1( IStrategy1 *str1 ) 
{
	assert( str1 );
	if( str1 )
	{
		str1_ = str1; 
	}
	else
	{
		throw std::invalid_argument( "IStrategy1 *str1 is nullptr!" );
	}
}

void base_object::set_IStrategy2( IStrategy2 *str2 ) 
{ 
	assert( str2 );
	if( str2 )
	{
		str2_ = str2;
	}
	else
	{
		throw std::invalid_argument( "IStrategy2 *str2 is nullptr!" );
	} 
}

IStrategy1* base_object::get_IStrategy1( void ) const { return str1_; }

IStrategy2* base_object::get_IStrategy2( void ) const { return str2_; }

base_object::~base_object( )
{
	delete str1_;
	delete str2_;
}