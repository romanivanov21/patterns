#ifndef _COCA_COLA_FACTORY_H_
#define _COCA_COLA_FACTORY_H_

#include "abstract_factory.h"
#include "abstract_water.h"
#include "abstract_bottle.h"

#include "coca_cola_botte.h"
#include "coca_cola_water.h"

class coca_cola_factory : public abstract_factory
{
public:
	coca_cola_factory( );
	~coca_cola_factory( );
		
	coca_cola_water * create_water( ) override;
	coca_cola_bottle* create_bottle( ) override;
};

#endif //_COCA_COLA_FACTORY_H_
