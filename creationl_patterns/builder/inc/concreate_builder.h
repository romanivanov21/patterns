#ifndef _CONCREATE_BUILDER_H_
#define _CONCREATE_BUILDER_H_

#include "abstract_builder.h"

#include <memory>

class concreate_builder : public abstract_builder
{
public:
    explicit concreate_builder( );
    ~concreate_builder( );

    void build_part_A( ) override;
    void build_part_B( ) override;
    void build_part_C( ) override;

    std::shared_ptr<product> get_product( ) override;

private:
    std::shared_ptr<product> product_;
};

#endif //_CONCREATE_BUILDER_H_
