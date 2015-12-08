#ifndef _BASE_OBJECT_H_
#define _BASE_OBJECT_H_

class base_object
{
public:

	virtual void abstract_method( void ) = 0; 

	void method1( void );
	void method2( void );
	void method3( void );
};
#endif //_BASE_OBJECT_H_