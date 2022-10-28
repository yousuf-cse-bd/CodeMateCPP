/**
 * @file 58_BaseClassAndBasePointer.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Function overriding with base pointer and not virtual key word
 * @version 0.1
 * @date 2022-10-28
 * @since 04:39 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;
/*Hierarchical inharitance example*/

class Base{
public:
    void simpleMessage(void){
        cout<<"This is from Base class."<<endl;
    }
};

class Derived1: public Base{
public:
    void simpleMessage(void){
        cout<<"This is from Derived1 class."<<endl;
    }
};

class Derived2: public Base{
    public:
    void simpleMessage(void){
        cout<<"This is from Derived1 class."<<endl;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Base *basePtr; /*Base class pointer object*/
    basePtr->simpleMessage();
    Derived1 d1; /*Derived1 class d1 object*/
    Derived2 d2; /*Derived2 class d2 object*/

    /*basePtr points to Derived1 classed d1 object*/
    basePtr = &d1;
    basePtr->simpleMessage();
    /*basePtr points to Derived2 classed d2 object*/
    basePtr = &d2;
    basePtr->simpleMessage();
    return 0;
}
