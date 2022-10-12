/**
 * @file 41_PrivateAccessModifier.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief In derived class using private access modifier result all members in base class will be private
 * @version 0.1
 * @date 2022-10-12
 * @since WednesDay; 09:41 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class BaseClass{
private:
    int numBaseClass;
public:
    int getNumber(void){
        cout<<"Enter your favourite number here: ";
        cin>>numBaseClass;
        return numBaseClass;
    }
    // void printNumber(void){
    //     int number = getNumber();
    //     cout<<"Entered the number: "<<number<<endl;
    // }
};

class DerivedClass : private BaseClass{
private:
    int numDerivedClass;
public:
    void printNumberDerivedClass(void){
        // printNumber();
        numDerivedClass = getNumber();
        cout<<"Enterd th e number: "<<numDerivedClass<<endl;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    // BaseClass objectBaseClass;
    // objectBaseClass.getNumber();
    DerivedClass objectDerivedClass;
    objectDerivedClass.printNumberDerivedClass();
    return 0;
}
