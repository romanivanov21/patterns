#include "abstract_creater.h"
#include "createrA.h"
#include "createrB.h"
#include "productA.h"
#include "productB.h"

#include <iostream>
#include <algorithm>
#include <list>

int main( void )
{
    std::shared_ptr<abstract_creater> crearer1( new createrA() );
    std::shared_ptr<abstract_creater> creater2( new createrB() );
    std::shared_ptr< std::list<std::shared_ptr<productA> > > list_productA ( new std::list<std::shared_ptr<productA> >() );
    std::shared_ptr< std::list<std::shared_ptr<productB> > > list_productB ( new std::list<std::shared_ptr<productB> >() );

    for( size_t i = 0; i < 10; i++ )
    {
        std::shared_ptr<productA> product1( static_cast<productA*>(crearer1->factory_method()) );
        if( product1 == nullptr ) std::invalid_argument("product is the null pointer");
        list_productA->push_back( product1 );

        std::shared_ptr<productB> product2( static_cast<productB*>(creater2->factory_method()) );
        if( product2 == nullptr ) std::invalid_argument("product is the null pointer");
        list_productB->push_back( product2 );
    }

    std::for_each(list_productA->begin(), list_productA->end(),[](std::shared_ptr<productA> item) { item->print_product_name(); });
    std::for_each(list_productB->begin(), list_productB->end(),[](std::shared_ptr<productB> item) { item->print_product_name(); });

    return 0;
}