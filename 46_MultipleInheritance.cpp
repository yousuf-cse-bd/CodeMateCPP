/**
 * @file 46_MultipleInheritance.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Multiple inheritance with parameterized constructor
 * @version 0.1
 * @date 2022-10-15
 * @since SaturDay; 10:44 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class Maruf{
private:
    string firstName, lastName;
public:
    Maruf(string firstName, string lastName){
        this->firstName = firstName;
        this->lastName = lastName;
    }
    void marufInfo(void){
        cout<<"First Name: "<<firstName<<endl;
        cout<<"Last Name: "<<lastName<<endl;
    }
    ~Maruf(){
        cout<<"\t\tMaruf's Destrctor...!"<<endl;
    }
};

class Tamim{
private:
    string fullName;
public:
    Tamim(string fullName){
        this->fullName = fullName;
    }
    void tamimInfo(void){
        cout<<"Full Name: "<<fullName<<endl;
    }
    ~Tamim(){
        cout<<"\t\tTamim's Destrctor..."<<endl;
    }
};

class Istiak{
private:
    unsigned int age;
public:
    Istiak(unsigned int age){
        this->age = age;
    }
    void istiakInfo(void){
        cout<<"Age: "<<age<<endl;
    }
    ~Istiak(){
        cout<<"\t\tIstaik's Destructor..."<<endl;
    }
};

class Yousuf : public Maruf, public Tamim, public Istiak{
private:
    int id;
public:
    Yousuf():Maruf("Imitaz", "Maruf"),Tamim("Tofayel Ahmad Tamim"),Istiak(13){
        cout<<"Yousuf Class Constructor..."<<endl;
    }
    ~Yousuf(){
        cout<<"\t\tYousuf class destructor...!"<<endl;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Yousuf ali;
    ali.marufInfo();
    ali.tamimInfo();
    ali.istiakInfo();
    return 0;
}
