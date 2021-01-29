/*
 * @Descripttion: 
 * @version: 
 * @Author: JiaXiangwei
 * @Date: 2021-01-29 13:21:39
 * @LastEditors: sueRimn
 * @LastEditTime: 2021-01-29 13:23:28
 */
#include<iostream>
using namespace std;

class Base  {
    public:
        Base()    { cout << "Constructor: Base" << endl; }
        virtual ~Base()   { cout << "Destructor : Base" << endl; }
};

class Derived: public Base {
    public:
        Derived()   { cout << "Constructor: Derived" << endl; }
        ~Derived()   { cout << "Destructor : Derived" << endl; }
};

int main()  {
    Base *Var = new Derived();
    delete Var; //析构函数先调用派生类的，再调用基类的
    return 0;
}