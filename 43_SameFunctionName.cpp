/**
 * @file 43_SameFunctionName.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Same member function into two class, accessing by derived classed object
 * @version 0.1
 * @date 2022-10-15
 * @since SaturDay; 05:08 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class BaseClass{
public:
    void helloFunction(void){
        cout<<"Hello, Yousuf, From Base Class..."<<endl;
    }
};

class DerivedClass : public BaseClass{
public:
    void helloFunction(void){
        cout<<"Hello, Yousuf, From Derived Class..."<<endl;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
   DerivedClass d1 = DerivedClass();
   d1.helloFunction();
   d1.BaseClass::helloFunction();
    return 0;
}
