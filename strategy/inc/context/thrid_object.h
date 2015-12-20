#ifndef _THRID_OBJECT_H_
#define _THRID_OBJECT_H_

#include "base_object.h"

class thrid_object : public base_object
{
public:

	thrid_object( void );
	~thrid_object( );
	
	void abstract_method( void ) override;

};
#endif //_THRID_OBJECT_H_