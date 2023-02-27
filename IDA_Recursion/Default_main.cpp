#include <iostream>


int Get_Int();
int Get_Dbl();

int Random_Number_Int(int Range_min, int Range_max) 
{
	//srand(time(NULL));
	return Range_min + rand() % (Range_max - Range_min + 1); 
}

long long Factorial(int user_number)
{
	if (user_number < 0) return 0;

	if (user_number == 0) return 1;
	
		return Factorial(user_number - 1) * user_number;
}

long long Fibanachi_Number(int fib_number)
{
	if (fib_number == 0) return 0;
	if (fib_number == 1) return 1;
	return Fibanachi_Number(fib_number - 1) + Fibanachi_Number(fib_number - 2);
}

int main()
{
	//std::cout << "Enter a number to calculate factorial ";
	std::cout << "Enter a number of Fibanachi number ";
	int My_Number = Get_Int();


	//std::cout << "\nFactorial ";
	//std::cout << Factorial(My_Number);

	std::cout << "\nFibanachi_Number ";
	std::cout << Fibanachi_Number(My_Number);




	std::cout << "\n\n";
	system("pause");
	return 0;
}

int Get_Int()
{
	int a;
	while (!(std::cin >> a) || (std::cin.peek() != '\n'))
	{
		std::cin.clear();
		while (std::cin.get() != '\n');
		std::cout << "[Input error! Integer expected]\n";
			}
	return a;
}
int Get_Dbl()
{
	double a;
	while (!(std::cin >> a) || (std::cin.peek() != '\n'))
	{
		std::cin.clear();
		while (std::cin.get() != '\n');
		std::cout << "[Input error! Integer expected]\n";
			}
	return a;
}