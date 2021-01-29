/*
 * @Descripttion: 
 * @version: 
 * @Author: JiaXiangwei
 * @Date: 2021-01-28 06:39:17
 * @LastEditors: sueRimn
 * @LastEditTime: 2021-01-28 06:41:19
 */

#include<iostream>
/**
 * by 光城
 * compile: g++ -o file const_file2.cpp const_file1.cpp
 * execute: ./file
 */
extern const int ext;

int main(){

    std::cout<<(ext+15)<<std::endl;
}
