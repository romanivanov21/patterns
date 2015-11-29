#include "originator.h"
#include "assert.h"

#include <iostream>

plyer::plyer( void )
{
	object_ = 100;
}
void plyer::get_hurt( const unsigned int &hurt )
{
	object_ = object_ - hurt;
}
void plyer::get_cure( const unsigned int &cure )
{
	object_ = object_ + cure;
}
void plyer::print_pulse( void ) const
{
	if(object_ > 70) 
	{ 
		std::cout<<"Зелёный"<<std::endl; 
	}
	else if((object_ <= 70) && (object_ > 40))
	{
		std::cout<<"Жёлтый"<<std::endl;
	}
	else if(object_ <= 40)
	{
		std::cout<<"Красный"<<std::endl;
	}
}
void plyer::set_memento( memento *mem )
{
	if(!mem)
	{
		throw std::string("mem is null");		
	}
	object_ = mem->get_state();
}
memento* plyer::get_memento()
{
	return new memento( object_ );
}