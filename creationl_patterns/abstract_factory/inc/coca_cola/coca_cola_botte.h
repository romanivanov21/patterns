#ifndef _COCA_COLA_BOTTLE_H_#define _COCA_COLA_BOTTLE_H_#include "abstract_bottle.h"class coca_cola_bottle : public abstract_bottle{public:	coca_cola_bottle( ) { }	virtual ~coca_cola_bottle( ) { }	void pour_water( const abstract_water *water ) override;};#endif //_COCA_COLA_BOTTLE_H_