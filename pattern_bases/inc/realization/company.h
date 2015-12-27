#ifndef _COMPANY_H_
#define _COMPANY_H_

#include "IUnit.h"
#include <string>

class company : public IUnit
{
public:
	company( const std::string &name );

	~company( );

	company( const company &copy ) = delete;

	company operator =( const company &copy ) = delete;

	void update_name( const std::string &name ) override;

	const std::string get_name( void ) override;

	const unsigned int get_person_count( void ) override;
private:
	std::string name_;

	const unsigned int person_count_ = 595;
};

#endif //_COMPANY_H_