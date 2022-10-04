/**
 * @file 15_AssignmentSatementWithPointerMember.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief If member data is pointer then content will also change.
 * @version 0.1
 * @date 2022-10-04
 * @since TuesDay; 03:43 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <cstring>
using namespace std;
#pragma pack(1)
class StringLength{
public:
    char *p;
    StringLength(){
        /*Dynamic memory alocation*/
        p = new char[50];
    }
    void printInfo(){
        cout<<p<<" length is: "<<strlen(p)<<endl;
    }
    ~StringLength(){
        cout<<"\n\tThanks."<<endl;
        /*Memory de-allocation succesed*/
        delete p;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    StringLength str1, str2;
    strcpy(str1.p, "String1 is: Hello how are you?");
    strcpy(str2.p, "String2 is: I am not fine.");

    cout<<"Before assigning:"<<endl;
    str1.printInfo(); /*Print content of p of str1*/
    str2.printInfo(); /*Print content of p of str2*/
    /*Assigning object str1 to str2*/
    str2 = str1;
    strcpy(str1.p, "This string assigning to STR1"); /*Content of str2 will also change*/
    cout<<"After Assigning:"<<endl;
    str1.printInfo();
    str2.printInfo();
    return 0;
}
