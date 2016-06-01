#ifndef _ABSTRACT_FACTORY_H_
#define _ABSTRACT_FACTORY_H_

class abstract_factory
{
	public:
		abstract_factory( void );
		virtual ~abstract_factory( void ) = 0;
		
		virtual const abstract_water  * create_water ( void ) = 0;
		virtual const abstract_bottle * create_bottle( void ) = 0;
		
		abstract_factory( const abstract_factory & copy ) = delete;
		abstract_factory operator= ( const abstract_factory &copy ) = delete;
};

#endif //_ABSTRACT_FACTORY_H_