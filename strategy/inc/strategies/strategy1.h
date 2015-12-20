#ifndef _STRATEGY1_H_
#define _STRATEGY1_H_

#include "interface1.h"

class concrete_strategy1 : public IStrategy1
{
public:
	concrete_strategy1( void );
	~concrete_strategy1( );

	void method1( void ) override;
};

#endif //_STRATEGY_H_