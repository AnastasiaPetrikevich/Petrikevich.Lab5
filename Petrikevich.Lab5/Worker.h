#pragma once

const int N = 20;
const int M = 5;
class Worker
{
public:
	Worker();
	~Worker();

	void SetFirstName(char*);
	void SetLastName(char*);
	void SetNationality(char*);
	void SetDepartmentNumber(int);
	void SetTableNumber(int);
	void SetEducation(char*);
	void SetStartedYear(int);

	void SetWorker(char*, char*, char*, int, int, char*, int);

	void DisplayWorker();

	char* GetFirstName();
	char* GetLastName();
	char* GetNationality();
	int GetDepartmentNumber();
	int GetTableNumber();
	char* GetEducation();
	int GetStartedYear();

private:
	char firstName[N], lastName[N], nationality[N], education[N];
	int departmentNumber, tableNumber, startedYear;
	
};