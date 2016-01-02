#include "engine.h"

engine::engine( const unsigned int &max_power, const ECOLOGICAL_CLASS eco_class, const int &torque, const int &max_speed ) : power_( max_power ), eco_class_(eco_class), torque_( torque ), max_speed_( max_speed ) {  }

engine::~engine( ) { }

std::string engine::get_engine_info( void )const
{
	return "Мощность: " + std::to_string( power_ ) + " Экологический класс: " + ECOLOGICAL_CLASS_to_string() + " Крутящий момент: " + std::to_string(torque_) + " Максимальный крутящий момент: " + std::to_string( max_speed_ );  
}

std::string engine::ECOLOGICAL_CLASS_to_string( void )const 
{
	std::string temp = "";
	switch( eco_class_ )
	{
	case EURO1:
		temp = "ЕВРО 1";
		break;
	case EURO2:
		temp = "ЕВРО 2";
		break;
	case EURO3:
		temp = "ЕВРО 3";
		break;
	case EURO4:
		temp = "ЕВРО 4";
		break;
	case EURO5:
		temp = "ЕВРО 5";
		break;
	case EURO6:
		temp = "ЕВРО 6";
		break;
	default:
		temp = "Экологическая норма не определена ";
	}
	return temp;
}