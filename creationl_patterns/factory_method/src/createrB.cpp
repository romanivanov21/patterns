#include "createrB.h"
#include "productB.h"

#include <iostream>

createrB::createrB() { }

createrB::~createrB()
{
    std::cout<<"product B was deleted"<<std::endl;
}

abstract_product* createrB::factory_method( ) { return new productB(); }