#include "abstract_factory.h"
#include "client.h"

#include <cassert>
#include <stdexcept>

client::client( abstract_factory *factory )
{
	assert( factory );
	if( factory == nullptr ) throw std::invalid_argument("factory is the null pointer");

	water_ = factory->create_water();
	bottle_ = factory->create_bottle();
}

void client::run( )
{
	bottle_->pour_water( water_ );
}
