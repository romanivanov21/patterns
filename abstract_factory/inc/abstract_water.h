#ifndef _ABSTRACT_WATER_H_
#define _ABSTRACT_WATER_H_

class abstract_water
{
	public:
		abstract_water( void );
		virtual ~abstract_water( ) = 0;
		
		abstract_water( const abstract_water &copy ) = delete;
		abstract_water operator=( const abstract_water &copy ) = delete;
};

#endif _ABSTRACT_WATER_H_ //_ABSTRACT_WATER_H_