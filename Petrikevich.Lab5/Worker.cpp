#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "Worker.h"

using namespace std;

Worker::Worker()
{

}

Worker::~Worker()
{

}

void Worker::SetFirstName(char* s)
{
	strcpy(firstName, s);
}

void Worker::SetLastName(char* s)
{
	strcpy(lastName, s);
}

void Worker::SetNationality(char* s)
{
	strcpy(nationality, s);
}

void Worker::SetDepartmentNumber(int departmentNumber)
{
	this->departmentNumber = departmentNumber;
}

void Worker::SetTableNumber(int tableNumber)
{
	this->tableNumber = tableNumber;
}

void Worker::SetEducation(char* s)
{
	strcpy(education, s);
}

void Worker::SetStartedYear(int startedYear)
{
	this->startedYear = startedYear;
}

void  Worker::SetWorker(char* s1, char* s2, char* s3, int n1, int n2, char* s4, int n3)
{
	SetFirstName(s1);
	SetLastName(s2);
	SetNationality(s3);
	SetDepartmentNumber(n1);
	SetTableNumber(n2);
	SetEducation(s4);
	SetStartedYear(n3);
}


char* Worker::GetFirstName()
{
	return firstName;
}

char* Worker::GetLastName()
{
	return lastName;
}

char* Worker::GetNationality()
{
	return nationality;
}

int Worker::GetDepartmentNumber()
{
	return departmentNumber;
}

int Worker::GetTableNumber()
{
	return tableNumber;
}

char* Worker::GetEducation()
{
	return education;
}

int Worker::GetStartedYear()
{
	return startedYear;
}

void  Worker::DisplayWorker()
{
	cout << endl << firstName << " " << lastName << ", \t";
	cout.precision(3);
	cout << nationality << "  , \t" << departmentNumber << "  , \t" << tableNumber << "  , \t" << education << "  , \t" << startedYear<< ".";
	
}