#ifndef _BASE_OBJECT_H_
#define _BASE_OBJECT_H_

#include "interface1.h"
#include "interface2.h"

class base_object
{
public:
    base_object( void );

	virtual void abstract_method( void ) = 0; 

	void set_IStrategy1( IStrategy1 *str1 );
	void set_IStrategy2( IStrategy2 *str2 );

	IStrategy1* get_IStrategy1( void ) const;
	IStrategy2* get_IStrategy2( void ) const;

	void method1( void );
	void method2( void );
	void method3( void );

	virtual ~base_object( );

protected:
	IStrategy1 *str1_;
	IStrategy2 *str2_;
};
#endif //_BASE_OBJECT_H_