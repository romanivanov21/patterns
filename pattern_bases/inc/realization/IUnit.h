#ifndef _IUNIT_H_
#define _IUNIT_H_

#include <string>

class IUnit
{
public:

	virtual void update_name( const std::string &name ) = 0;

	virtual const std::string get_name( void ) = 0;

	virtual const unsigned int get_person_count( void ) = 0;

	virtual ~IUnit( ) { }
};

#endif //_IUNIT_H_