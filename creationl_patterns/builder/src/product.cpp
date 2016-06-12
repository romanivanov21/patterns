#include "product.h"

#include <algorithm>

product::product( )
{
    parts_ = new std::list<std::string>( );
}

product::~product( )
{
    parts_->clear( );
    delete parts_;
}

void product::add( const std::string &part )
{
    parts_->push_back( part );
}

void product::show( ) const
{
    std::for_each(parts_->begin(), parts_->end(), []( std::string item ){ std::cout<<item<<std::endl; } );
}
