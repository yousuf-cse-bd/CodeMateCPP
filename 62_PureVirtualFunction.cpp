/**
 * @file 62_PureVirtualFunction.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Pure virtual function, must be write function definition
 * @version 0.1
 * @date 2022-10-29
 * @since SaturDay; 11:05 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class Base{
public:
    virtual void virtualFunction(void){} /*Simple virtual function*/
    virtual void pureVirtualFunction(void) = 0;  /*Pure virtual function*/
};

class Derived: public Base{
public:
    void virtualFunction(void){
        cout<<"A virtual function, print from derived class."<<endl;
    }
    void pureVirtualFunction(void){
        cout<<"A pure virtual function must be overriding."<<endl;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    /*If a pure virtual function is so must using new key word*/
    Base *base = new Derived(); 
    base->virtualFunction();
    base->pureVirtualFunction();
    delete base;
   
    return 0;
}
