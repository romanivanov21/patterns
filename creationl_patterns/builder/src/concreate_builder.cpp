#include "concreate_builder.h"

concreate_builder::concreate_builder()
{
    product_ = new product( );
}

concreate_builder::~concreate_builder()
{
    
}

void concreate_builder::build_part_A( )
{
    product_->add("part A was builded");
}

void concreate_builder::build_part_B( )
{
    product_->add("part B was builded");
}

void concreate_builder::build_part_C( )
{
    product_->add("part C was builded");
}

product* concreate_builder::get_product()
{
    return product_;
}
