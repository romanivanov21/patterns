#include "student.h"

student::student( const std::string &name, const unsigned int &age, const std::string &group_name ) : 
				man( name, age ), group_name_( group_name ) { }

student::~student( ) { }

std::string student::get_grname( void )const { return group_name_; }

const std::list<std::string>* student::get_lessons( void )const { return &lessons_; }

void student::add_lesson( const std::string &name )
{
	lessons_.push_back( name );
}

void student::delete_lesson( const std::string &name ) 
{
	for( auto it = lessons_.begin( ); it != lessons_.end( ); )
	{
		if( *it == name )
		{
			it = lessons_.erase( it );
		}
		else
		{
			++ it;
		}
	}
}

void student::update_group_name( const std::string &name )
{
	group_name_ = name;
}
