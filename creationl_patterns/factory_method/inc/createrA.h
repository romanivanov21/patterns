#ifndef _CREATERA_H_
#define _CREATERA_H_

#include "abstract_product.h"
#include "abstract_creater.h"
#include "productA.h"

class createrA : public abstract_creater
{
public:
    createrA( );
    ~createrA( );

   abstract_product* factory_method( ) override;
};

#endif //_CREATER_H_