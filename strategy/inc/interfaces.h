#ifndef _INTERFACE_H_
#define _INTERFACE_H_

class IStrategy1
{
public:
	virtual void strategy1_us( void ) = 0;
	virtual ~IStrategy1() { }
};

class IStrategy2
{
public:
	virtual void strategy2_us( void ) = 0;
	virtual ~IStrategy2() { }
};
#endif // _INTERFACE_H_