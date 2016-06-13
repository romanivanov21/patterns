#include <cstdio>
#include "abstract_factory.h"
#include "coca_cola_factory.h"
#include "pepsi_cola_factory.h"
#include "client.h"

int main( void )
{
	abstract_factory *factory1 = new coca_cola_factory( );
	client *c1 = new client( factory1 );
	c1->run( );
	
	abstract_factory *factory2 = new pepsi_cola_factory( );
	client *c2 = new client( factory2 );
	c2->run( );
	
	delete c1;
	delete factory1;
	delete c2;
	delete factory2;
	
	return 0;
}
