/**
 * @file main.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief C++ support one difinition rule
 * @version 0.1
 * @date 2023-01-27
 * @since FriDay; 10:44 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include "UserDefinedFunction.cpp"
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    double result {add(10, 20)};
    cout<<"resutl: "<<result<<endl;
    return 0;
}
