#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "Worker.h"

using namespace std;

Worker InitStudent();
Worker* InitArray(int);
void DisplayArray(Worker*, int);
void EnterArray(int*, int);
void SortFirstName(Worker*, int);
void Swap(Worker&, Worker&);

int main()
{
	int n;
	cout << "Enter the number of Workers:";
	cin >> n;
	system("cls");
	Worker* workers = InitArray(n);
	if (!workers)
	{
		cout << "\nDynamic array doesn't exist!\n";
		system("pause");
		return 0;
	}
	cout << "The list of Workers: " << endl << endl;
	DisplayArray(workers, n);



	cout << "The sorting list of Workers:" << endl;;
	SortFirstName(workers, n);
	DisplayArray(workers, n);
	delete[] workers;
	system("pause");
	return 0;
}

Worker InitWorker()
{
	char firstName[N] = "", lastName[N] = "", nationality[N]="", education[N] = ""; 
	cout << "Enter first name: " << endl;
	cin.ignore();
	cin.get(firstName, N, '\n');
	cout << "Enter last name: " << endl;
	cin.ignore();
	cin.get(lastName, N, '\n');
	cout << "Enter nationality: " << endl;
	cin.ignore();
	cin.get(nationality, N, '\n');
	cout << "Enter education: " << endl;
	cin.ignore();
	cin.get(education, N, '\n');

	int department, tableNumber, stertedYear;
	cout << "Enter department number: " << endl;
	cin >> department;
	cout << "Enter table number: " << endl;
	cin >> tableNumber;
	cout << "Enter started year: " << endl;
	cin >> stertedYear;


	Worker man;
	man.SetWorker(firstName, lastName, nationality, department, tableNumber, education, stertedYear);
	return man;
}

Worker* InitArray(int n)
{
	Worker* array = new Worker[n];
	if (!array)
		return NULL;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter the information about " << (i + 1) << "  Worker\n"<<endl;
		array[i] = InitWorker();
	}
	return array;
}

void EnterArray(int* array, int n)
{
	for (int i = 0; i < M; i++)
	{
		cout << "enter A[" << (i + 1) << "] = ";
		cin >> array[i];
	}
}

void DisplayArray(Worker* array, int n)
{
	for (int i = 0; i < n; i++)
		array[i].DisplayWorker();
	cout << endl;
}

void SortFirstName(Worker* array, int n)
{
	for (int i = 0; i <= n; i++)
		for (int j = n - 1; j > i; j--)
			if (strcmp(array[j].GetFirstName(), array[j - 1].GetFirstName()) < 0)
				Swap(array[j], array[j - 1]);
}

void Swap(Worker &a, Worker &b)
{
	Worker t = a;
	a = b;
	b = t;
}