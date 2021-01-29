/*
 * @Descripttion: 
 * @version: 
 * @Author: JiaXiangwei
 * @Date: 2021-01-29 13:01:39
 * @LastEditors: sueRimn
 * @LastEditTime: 2021-01-29 13:04:48
 */

#include <iostream>
using namespace std;

class A
{
private:
    int a;/* data */
public:
    A(/* args */);
    virtual void show()=0;
    ~A();
};

A::A(/* args */)
{
}

A::~A()
{
}

int main()
{
    /*
     * 1. 抽象类只能作为基类来派生新类使用
     * 2. 抽象类的指针和引用->由抽象类派生出来的类的对象！
     */
    //A a; // error 抽象类，不能创建对象

    A *a1; // ok 可以定义抽象类的指针

    //A *a2 = new A(); // error, A是抽象类，不能创建对象
}

