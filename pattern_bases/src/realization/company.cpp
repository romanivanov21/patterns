#include "company.h"

company::company( const std::string &name ) : name_( name ) {  }

company::~company(  ) {  }

void company::update_name( const std::string &name ) { name_ = name; }

const std::string company::get_name( void ) { return name_; }

const unsigned int company::get_person_count( void ) { return person_count_; }



