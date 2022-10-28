/**
 * @file 59_FunctionOverrideVirtualKeyWord.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Virtual function overrideing processed
 * @version 0.1
 * @date 2022-10-28
 * @since FriDay; 05:08 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;
/*Hierarchical inharitance example*/

class Base{
public:
    virtual void simpleMessage(void){
        cout<<"This is from Base classed virtual function."<<endl;
    }
    void noneVirtualFunction(){
        cout<<"No virtual function in base class."<<endl;
    }
};

class Derived1: public Base{
public:
    void simpleMessage(void){
        cout<<"This is from Derived1 class."<<endl;
    }
    void noneVirtualFunction(){
        cout<<"None virtual function in derived1 class."<<endl;
    }
};

class Derived2: public Base{
public:
    /*No override function*/    
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Base *basePtr; /*Base class pointer object*/
    Derived1 d1; /*Derived1 class d1 object*/
    Derived2 d2; /*Derived2 class d2 object*/

    /*basePtr points to Derived1 classed d1 object*/
    basePtr = &d1;
    basePtr->simpleMessage();
    basePtr->noneVirtualFunction();
    /*basePtr points to Derived2 classed d2 object*/
    basePtr = &d2;
    basePtr->simpleMessage(); /*Now print the base class virtual function*/
    
    return 0;
}
