#ifndef _STRATEGY5_H_
#define _STRATEGY5_H_

#include "interface2.h"

class concrete_strategy5 : public IStrategy2
{
public:
	concrete_strategy5( void );
	~concrete_strategy5( );

	void method2( void ) override;
};

#endif //_STRATEGY5_H_