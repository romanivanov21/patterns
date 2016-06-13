#ifndef _ABSTRACT_BUILDER_H_
#define _ABSTRACT_BUILDER_H_

#include "product.h"

#include <memory>

class abstract_builder
{
public:
    explicit abstract_builder( ) { }
    virtual ~abstract_builder( ) { }

    virtual void build_part_A( ) = 0;
    virtual void build_part_B( ) = 0;
    virtual void build_part_C( ) = 0;

    virtual std::shared_ptr<product> get_product( ) = 0;

    abstract_builder& operator=(const abstract_builder &value) = delete;
    abstract_builder( const abstract_builder& copy) = delete;
};

#endif //_ABSTRACT_BUILDER_H_
