/**
 * @file 44_ConstructorParamters.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Based class parameter constrcutor and derived class object
 * @version 0.1
 * @date 2022-10-15
 * @since SaturDay; 07:50 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class BaseClass{
private:
    int number1, number2;
    string name;
public:
    BaseClass(int number1, int number2){
        this->number1 = number1;
        this->number2 = number2;
        cout<<number1<<" "<<number2<<endl;
    }
    BaseClass(string name){
        this->name = name;
        cout<<"My Name: "<<name<<endl;
    }
};

class DerivedClass : private BaseClass{
private:
    int number1, number2;
public:
    DerivedClass(int number1, int number2):BaseClass(number1, number2){
        this->number1 = number1;
        this->number2 = number2;
    }
    DerivedClass(string name):BaseClass(name){}
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    DerivedClass d1(10,15);
    DerivedClass d2("Yousuf");
    return 0;
}
