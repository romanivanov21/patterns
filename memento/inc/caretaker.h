/****************************************************************
*   Файл: caretaker.h
*   Автор: Иванов Роман (с)
*   Год: 2015
*   Описание:
*      
*****************************************************************/
#ifndef _CARETAKER_H_
#define _CARETAKER_H_

#include "originator.h"

class game_satae
{
  public:
	game_satae( void );
	void save_state( IOriginator *originator );
	void load_state( IOriginator *originator );
  private:
	memento *mem_;
};

#endif //_CARETAKER_H_
