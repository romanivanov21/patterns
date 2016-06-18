#include <iostream>

#include "productA.h"

productA::productA() { }

productA::~productA()
{
    std::cout<<"product A was deleted"<<std::endl;
}

void productA::print_product_name()
{
    std::cout<<"It is product A"<<std::endl;
}