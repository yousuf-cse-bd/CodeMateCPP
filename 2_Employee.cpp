/**
 * @file 2_Employee.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Employee simple info with worked year
 * @version 0.1
 * @date 2022-10-02
 * @since SunDay; 08:27 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <ctime>
using namespace std;

#pragma pack(1)
class Employee{
private:
    const char *empName;
    int empJoiningYear;
    float empSalary;
public:
    Employee(const char *empName, int empJoiningYear, float empSalary){
        this->empName = empName;
        this->empJoiningYear = empJoiningYear;
        this->empSalary = empSalary;
        printInfo();
    }
private:
    int workedYear(void){
       time_t currentDateTime = time(0);
       tm *timeDatePointer = localtime(&currentDateTime);
       int year = timeDatePointer->tm_year+1900;
       year = year - empJoiningYear;
       return year;
    }
    void printInfo(void){
        cout<<"Name: "<<empName<<endl;
        cout<<"Joining Year: "<<empJoiningYear<<endl;
        cout<<"Salary: "<<empSalary<<endl;
        cout<<"Work Year: "<<workedYear()<<endl;

        cout<<endl;
    }
};


int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Employee sam("Sam", 2021, 12500);
    Employee jadu("Jadu",2022, 1000);
    return 0;
}
