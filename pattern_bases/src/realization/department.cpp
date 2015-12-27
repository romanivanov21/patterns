#include "department.h"

department::department( const std::string &name ) : name_( name ) { }

department::~department( ) { }

void department::update_name( const std::string &name ) {  name_ = name; }

const std::string department::get_name( void ) { return name_;  }

const unsigned int department::get_person_count( void ) { return person_count_; }