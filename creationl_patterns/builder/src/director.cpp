#include <cassert>
#include <stdexcept>
#include "director.h"

void director::construct( abstract_builder *builder)
{
    assert( builder );
    if( builder == nullptr ) throw std::invalid_argument("builder is nullptr");

    builder->build_part_A();
    builder->build_part_B();
    builder->build_part_C();
}
