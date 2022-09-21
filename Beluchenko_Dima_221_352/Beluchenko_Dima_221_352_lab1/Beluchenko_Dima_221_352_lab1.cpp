#include<iostream>
#include<bitset>




int main()
{

	setlocale(LC_ALL, "RUS");
	std::cout << "1.\nБелюченко Дмитрий Николаевич, 221-352 " << std::endl;

	std::cout << "2.\nmin int = " << int(0b10000000000000000000000000000000) << ", max int = " << int(0b01111111111111111111111111111111) << ", size of int = " << sizeof(int) << std::endl;
	std::cout << "min unsigned int = " << "0" << ", max unsigned int = " << UINT_MAX << ", size of unsigned int = 4" << std::endl;
	std::cout << "min short = " << SHRT_MIN << ", max short = " << SHRT_MAX << ", size of short = 2" << std::endl;
	std::cout << "min unsigned short = " << "0" << ", max unsigned short = " << USHRT_MAX << ", size of unsigned short = 2" << std::endl;
	std::cout << "min long = " << LONG_MIN << ", max long = " << LONG_MAX << ", size of long = 4 " << std::endl;
	std::cout << "min long long = " << LLONG_MIN << ", max long long = " << LLONG_MIN << ", size of long long = 8" << std::endl;
	std::cout << "min double = " << DBL_MIN << ", max double = " << DBL_MAX << ", size of double = 8" << std::endl;
	std::cout << "min char =" << char(0b00000000) << ", max char = " << CHAR_MAX << ", size of char = " << sizeof(char) << std::endl;
	std::cout << "min bool = " << "False" << ", max bool = " << "True" << ", size of bool = 1" << std::endl;



	int digit = 0;
	std::cout << "Введите число: ";
	std::cin >> digit;

	std::cout << std::bitset<sizeof(int) * 8>(digit) << std::endl;
	std::cout << "bool " << bool(digit) << std::endl;
	std::cout << "double " << double(digit) << std::endl;
	std::cout << "char " << char(digit) << std::endl;

	int a, x;
	std::cout << "Введите коэффиценты a * x = b ";
	std::cin >> a;
	std::cin >> x;
	std::cout << a << " * x = " << x << std::endl;
	std::cout << "x = " << x << "/" << a << std::endl;
	std::cout << "x = " << double(x) / a;

	std::cout << "\n\n";

	int g, b;
	std::cout << "Введите координаты отрезка на прямой: ";
	std::cin >> g;
	std::cin >> b;
	std::cout << "Середина отрезка находится в точке: " << (g + b) / 2.;

}