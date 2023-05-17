/**
 * @file SwapingWithTemplate.cpp
 * @author: Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Swaping With FUNCTION Template
 * @version 0.1
 * @date 2023-05-17
 * @since WednesDay; 05:57 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

template <typename dataType> constexpr void swaping(dataType &var1, dataType &var2){
    swap(var1, var2);
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    string s1 {"Yousuf"}, s2 {"Muhammad"};
    swaping(s1, s2);
    cout<<s1<<"\t"<<s2<<endl;

    int number1 {10}, number2 {20};
    swap(number1, number2);
    cout<<number1<<"\t"<<number2<<endl;
    return 0;
}
