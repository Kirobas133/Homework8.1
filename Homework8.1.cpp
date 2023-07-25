// Homework8.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <map>
#include <Windows.h>
#include <vector>
#include <algorithm>

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    std::map <char, int> textmap;
    std::string text = "Hello world!!";

    for (int i = 0; i < text.length(); i++) {
        if (textmap.find(text[i]) != textmap.end()) {
            textmap[text[i]]++;
        }
        else {
            textmap[text[i]] = 1;
        }
    }
   // for (const auto& elem : textmap) {
   //     std::cout << elem.first << ": " << elem.second << std::endl;
   // }
    std::vector<std::pair<int, char>> vec;
    for (const auto& elem : textmap) {
        vec.push_back(std::make_pair(elem.second, elem.first));
    }
    std::sort(vec.begin(), vec.end(), std::greater<>());

    for (auto elem : vec) {
        std::cout << elem.second << ": " << elem.first << std::endl;
    }
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
