#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Контейнер для обробки рядків: Створіть шаблон класу для роботи з рядками, який дозволяє виконувати операції над рядками, такі як конкатенація, пошук та заміна символів.
template<typename T>
class ConteinerString
{
private:
    vector<T> obj;
public:
    void addString(string value)
    {
        obj.emplace_back(value);
    }
    
    void print()
    {
        for (size_t i = 0; i < obj.size(); i++)
        {
            cout<< obj[i]<<" ";
        }
        cout<<endl;
    }
    
    void replaceSymbol(char oldSymbol, char newSymbol)
    {
        for (size_t i = 0; i < obj.size(); i++)
        {
            for (size_t j = 0; j < obj[i].size(); j++)
            {
                if (obj[i][j] == oldSymbol)
                {
                    obj[i][j] = newSymbol;
                }
            }
        }
    }
    
    
};







//Компаратор: Реалізуйте шаблонний клас для порівняння об'єктів будь-якого типу за допомогою заданого критерію порівняння.

//class Test
//{
//private:
//    int value;
//public:
//    Test(int value):
//    value(value){}
//    
//    bool operator==(const Test& other)
//    {
//        return this->value == other.value;
//    }
//};
//
//template< typename T>
//class Comparator
//{
//public:
//    bool equals(T v1, T v2)
//    {
//        return v1 == v2;
//    }
//};



int main() 
{
    char oldSymbol = 'e';
    char newSymbol = 'r';
    ConteinerString<string> str;
    str.addString("hello");
    str.addString("world");
    str.addString("eeeee");
    str.print();
    str.replaceSymbol(oldSymbol,newSymbol);
    str.print();
    
    
    
    
    
    
    
    
    
    
//Компаратор: Реалізуйте шаблонний клас для порівняння об'єктів будь-якого типу за допомогою заданого критерію порівняння.
//    Comparator<string> t;
//    bool res = t.equals("qwerty", "qwerty");
//    cout<<res<<endl;
//    
//    Comparator<Test> testComparator;
//    Test obj1(1);
//    Test obj2(3);
//    bool res2 = testComparator.equals(obj1, obj2);
//    cout<<res2<<endl;
    
    

}
