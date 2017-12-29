//Actual source file on Git Hub:
//https://github.com/GD-Portnov/HW_04/blob/master/HW_04/Source.cpp

#include <iostream>
#include <ctime>

#include <limits>
#include <utility>

static const int MAX = 100;

int main()
{
	int n = 0;
	int my_array [MAX];
	std::cout << "n=";
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		my_array[i] = rand()%1000;
	}

	for (int i = 0; i < n; i++)
	{
		std::cout << my_array[i] << "\t";
			if (i+1 % 10 == 0) { std::cout << "\n"; }
	}
	//std::cout << my_array[0] << "\t" << my_array[1] << "\t" << my_array[2] << "\t" << my_array[3] << "\t" << my_array[4] << "\n";

	for (int i = 0; i < n-1; ++i)
	{
		for (int i = 0; i < n - 1; ++i)
		{
			int tmp = my_array[i];
			if (tmp > my_array[i + 1])
			{
				my_array[i] = my_array[i + 1];
				my_array[i + 1] = tmp;
			}
		}

		for (int i = 0; i < n; i++)
		{
			std::cout << my_array[i] << "\t";
			if (i + 1 % 10 == 0) { std::cout << "\n"; }
		}

	}

	system("pause");

}

