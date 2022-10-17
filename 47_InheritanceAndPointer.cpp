/**
 * @file 47_InheritanceAndPointer.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Base Class is not conscious for Derived Class, so compiler throws error.
 * @version 0.1
 * @date 2022-10-17
 * @since MonDay; 08:01 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class BaseClass{
public:
    void displayBaseClassFunction(void){
        cout<<"Hi, this is base class function..."<<endl;
    }
};

class DerivedClass : public BaseClass{
public:
    void displayDerivedClassFunction(void){
        cout<<"Hello, this is derived class function..."<<endl;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    BaseClass baseClassObject, *basePtr;
    DerivedClass derivedClassObject;
    basePtr = &derivedClassObject;
    basePtr->displayBaseClassFunction();
    /*Here BaseClass is not concious for DervedClass, so compiler throws error*/
    // basePtr->displayDerivedClassFunction();
    return 0;
}
