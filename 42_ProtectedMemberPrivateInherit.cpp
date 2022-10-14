/**
 * @file 42_ProtectedMemberPrivateInherit.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Private accessifier is not given access anything
 * @version 0.1
 * @date 2022-10-14
 * @since FriDay; 10:41 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class BaseClass{
private:
    int b1;
protected:
    int b2;
public:
    int b3;
    BaseClass(){
        b1 = 10; b2 = 100; b3 = 1000;
    }
    void showBasedValues(void){
        cout<<"B1: "<<b1<<"\tB2: "<<b2<<"\tB3: "<<b3<<endl;
    }
};

class DerivedClass1 : private BaseClass{
public:
    void showValuesByDerived1(void){
        showBasedValues();
        cout<<"\tB2: "<<b2<<"\tB3: "<<b3<<endl;
    }
};

class DerivedClass2 : protected DerivedClass1{
public:
    void myFunction(void){
        showValuesByDerived1();
    }
};


int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    DerivedClass1 d1 = DerivedClass1();
    d1.showValuesByDerived1();

    DerivedClass2 d2 = DerivedClass2();
    d2.myFunction();
    
    return 0;
}