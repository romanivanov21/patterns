#ifndef _MAN_H_
#define _MAN_H_

#include <string>

class man
{
public:
	man( const std::string &name, const unsigned int &age );
	~man( );

	void update_name( const std::string &name );
	void update_age ( const unsigned int &age );

	std::string get_name( void )const;
	unsigned int get_age ( void )const;

protected:
	std::string name_;
	unsigned int age_;
};
#endif //_MAN_H_