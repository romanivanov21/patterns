#include "student.h"
#include "lecturer.h"


#include <iostream>

int main( void )
{
	student student1("Roman", 21, "TCS - 12");
	std::cout<<"Имя:" + student1.get_name()<<std::endl;
	std::cout<<"Возрост:"; std::cout<<student1.get_age()<<std::endl;

	student1.add_lesson("Методы оптимизации");
	student1.add_lesson("Английский язык");
	student1.add_lesson("Предмет");

	const std::list<std::string> *lessons = student1.get_lessons( );

	for( auto it = lessons->begin(); it != lessons->end(); ++ it)
	{
		std::cout<<"Урок:" + *it<<std::endl;
	}

	student1.delete_lesson("Предмет");
	for( auto it = lessons->begin(); it != lessons->end(); ++ it)
	{
		std::cout<<"Урок:" + *it<<std::endl;
	}

	lecturer lecturer1( "Батура", 55, "Методы защиты информации в компьютерных системах" );
	std::cout<<"Имя:" + lecturer1.get_name()<<std::endl;
	std::cout<<"Возрост:"; std::cout<<lecturer1.get_age()<<std::endl;
	lecturer1.add_group("TCS - 12");
	lecturer1.add_group("TCS - 13");
	lecturer1.add_group("MЭ - 11" );
	lecturer1.add_group("Группа");

	const std::list<std::string> *groups = lecturer1.get_all_groups( );

	for( auto it = groups->begin(); it != groups->end(); ++ it)
	{
		std::cout<<"Группа:" + *it<<std::endl;
	}

	lecturer1.delete_group("Группа");
	for( auto it = groups->begin(); it != groups->end(); ++ it)
	{
		std::cout<<"Группа:" + *it<<std::endl;
	}
	return 0;
}