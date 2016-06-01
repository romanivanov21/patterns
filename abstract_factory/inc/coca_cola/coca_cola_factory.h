#ifndef _COCA_COLA_FACTORY_H_
#define _COCA_COLA_FACTORY_H_

#include "abstract_factory.h"

class coca_cola_factory : public abstract_factory
{
	public:
		coca_cola_factory( void );
		~coca_cola_factory( );
		
		const abstract_water* create_water( void ) override;
		const abstract_bottle* create_bottle( void ) override;
	private:
		coca_cola_water *water_;
		coca_cola_bottle *bottl_;
};

#endif //_COCA_COLA_FACTORY_H_