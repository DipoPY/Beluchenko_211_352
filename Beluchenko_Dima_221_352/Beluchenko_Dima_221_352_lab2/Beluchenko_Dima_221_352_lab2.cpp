#include<iostream>
#include<string>

double fac(int N)
{
	if (N < 0)
	{
		return 0;
	}
	if (N == 0)
	{
		return 1;
	}
	else
	{
		return N * fac(N - 1);
	}
}

void task1()
{
	std::cout << "Задание 1." << std::endl;
	int a;
	std::cin >> a;
	for (int i = 1; i <= a; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			std::cout << j;

		}
		std::cout << '\n';
	}

}

void task2()
{
	int n, z;
	std::cout << std::endl;
	std::cout << "Задание 2." << std::endl;
	std::cin >> n;
	for (int k = 0; k <= n; k++)
	{
		z = n - k;
		std::cout << "Бином = " << (fac(n)) / (fac(z) * fac(k)) << "\t k=" << k << "\n";

	}
	std::cout << "\n\n\n";
}

void task3()
{
	std::cout << std::endl;
	std::cout << "Задание 3." << std::endl;
	std::string end;
	double total = 0;
	int k;
	end = "";
	k = 0;
	while (end != "end")
	{
		std::cout << "Введите: ";
		std::cin >> end;
		if (end != "end")
		{
			total += std::stod(end);
			k++;
		}
	}
	std::cout << float(total / k) << "\n\n\n";
}

int main()
{
	setlocale(LC_ALL, "Russian");
	while (true)
	{


		int m;
		std::cout << "Что вы хотите выполнить? \n"
			<< "1. задание 1\n"
			<< "2. задание 2\n"
			<< "3. задание 3\n"
			<< "4. выход\n";
		std::cin >> m;
		switch (m)	
		{
		case 1:
		{
			task1();
			break;
		}
		case 2:
		{
			task2();
			break;
		}



		case 3:
		{
			task3();
			break;
		}
		case 4:
		{
			return 0;
		}


		default:

		{
			return 0;
		}

		}
	}
}