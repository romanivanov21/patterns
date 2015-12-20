#include "base_object.h"
#include "first_object.h"
#include "second_object.h"
#include "thrid_object.h"

#include <iostream>

int main( void )
{
	base_object *f_obj = new first_object();
	base_object *s_obj = new second_object();
	base_object *t_obj = new thrid_object();

	f_obj->method1( );
	f_obj->method2( );
	f_obj->method3( );

	s_obj->method1( );
	s_obj->method2( );
	s_obj->method3( );

	t_obj->method1( );
	t_obj->method2( );
	t_obj->method3( );

	delete f_obj;
	delete s_obj;
	delete t_obj;

	return 0;
}