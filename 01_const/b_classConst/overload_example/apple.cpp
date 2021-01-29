/*
 * @Descripttion: 
 * @version: 
 * @Author: JiaXiangwei
 * @Date: 2021-01-29 11:47:22
 * @LastEditors: sueRimn
 * @LastEditTime: 2021-01-29 11:51:03
 */
class Apple
{
private:
    int people[100];

public:
    Apple(int i);
    static const int apple_number;
    void take(int num) const;
    int add(int num);
    int add(int num) const;
    int getCount() const;
    ~Apple();
};