#ifndef _AS_STUDENT_H_
#define _AS_STUDENT_H_

#include "as_lecturer.h"
#include <string>

class as_student
{
public:
	as_student( const unsigned int &user_id, const std::string &name, as_lecturer *lect );
	~as_student( );

	void set_as_lecturer( as_lecturer *lect );
	const as_lecturer* get_as_lecturer( void );
	const std::string get_as_lecturer_name(const std::string &lesson);
	
private:
	as_lecturer *lect_;
	unsigned int user_id_;
	std::string name_;

};

#endif //_AS_STUDENT_H_