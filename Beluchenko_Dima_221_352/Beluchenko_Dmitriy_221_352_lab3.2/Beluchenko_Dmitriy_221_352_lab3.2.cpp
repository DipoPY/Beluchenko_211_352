#include<iostream>
#include<iterator>
#include <string>
#include <strstream>
using std::string;
using namespace std;


void input(int* arr, int size) // Функция ввода
{
    for (int i = 0; i < size; i++)
    {
        cout << "Введите число №" << i + 1 << "-> ";
        cin >> arr[i];
        cout << endl;
    }

}

void out1(int*& arr, int n) // Функция вывода
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }


}


int sum(int num)
{
    int res = 0;
    string a = to_string(num);
    for (int i = 1; i < a.size(); i += 2)
    {
        res += (int)a[i];
    }
    return res;
}


void task3(int*& mas, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (sum(mas[i]) < sum(mas[j]))
            {
                std::swap(mas[i], mas[j]);
            }
        }
    }
}

void task4(int*& mas, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (mas[i] % 10 < mas[j] % 10)
            {
                std::swap(mas[i], mas[j]);
            }
            else if (mas[i] % 10 == mas[j] % 10)
            {
                if (mas[i] > mas[j])
                {
                    std::swap(mas[i], mas[j]);
                }
            }
        }
    }
}





int main()
{
    setlocale(LC_ALL, "Russian");

    int* mas;
    int n = 0;
    while (true)
    {
        int m;


        std::cout << "Что вы хотите выполнить? \n"
            << "1. Ввести массив\n"
            << "2. Вывести массив\n"
            << "3. задание 3\n"
            << "4. Задание 4\n"
            << "5. Очистить массив\n";
        std::cin >> m;
        switch (m)
        {

        case 1:
        {
            cout << '\n';
            cout << "Введите размер массива: " << endl;

            cin >> n; // Задаем размер массива
            mas = new int[n];

            input(mas, n); // Функция ввода 
            break;
            cout << '\n';


        }
        case 2:
        {
            cout << '\n';
            out1(mas, n);
            cout << '\n';
            break;
        }

        case 3:
        {
            task3(mas, n);

            break;

        }
        case 4:
        {
            task4(mas, n);
            break;
        }

        case 5:
        {
            delete mas;
            break;
        }

        default:

        {
            return 0;
        }

        }
    }
}