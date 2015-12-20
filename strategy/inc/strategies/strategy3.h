#ifndef _STRATEGY3_H_
#define _STRATEGY3_H_

#include "interface2.h"

class concrete_strategy3 : public IStrategy2
{
public:
	concrete_strategy3( void );
	~concrete_strategy3( );

	concrete_strategy3( const concrete_strategy3 &copy ) = delete;
	concrete_strategy3 operator=( const  concrete_strategy3 &copy) = delete;

	void method2( void ) override;
};
#endif //_STRATEGY3_H_