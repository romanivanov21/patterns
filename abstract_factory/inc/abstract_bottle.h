#ifndef _ABSTRACT_BOTTLE_H_
#define _ABSTRACT_BOTTLE_H_

class abstract_bottle
{
	public:
		abstract_bottle( void );
		virtual ~abstract_bottle( ) = 0;
		
		abstract_bottle( const abstract_bottle &copy ) = delete;
		abstract_bottle operator=( const abstract_bottle &copy ) = delete;
		
		virtual void pour_water( const abstract_water * water ) = 0;
};

#endif //_ABSTRACT_BOTTLE_H_