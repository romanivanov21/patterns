#include "as_lecturer.h"

as_lecturer::as_lecturer( const std::string &name, const std::string &lesson_name ) : name_ ( name ), lesson_name_( lesson_name ) { }

as_lecturer::~as_lecturer( ) { }

std::string as_lecturer::get_name( void ) const { return name_; }

void as_lecturer::update_lesson_name( const std::string &name ) { lesson_name_ = name; }

std::string as_lecturer::get_lesson_name( void ) const { return lesson_name_; }


