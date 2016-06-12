#include "abstract_factory.h"
#include "client.h"

client::client( abstract_factory *factory )
{
	water_ = factory->create_water();
	bottle_ = factory->create_bottle();
}
void client::run( void )
{
	bottle_->pour_water( water_ );
}
