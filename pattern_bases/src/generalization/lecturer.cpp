#include "lecturer.h" 


lecturer::lecturer( const std::string &name, const unsigned int &age, const std::string &lesson_name ) : 
                    man( name, age ), lesson_name_( lesson_name ) { }

lecturer::~lecturer( ) { }

const std::list<std::string>* lecturer::get_all_groups( void ) const { return &groups_; }

void lecturer::add_group( const std::string &name )
{
	groups_.push_back( name );
}

void lecturer::delete_group( const std::string &name )
{
	for ( auto it = groups_.begin(); it != groups_.end(); )
	{
		if( *it == name )
		{
			it = groups_.erase( it );
		}
		else
		{
			++it;
		}
	}
}

void lecturer::update_lesson_name( const std::string &name ) { lesson_name_ = name; } 
