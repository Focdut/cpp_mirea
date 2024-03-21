#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec1 = { 1,2,3,4,5 };
    cout << endl << vec1[2]<< endl;
    int* p{ new int[6] { 1, 2, 3, 4, 5 } }; //{ 1, 2, 3, 4, 5, 0 }

    // используем индексы
    for (unsigned i{}; i < 6; i++)
    {
        std::cout << p[i] << "\t";
    }
    std::cout << std::endl;

    delete[] p;



    unsigned rows = 3;       // количество строк
    unsigned columns = 2;    // количество столбцов
    int** numbers{ new int* [rows] {} };  // выделяем память под двухмерный массив
    for (unsigned i{}; i < rows; i++)
    {
        numbers[i] = new int[columns] {};
    }

    // вводим данные для таблицы rows x columns
    for (unsigned i{}; i < rows; i++)
    {
        std::cout << "Enter data for " << (i + 1) << " row" << std::endl;
        // вводим данные для столбцов i-й строки
        for (unsigned j{}; j < columns; j++)
        {
            std::cout << (j + 1) << " column: ";
            std::cin >> numbers[i][j];
        }
    }
    // вывод данных
    for (unsigned i{}; i < rows; i++)
    {
        // выводим данные столбцов i-й строки
        for (unsigned j{}; j < columns; j++)
        {
            std::cout << numbers[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    for (unsigned i{}; i < rows; i++)
    {
        delete[] numbers[i];
    }
    delete[] numbers;
/*Enter data for 1 row
1 column: 2
2 column: 3
Enter data for 2 row
1 column: 4
2 column: 5
Enter data for 3 row
1 column: 6
2 column: 7

2       3
4       5
6       7*/


}
