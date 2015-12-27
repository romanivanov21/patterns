#ifndef _DEPARTMENT_H_
#define _DEPARTMENT_H_

#include "IUnit.h"

#include <string>

class department : public IUnit
{
public:
	department( const std::string &name );

	~department( );

	department( const department &copy ) = delete;

	department operator=( const department &cpoy ) = delete;

	void update_name( const std::string &name ) override;

	const std::string get_name( void ) override;

	const unsigned int get_person_count( void ) override;
private:
	std::string name_;

	const unsigned int person_count_ = 16;
};

#endif //_DEPARTMENT_H_