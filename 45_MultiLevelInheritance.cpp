/**
 * @file 45_MultiLevelInheritance.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Multilevel inheritance with parameterized constructor
 * @version 0.1
 * @date 2022-10-15
 * @since SaturDay; 10:42 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class BaseClass{
private:
    unsigned int id;
public:
    BaseClass(unsigned int id){
        this->id = id;
        cout<<"Base Class Constructor: "<<id<<endl;
    }
    ~BaseClass(){
        cout<<"\t\tBase Class Destructor..."<<endl;
    }
};

class DerivedClass1 : public BaseClass{
int number;
public:
    DerivedClass1(int number):BaseClass(101){
        this->number = number;
        cout<<"Derived Class 1 Constructor..."<<endl;
        cout<<"The number: "<<number<<endl;
    }
    ~DerivedClass1(){
        cout<<"\t\tDerived Class 1 Destructor..."<<endl;
    }
};

class DerivedClass2: public DerivedClass1{
public:
    DerivedClass2():DerivedClass1(10){
        cout<<"Derived Class 2 Constructor..."<<endl;
    }
    ~DerivedClass2(){
        cout<<"\t\tDerived Class 2 Destructor..."<<endl;
    }
};


int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    DerivedClass2 d2;
    return 0;
}
