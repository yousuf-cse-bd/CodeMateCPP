/**
 * @file 75_TemplateClassInheriatnce.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Template class inheritance example
 * @version 0.1
 * @date 2022-11-02
 * @since WednesDay; 07:26 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

template <class DataType>
class Base{
public:
    Base(){
        cout<<"This is a base class's constructor."<<endl;
    }
    ~Base(){
        cout<<"\tBase Destructor"<<endl;
    }
};

template <class DataType>
class Derived : public Base <int>{ /*Base class argument must*/
public:
    Derived(){
        cout<<"This is derived class's constructor."<<endl;
    }
    ~Derived(){
        cout<<"\tDerived Destructor"<<endl;
    }
};
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Derived <char> d;
    return 0;
}
