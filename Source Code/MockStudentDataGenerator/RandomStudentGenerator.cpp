/*
#include "RandomStudentGenerator.h"

Student RandomStudentGenerator::next()
{
	int id = Student::GetterId();
	Name name(_rng_name.next());
	Score gpa(_rng_score.next());
	Phone phone(_rng_phone.next());
	Mail mail(name);
	Date dob(_rng_date.next());
	Address address(_rng_address.next());
	Student student(id, name, gpa, phone, mail, dob, address);
	return student;
}*/
#include "RandomStudentGenerator.h"

Student RandomStudentGenerator::next(int previous_id)
{
	int id = previous_id;
	Name name(_rng_name.next());
	Score gpa(_rng_score.next());
	Phone phone(_rng_phone.next());
	Mail mail(name);
	Date dob(_rng_date.next());
	Address address(_rng_address.next());
	Student student(id, name, gpa, phone, mail, dob, address);
	return student;
}