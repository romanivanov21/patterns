#ifndef _STRATEGY4_H_
#define _STRATEGY4_H_

#include "interface2.h"

class concrete_strategy4 : public IStrategy2
{
public:
	concrete_strategy4( void );
	~concrete_strategy4( );

	void method2( void ) override;
	
};

#endif //_STRATEGY4_H_