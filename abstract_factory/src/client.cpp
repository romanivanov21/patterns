#include"client.h"
#include"abstract_factory.h"

client::client( const abstract_factory *factory ) : water_( factory->create_water( ) ), bottle_( factory->create_bottle( ) ) {  }
void client::run( void )
{
	bottle_->pour_watter( water_ );
}