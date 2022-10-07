/**
 * @file 19_AnObjectInsideFunction.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Object is created by stan-alone user-define function
 * @version 0.1
 * @date 2022-10-07
 * @since FriDay; 08:39 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

#pragma pack(1)

class StudentInfo{
public:
    string name, id; /*const char *variable is not support here*/
    float cgpa;
    void showInfo(void){
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"CGPA: "<<cgpa<<endl;
    }
};

/*Stan-alone function*/
void objectMakerFunction(string name, string id, float cgpa){
    StudentInfo studetn1;
    studetn1.name = name;
    studetn1.id = id;
    studetn1.cgpa = cgpa;
    studetn1.showInfo();
}
/*Driver code*/
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    /*Called the stan-alone function*/
    objectMakerFunction("Md. Yousuf Ali", "171311101", 3.35);
    system("pause>0");
    return 0;
}
