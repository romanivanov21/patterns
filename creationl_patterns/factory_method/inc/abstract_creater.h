#ifndef _ABSTRACT_CREATER_H_
#define _ABSTRACT_CREATER_H_

#include "abstract_product.h"

#include <memory>

class abstract_creater
{
public:
    abstract_creater( ) { }
    virtual ~abstract_creater() { }

    virtual abstract_product* factory_method( ) = 0;

    abstract_creater( const abstract_creater &value ) = delete;
    abstract_creater& operator=( const abstract_creater &copy ) = delete;
};
#endif //ABSTRACT_CREATER_H_