/*
 * @Descripttion: 
 * @version: 
 * @Author: JiaXiangwei
 * @Date: 2021-01-29 11:53:24
 * @LastEditors: sueRimn
 * @LastEditTime: 2021-01-29 12:00:52
 */
#include<iostream>
#include "apple.cpp"
using namespace std;

const int Apple::apple_number=10;

Apple::Apple(int i)
{

}

int Apple::add(int num)
{
    take(num);
}

int Apple::add(int num) const
{
    take(num);
}

void Apple::take(int num) const
{
    cout << "take func " << num << endl;
}

int Apple::getCount() const
{
    take(1);
    return apple_number;
}

Apple::~ Apple()
{
}

int main()
{
    Apple a(2);
    cout << a.getCount() << endl;
    a.add(10);
    const Apple b(10);
    b.add(100);
    return 0;
}

//编译： g++ -o main main.cpp apple.cpp
//结果