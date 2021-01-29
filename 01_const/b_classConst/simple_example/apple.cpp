/*
 * @Descripttion: 
 * @version: 
 * @Author: JiaXiangwei
 * @Date: 2021-01-29 11:22:06
 * @LastEditors: sueRimn
 * @LastEditTime: 2021-01-29 12:02:06
 */
#include <iostream>
using namespace std;

class  Apple
{
private:
    /* data */
    int people[100];
public:
    Apple(int i/* args */);
    const int apple_number;
    void take(int num) const;
    void add(int num);
    void add(int num) const;
    int getCount() const;
    ~ Apple();
};

Apple:: Apple(int i/* args */):apple_number(i)
{
}

void Apple::add(int num)
{
    take(num);
}

void Apple::add(int num) const
{
    take(num);
}

void Apple::take(int num) const
{
    cout << "take func " << num <<endl;
}

int Apple::getCount() const
{
    take(1);
    add(5);
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
    const Apple b(3);
    b.add(100);
    return 0;
}
