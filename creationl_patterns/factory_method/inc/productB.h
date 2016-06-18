#ifndef _PRODUCTB_H_
#define _PRODUCTB_H_

#include "abstract_product.h"

class productB : public abstract_product
{
public:
    productB();
    ~productB();

    void print_product_name() override;
};
#endif //_ABSTRACT_PRODUCT_H_