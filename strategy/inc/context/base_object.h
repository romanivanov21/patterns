#ifndef _BASE_OBJECT_H_
#define _BASE_OBJECT_H_

#include "interface1.h"
#include "interface2.h"

class base_object
{
public:
    base_object( void );

	virtual void abstract_method( void ) = 0; 

	IStrategy1* get_strategy1( void ) const;
	IStrategy2* get_strategy2( void ) const;

	void method1( void );
	void method2( void );
	void method3( void );

	virtual ~base_object( );

protected:
	IStrategy1 *str1_;
	IStrategy2 *str2_;
};
#endif //_BASE_OBJECT_H_