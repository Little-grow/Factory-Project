#include <iostream>

const int MAX = 1000;
int count = 0;

double salarys[MAX]{};
int ages[MAX]{};
char genders[MAX]{};
std::string names[MAX]{};

void UI()
{
	std::cout << "Enter your choice\n";
	std::cout << "1) add new employee \n";
	std::cout << "2) Print all employees\n";
	std::cout << "3) delete by age\n";
	std::cout << "4) Update Salary by name\n";
	std::cout << "5) Exit\n";
}

void add_employee()
{
	++count;
	std::cout << "Enter your Name: \n";
	std::string name; std::cin >> name;
	names[count] = name;

	std::cout << "Enter your age:\n";
	int age;  std::cin >> age;
	ages[count] = age;

	std::cout << "Enter your Salary:\n";
	double salary;   std::cin >> salary;
	salarys[count] = salary;

	std::cout << "Enter your gender:\n";
	char gender; std::cin >> gender;
	ages[count] = age;
}

void print()
{
	std::cout << "\t\t*********************************\t\t\n";
	for (int i = 1; i <= count; i++)
	{
		if (ages[i] != -1)
			std::cout << names[i] << "  " << ages[i] << "  " << salarys[i] << "  " << genders[i] << "\n";
	}
}

void delete_by_age()
{
	std::cout << "Enter start age \n";
	int start = 0;
	std::cin >> start;
	std::cout << "Enter end age\n";
	int end = 0;
	std::cin >> end;
	for (int i = 1; i <= count ; i++)
	{
		if (ages[i] >= start && ages[i] <= end)
			ages[i] = -1;
	}
}

void update_by_name()
{
	std::cout << "Enter your name\n";
	std::string name; std::cin >> name;
	std::cout << "Enter your new salary\n";
	double salary; std::cin >> salary;
	for (int i = 1; i <= count; i++)
	{
		if (names[i] == name)
			salarys[i] = salary;
	}
}

void EmployeeSystem()
{
	int choice = -1;
	while (choice == -1)
	{
		UI();
		std::cin >> choice;
		if (choice == 1)
		{
			add_employee();
			choice = -1;
		}
		else if (choice == 2)
		{
			print();
			choice = -1;
		}
		else if (choice == 3)
		{
			delete_by_age();
			choice = -1;
		}
		else if (choice == 4)
		{
			update_by_name();
			choice = -1;
		}
		else if (choice == 5)
			break;
		else
			choice = -1;
	}
}

int main()
{
	EmployeeSystem();
}


