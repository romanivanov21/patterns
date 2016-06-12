#ifndef _INTERFACE1_H_
#define _INTERFACE1_H_

class IStrategy1
{
public:
	virtual void method1( void ) = 0;
	virtual ~IStrategy1() { }
};

#endif // _INTERFACE1_H_