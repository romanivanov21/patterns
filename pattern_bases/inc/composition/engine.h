#ifndef _ENGINE_H_
#define _ENGINE_H_

#include <string>

typedef enum
{
	EURO1,
	EURO2,
	EURO3,
	EURO4,
	EURO5,
	EURO6

}ECOLOGICAL_CLASS;

class engine
{
public:
	engine(const unsigned int &max_power,  const ECOLOGICAL_CLASS eco_class, const int &torque, const int &max_speed );
	~engine( );

	std::string get_engine_info( void ) const;

private:

	std::string ECOLOGICAL_CLASS_to_string( void )const;

	unsigned int power_;
	ECOLOGICAL_CLASS eco_class_;
	int torque_;
	int max_speed_;
};

#endif //_ENGNE_H_