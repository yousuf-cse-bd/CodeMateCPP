/**
 * @file 61_VirtualFunctionConstructorDestructor.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Use of virtual key word for derived class destructor
 * @version 0.1
 * @date 2022-10-29
 * @since SaturDay; 10:01 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class A{
public:
    A(){
        cout<<"Creating an object of type A."<<endl;
    }
    virtual void message(void){
        cout<<"message() from class A."<<endl;
    }
    virtual ~A(){
        cout<<"\tDestructor object of type A."<<endl;
    }
};

class B : public A{
private:
    int *p;
public:
    B(){
        p = new int[5];
        cout<<"Creating an object of type B."<<endl;
    }
    void message(void){
        cout<<"message() from class B."<<endl;
    }
    ~B(){
        cout<<"\tDestructor object pf type B."<<endl;
        delete [] p;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    A *ptr = new B();
    ptr->message();
    delete ptr;
    return 0;
}
