#ifndef _AS_LECTURER_H_
#define _AS_LECTURER_H_

#include <string>

class as_lecturer
{
public:
	as_lecturer( const std::string &name, const std::string &lesson_name);
	~as_lecturer( );

	std::string get_name( void ) const;
	void update_lesson_name( const std::string &name );
	std::string get_lesson_name( void ) const;

private:
	std::string name_;
	std::string lesson_name_;	
};

#endif //_AS_LECTURER_H_