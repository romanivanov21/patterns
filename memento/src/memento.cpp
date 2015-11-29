#include "memento.h"

memento::memento( void ) : helth_state_( 0 ) { }
memento::memento( unsigned int helth ) : helth_state_( helth ) { }
unsigned int memento::get_state( void )const { return helth_state_; }
void memento::set_state( const unsigned int helth ) { helth_state_ = helth; }
