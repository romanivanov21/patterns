#include "pepsi_cola_bottle.h"

#include <iostream>
#include <cassert>
#include <stdexcept>

void pepsi_cola_bottle::pour_water(const abstract_water *water)
{
	assert( water );
	if( water == nullptr ) throw std::invalid_argument("water is the null pointer");

	std::cout<<" pepsi cola water to pour of pepsi cola bottle " <<std::endl;
}
