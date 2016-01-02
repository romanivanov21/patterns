#include "student.h"
#include "lecturer.h"
#include "department.h"
#include "company.h"
#include "IUnit.h"
#include "as_student.h"
#include "as_lecturer.h"
#include "car.h"

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
	department department1("Дирекция серверных решений");
	std::cout<<"Имя:" + department1.get_name() <<std::endl;
	std::cout<<"Число сотрудников: ";
	std::cout<<department1.get_person_count() <<std::endl;

	company company1("Лаборатория касперского");
	std::cout<<"Имя:" + company1.get_name() <<std::endl;
	std::cout<<"Число сотрудников: ";
	std::cout<<company1.get_person_count() <<std::endl;

	as_lecturer *as_lecturer1 = new as_lecturer("Батура", "Защита иформации в компьютерных системах");
	as_student *as_student1 = new as_student(1, "Roman", as_lecturer1 );

	std::cout<<"Имя преподавателя:" + as_student1->get_as_lecturer_name( as_lecturer1->get_lesson_name() )<<std::endl;

	delete as_lecturer1;
	delete as_student1;

	car *car1 = new car( SEDAN, "mercrdes-benz c63 AMG" );

	std::cout<<car1->get_car_info()<<std::endl;

	delete car1;
	return 0;
}