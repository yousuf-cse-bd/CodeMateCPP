/**
 * @file 42_ProtectedMemberPublicInherit.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Protected memebr is accessed by derived class (multi-level inheritance)
 * @version 0.1
 * @date 2022-10-14
 * @since FriDay; 12:21 PM
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

class DerivedClass1 : public BaseClass{
public:
    void showValuesByDerived1(void){
        cout<<"\tB2: "<<b2<<"\tB3: "<<b3<<endl;
    }
};

class DerivedClass2 : public DerivedClass1{
public:
    void showDataFromDerived2(void){
        cout<<"B2: "<<b2<<"\tB3: "<<b3<<endl;
    }
};

class LeafClass : public DerivedClass2{
public:
    void showDataFromLeafClass(void){
        cout<<"B2: "<<b2<<"\tB3: "<<b3<<endl;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    DerivedClass1 d1 = DerivedClass1();
    d1.showBasedValues();
    d1.showValuesByDerived1();
    DerivedClass2 d2 = DerivedClass2();
    d2.showDataFromDerived2();
    LeafClass leaf;
    leaf.showDataFromLeafClass();
    return 0;
}
