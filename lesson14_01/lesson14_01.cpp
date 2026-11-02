// lesson14_01.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>

class Calculator {

public:
    double num1;
    double num2;

    double add()
    {
        return this->num1 + this->num2;
    }

    double multiply()
    {
        return this->num1 * this->num2;
    }

    double subtract_1_2()
    {
        return this->num1 - this->num2;
    }

    double subtract_2_1()
    {
        return this->num2 - this->num1;
    }

    double divide_1_2()
    {
        return this->num1 / this->num2;
    }

    double divide_2_1()
    {
        return this->num2 / this->num1;
    }

    bool set_num1(double num1)
    {
        if (num1 != 0)
        {
            this->num1 = num1;
            return true;
        }
        else
        {
            return false;
        }
    }

    bool set_num2(double num2)
    {
        if (num2 != 0)
        {
            this->num2 = num2;
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);

    Calculator test;
    double tempValue;

    while (true)
    {
        std::cout << "Введите num1: ";
        std::cin >> tempValue;

        if (test.set_num1(tempValue))
        {
            break;
        }
        else
        {
            std::cout << "Неверный ввод!\n";
        }
    }
    while (true)
    {
        std::cout << "Введите num2: ";
        std::cin >> tempValue;

        if (test.set_num2(tempValue))
        {
            break;
        }
        else
        {
            std::cout << "Неверный ввод!\n";
        }
    }

    std::cout << "num1 + num2 = " << test.add() << std::endl;
    std::cout << "num1 - num2 = " << test.subtract_1_2() << std::endl;
    std::cout << "num2 - num1 = " << test.subtract_2_1() << std::endl;
    std::cout << "num1 * num2 = " << test.multiply() << std::endl;
    std::cout << "num1 / num2 = " << test.divide_1_2() << std::endl;
    std::cout << "num2 / num1 = " << test.divide_2_1() << std::endl;

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
