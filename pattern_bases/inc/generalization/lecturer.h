#ifndef _LECTURER_H_
#define _LECTURER_H_

#include "man.h"
#include <string>
#include <list>

class lecturer : public man
{
public:
	lecturer( const std::string &name, const unsigned int &age, const std::string &lesson_name );
	~lecturer( );

	const std::list<std::string>* get_all_groups( void ) const;

	void add_group( const std::string &name );
	void delete_group( const std::string &name );
	void update_lesson_name( const std::string &name );
private:
	std::list<std::string> groups_;
	std::string lesson_name_;
};
#endif //_LECTURER_H_