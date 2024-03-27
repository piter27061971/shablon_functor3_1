// ConsoleApplication37.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
# include <vector>
# include <list>

class simple_funktor
{
private:
    unsigned long summa, kol;
public:
    simple_funktor() :summa{ 0 }, kol{0} {}
    void operator ()(std::list <int>  b)
    {
        for (int i : b)
        {
            if ((i%3)==0) 
            {
                kol++;
                summa += i;
            }
        }
    }

    void operator ()(std::vector <int>  b)
    {
        for (int i : b)
        {
            if ((i % 3) == 0)
            {
                kol++;
                summa += i;
            }
        }
    }

    void reset()
    {
        summa = 0;
        kol = 0;
    }
    

   unsigned long  get_sum()
    {
       return summa;
   }
   unsigned long get_count()
   {
       return kol;
   }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    simple_funktor m;
   std::list <int> l1 = { 1,6,7,3,3,5 };
   std::vector <int> l2 = { 1,6,7,3,3,5 };

    m(l1);
    std::cout << "Количество чисел делящихся на 3 равна " << m.get_count() << std::endl;
    std::cout << "Сумма чисел делящихся на 3 равна " << m.get_sum() << std::endl;
    m(l2);
    std::cout << "Количество чисел делящихся на 3 равна " << m.get_count() << std::endl;
    std::cout << "Сумма чисел делящихся на 3 равна " << m.get_sum() << std::endl;


}// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
