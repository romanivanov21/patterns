#ifndef _SECOND_OBJECT_H_
#define _SECOND_OBJECT_H_

#include "base_object.h"

class second_object : public base_object
{
public:
	explicit second_object( void );
	
	~second_object( );

	void abstract_method( void ) override;

};

#endif //_SECOND_OBJECT_H_