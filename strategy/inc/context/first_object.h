#ifndef _FIRST_OBJECT_H_
#define _FIRST_OBJECT_H_

#include "base_object.h"

class first_object : public base_object
{
public:
	first_object( void );

	~first_object( );

	void abstract_method( void ) override;
};

#endif //_FIRST_OBJECT_H_