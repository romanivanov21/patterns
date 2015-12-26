#ifndef _STRATEGY4_H_
#define _STRATEGY4_H_

#include "interface2.h"

class concrete_strategy4 : public IStrategy2
{
public:
	explicit concrete_strategy4( void );
	~concrete_strategy4( );

	concrete_strategy4( const concrete_strategy4 &copy ) = delete;
	concrete_strategy4 operator=( const concrete_strategy4 &cpoy ) = delete;

	void method2( void ) override;
	
};

#endif //_STRATEGY4_H_