#include "as_student.h"
#include <assert.h>

as_student::as_student( const unsigned int &user_id, const std::string &name, as_lecturer *lect ) : 
		    user_id_( user_id ), name_( name ), lect_( lect ) { }

as_student::~as_student( ) { }

void as_student::set_as_lecturer( as_lecturer *lect )
{
	assert( lect );

	if( lect )
	{
		lect_ = lect;
	}
}

const as_lecturer* as_student::get_as_lecturer( void ) { return lect_; }
const std::string as_student::get_as_lecturer_name( const std::string &lesson )
{
	std::string temp = "not found!";
	if( lect_->get_lesson_name() == lesson )
	{
		temp = lect_->get_name();
	}
	return temp;
}
