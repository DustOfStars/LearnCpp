/*
 * @Descripttion: 
 * @version: 
 * @Author: JiaXiangwei
 * @Date: 2021-01-28 06:31:31
 * @LastEditors: sueRimn
 * @LastEditTime: 2021-01-28 06:38:28
 * 
 * compile: g++ -o file file2.cpp file1.cpp
 * execute: ./file
 */

#include<iostream>

extern int ext;   //非const，在file1不用显式声明extern，但是file2，也就是本文件用外部的需要说明extern

int main(){

    std::cout<<(ext+10)<<std::endl;
}