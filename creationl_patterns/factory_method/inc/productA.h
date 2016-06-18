#ifndef _PRODUCTA_H_
#define _PRODUCTA_H_

#include "abstract_product.h"

class productA : public abstract_product
{
public:
    productA( );
    ~productA( );

    void print_product_name( ) override;
};

#endif //PRODUCTA_H_