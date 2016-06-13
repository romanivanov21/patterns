#include <algorithm>
#include "director.h"
#include "concreate_builder.h"

int main( void )
{
    director dir;
    concreate_builder builder;
    dir.construct(&builder);
    std::shared_ptr<product> product = builder.get_product();
    product->show();
    //delete product;
    return 0;
}
