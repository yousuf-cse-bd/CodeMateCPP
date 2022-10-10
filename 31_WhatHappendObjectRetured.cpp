/**
 * @file 31_WhatHappendObjectRetured.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief There is no special happent 
 * @version 0.1
 * @date 2022-10-10
 * @since MonDay; 10:07 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <cstring>
#pragma pack(1)
using namespace std;

class ObjectReturn{
private:
    char name[25];
public:
    ObjectReturn(){
        cout<<"\tConstructor Calling..."<<endl;
    }
    void getName(char *n){
        strcpy(name, n);
    }
    void printName(void){
        cout<<"So your name is: "<<name<<endl;
    }
    ~ObjectReturn(){
        cout<<"\tDestructor..."<<endl;
    }
};

ObjectReturn myFunction(void){
    char name[25];
    cout<<"Enter your name here: ";
    cin>>name;
    ObjectReturn object;
    object.getName(name);
    return object;
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    ObjectReturn mainObject;
    mainObject = myFunction();
    mainObject.printName();
    return 0;
}
