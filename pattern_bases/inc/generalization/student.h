#ifndef _STUDENT_H_
#define _STUDENT_H_

#include "man.h"
#include <string>
#include <list>

class student : public man
{
public:
	student( const std::string &name, const unsigned int &age, const std::string &group_name );
	~student( );

	std::string get_grname( void ) const;
	const std::list<std::string>* get_lessons( void )const;

	void add_lesson( const std::string &name );
	void delete_lesson( const std::string &name);
	void update_group_name( const std::string &name );

private:

	std::string group_name_;
	std::list<std::string> lessons_;

};

#endif  //_STUDENT_H_