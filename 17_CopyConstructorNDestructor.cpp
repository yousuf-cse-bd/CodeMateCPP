/**
 * @file 17_CopyConstructorNDestructor.cpp17_CopyConstructorNDestructor.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief When you use copy-constructor be careful for destructor possible value missing
 * @version 0.1
 * @date 2022-10-04
 * @since TuesDay; 10:06 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <cstring>
using namespace std;
#pragma pack(1)
class StringLength{
public:
    char *fullname;
    /*Default constrcutor*/
    StringLength(){
        fullname = new char[30];
    }
    void printInfo(){
        cout<<"This full name: "<<fullname<<", its length: "<<strlen(fullname)<<endl;
    }
    /*Destructor: Never takes parameter*/
    // ~StringLength(){
    //     delete fullname;
    // }
    // /*A copy constructor*/
    StringLength(StringLength &str){
        strcpy(fullname, str.fullname);
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    StringLength str1;
    cout<<"Before Assigning:"<<endl;
    strcpy(str1.fullname, "Str1: Muhammad Yousuf Ali");
    str1.printInfo();
    // delete str1.fullname;
    cout<<"From main: "<<str1.fullname<<endl;
    cout<<"After Assigning:"<<endl;
    StringLength str2 = str1;
    strcpy(str1.fullname, "Str1: Muhammad Imtiaz Maruf");
    str1.printInfo();
    str2.printInfo();
    delete str1.fullname;
    delete str2.fullname;
    return 0;
}
