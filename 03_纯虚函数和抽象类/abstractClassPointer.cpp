/*
 * @Descripttion: 
 * @version: 
 * @Author: JiaXiangwei
 * @Date: 2021-01-29 13:28:44
 * @LastEditors: sueRimn
 * @LastEditTime: 2021-01-29 13:29:09
 */
#include<iostream> 
using namespace std; 

class Base
{ 
    int x; 
public: 
    virtual void show() = 0; 
    int getX() { return x; } 
    
}; 
class Derived: public Base 
{ 
public: 
    void show() { cout << "In Derived \n"; } 
    Derived(){}
}; 
int main(void) 
{ 
    //Base b;  //error! 不能创建抽象类的对象
    //Base *b = new Base(); error!
    Base *bp = new Derived(); // 抽象类的指针和引用 -> 由抽象类派生出来的类的对象
    bp->show();
    return 0; 
} 