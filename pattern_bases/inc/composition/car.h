#ifndef _CAR_H_
#define _CAR_H_

#include "engine.h"
#include <string>

typedef enum
{
	HATCHBACK,
	SEDAN,
	STATION_VAGON,
	CROSSOVER,
	OFFROADER

}BODY_TYPE;

class car
{
public:
	car( BODY_TYPE body_type, const std::string &model );
	~car( );

	std::string get_car_info( void )const;
private:
	std::string BODY_TYPE_to_string( void )const;

	engine *engine_;
	BODY_TYPE body_type_;
	std::string model_;	
};

#endif //_CAR_H_