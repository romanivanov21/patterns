#ifndef _STRATEGY5_H_
#define _STRATEGY5_H_

#include "interface2.h"

class concrete_strategy5 : public IStrategy2
{
public:
	concrete_strategy5( void );
	~concrete_strategy5( );

	concrete_strategy5( const concrete_strategy5 &cpoy ) = delete;
	concrete_strategy5 operator=( const concrete_strategy5 &cpoy ) = delete;

	void method2( void ) override;
};

#endif //_STRATEGY5_H_