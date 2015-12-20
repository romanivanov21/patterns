#ifndef _STRATEGY2_H_
#define _STRATEGY2_H_

#include "interface1.h"

class concrete_strategy2 : public IStrategy1
{
public:
	concrete_strategy2( void );
	~concrete_strategy2( );

	void method1( void ) override;
};

#endif //_STRATEGY2_H_