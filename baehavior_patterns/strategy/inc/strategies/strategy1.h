#ifndef _STRATEGY1_H_
#define _STRATEGY1_H_

#include "interface1.h"

class concrete_strategy1 : public IStrategy1
{
public:
	explicit concrete_strategy1( void );
	~concrete_strategy1( );
	
	concrete_strategy1( const concrete_strategy1 & copy) = delete;
	concrete_strategy1 operator =( const concrete_strategy1 & cpoy) = delete;

	void method1( void ) override;
};

#endif //_STRATEGY_H_