//Actual source file on Git Hub:
//https://github.com/GD-Portnov/HW_04/blob/master/HW_04/Source.cpp

#include <iostream>

int main()
{
	int my_array [5]= { 9,3,7,5,1 };
	std::cout << my_array[0] << "\t" << my_array[1] << "\t" << my_array[2] << "\t" << my_array[3] << "\t" << my_array[4] << "\n";

	for (int i = 0; i < 4; i++)
	{
		int tmp = 0;
		tmp = my_array[i];
		if(tmp>my_array[i+1])
		{
			my_array[i]=my_array[i+1];
			my_array[i + 1] = tmp;
		}
		std::cout << my_array[0] << "\t" << my_array[1] << "\t" << my_array[2] << "\t" << my_array[3] << "\t" << my_array[4] << "\n";

	}

	system("pause");

}

