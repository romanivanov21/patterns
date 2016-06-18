#include "createrA.h"

#include <memory>
#include <iostream>
#include <productA.h>

createrA::createrA() { }

createrA::~createrA() { }

abstract_product* createrA::factory_method( )
{
    return new productA();
}
