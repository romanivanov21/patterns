#ifndef _STRATEGY_H_
#define _STRATEGY_H_

#include "interfaces.h"

class strategy1 : public IStrategy1
{
public:
	void strategy1_us( void ) override;
};

class strategy2 : public IStrategy2
{
public:
	void strategy2_us( void ) override;
};

#endif //_STRATEGY_H_