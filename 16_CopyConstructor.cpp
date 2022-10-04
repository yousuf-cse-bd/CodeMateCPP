/**
 * @file 16_CopyConstructor.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Copy constructor: not affected assigned object
 * @version 0.1
 * @date 2022-10-04
 * @since TuesDay; 09:24 PM
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
    StringLength(){ /*Default constructor*/
        p = new char[50];
    }
    void showInfo(){
        cout<<p<<", is length = "<<strlen(p)<<endl;
    }
    // ~StringLength(){
    //     cout<<"\tThanks"<<endl;
    //     delete p; /*De-allocation memory by delete key-word*/
    // }
    /*Now copy constructor*/
    StringLength(StringLength & s1){ /*Copy constrcutor's definition can be inline*/
        strcpy(p, s1.p);
    }

};
/*Copy constrcutor's definition can be out of class using scope resolution operator (::)*/
// StringLength ::StringLength(StringLength &s1){
//     /*strcpy(to, from) or p = s1.p*/
//     strcpy(p, s1.p);
// }
/*Drivr code*/
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    StringLength str1;
    strcpy(str1.p, "Str1: Muhammad Yousuf Ali");
    cout<<"Before assigning:"<<endl;
    str1.showInfo();
    
    StringLength str2 = str1;
    strcpy(str1.p, "Str1: Tofayel Ahmad Tamim");
    cout<<"After Assigning:"<<endl;
    str1.showInfo();
    str2.showInfo();
    /*Finaly memory de-allocation from HEAP memory part*/
    delete str1.p;
    delete str2.p;
    return 0;
}
