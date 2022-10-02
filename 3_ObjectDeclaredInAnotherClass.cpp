/**
 * @file 3_ObjectDeclaredInAnotherClass.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief To setup relationship of two class using create object not inheritance
 * @version 0.1
 * @date 2022-10-02
 * @since SunDay; 03:18 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

#pragma pack(1)
/*Class A*/
class A{
public:
    /*Inline public function of A class*/
    void function1(){
        cout<<"This is a function1() in class A."<<endl;
    }
    /*Inline public function of A class*/
    void function2(){
        cout<<"This is a function2() in class A."<<endl;
    }
};
/*Class B*/
class B{
private:
    /*Create an object of class A into B class using private access-specifier*/
    A a;
public:
    /*Default constructor of B class*/
    B(){
        /*Calling the functions of class A inside B class-constructor*/
        a.function1();
        a.function2();
    }
    /*Public function of class B*/
    void functionB1(){
        cout<<"This is a functionB1() in class B."<<endl;
        /*Calling the private function insider class*/
        functionB2();
    }
private:
    /*Private function of class B*/
    void functionB2(){
        cout<<"This is a functionB2() in class B."<<endl;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    B b;
    b.functionB1();
    return 0;
}