#ifndef _CREATERB_H_
#define _CREATERB_H_

#include "abstract_creater.h"
#include "abstract_product.h"

#include <memory>

class createrB : public abstract_creater
{
public:
    createrB();
    ~createrB();

    abstract_product* factory_method() override;
};

#endif //_CREATERB_H_