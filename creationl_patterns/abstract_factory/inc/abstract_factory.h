#ifndef _ABSTRACT_FACTORY_H_
#define _ABSTRACT_FACTORY_H_

#include "abstract_water.h"
#include "abstract_bottle.h"

class abstract_factory
{
public:
	abstract_factory( ) { }
	virtual ~abstract_factory( ) { }
		
	virtual abstract_water  *create_water ( ) = 0;
	virtual abstract_bottle *create_bottle( ) = 0;
		
	abstract_factory( const abstract_factory &copy ) = delete;
	abstract_factory& operator= ( const abstract_factory &copy ) = delete;
};

#endif //_ABSTRACT_FACTORY_H_
