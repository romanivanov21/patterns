/****************************************************************
*   Файл: originator.h
*   Автор: Иванов Роман (с)
*   Год: 2015
*   Описание:
*      
*****************************************************************/
#ifndef _ORIGINATOR_H_
#define _ORIGINATOR_H_
#include "memento.h"

/****************************************************************
*	Описание класса IOriginator:
*	
*****************************************************************/
class IOriginator
{
  public:
/*************************************************
*  	@params: 
*		- void
*	@return:
*		- указатель 
*	@berif:
*		
**************************************************/
	virtual memento* get_memento( void ) = 0;
	virtual void set_memento( memento *mem ) = 0;
};

/*************************************************
*	Описание класса plyer
**************************************************/
class plyer : public IOriginator
{
  public:
  	
	plyer();
	void get_cure( const unsigned int &cure );
	void get_hurt( const unsigned int &hutr );
	void print_pulse( void ) const;

	memento* get_memento( void ) override;
	void set_memento(memento *mem) override;
  private:
	unsigned int object_;
};

#endif // _ORIGINATOR_H_
