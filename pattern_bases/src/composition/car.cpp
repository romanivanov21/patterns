#include "car.h"


car::car( BODY_TYPE body_type, const std::string &model ) : body_type_( body_type ), model_( model )
{
	engine_ = new engine( 250, EURO5, 960, 295 );
}

car::~car( )
{
	delete engine_;
}

std::string car::get_car_info( void )const
{
	return "Двигатель: " + engine_->get_engine_info() + " Тип кузова: " + car::BODY_TYPE_to_string( ) + " Модель: " + model_;
}
std::string car::BODY_TYPE_to_string( void )const
{
	std::string temp = "";
	switch( body_type_ )
	{
	case HATCHBACK:
		temp = "хэтчбек";
		break;
	case SEDAN:
		temp = "седан";
		break;
	case STATION_VAGON:
		temp = "унивесал";
		break;
	case CROSSOVER:
		temp = "кроссовер";
		break;
	case OFFROADER:
		temp = "внедорожник";
		break;
	default:
		temp = "тип кузова не определён";
	}

	return temp;
}