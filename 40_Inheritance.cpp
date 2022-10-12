/**
 * @file 40_Inheritance.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Inheritance extend code reusability
 * @version 0.1
 * @date 2022-10-12
 * @since WednesDay; 08:57 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

class Student{
private:
    string name;
    unsigned int id;
public:
    Student(string name, unsigned int id){
        this->name = name;
        this->id = id;
    }
    void showStudentInfo(void){
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
    }
};

class Registration : public Student{
private:
    float registrationFees;
    string registrationDate;
public: 
    Registration(string name, unsigned int id, float registrationFees, string registrationDate):Student(name, id){
        this->registrationFees = registrationFees;
        this->registrationDate = registrationDate;
    }
    void showRegistrationInfo(void){
        cout<<"Registration Fees: "<<registrationFees<<endl;
        cout<<"Registration Date: "<<registrationDate<<endl;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Registration studentRegistration("Md. Yousuf Ali", 171311101, 10000, "11/10/2022");
    studentRegistration.showStudentInfo();
    studentRegistration.showRegistrationInfo();
    return 0;
}
