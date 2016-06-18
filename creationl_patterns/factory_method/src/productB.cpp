#include <iostream>

#include "productB.h"

productB::productB() { }

productB::~productB()
{
    std::cout<<"product B was deleted"<<std::endl;
}

void productB::print_product_name()
{
    std::cout<<"It is product B"<<std::endl;
}