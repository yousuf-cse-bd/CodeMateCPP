/**
 * @file 10_ObjectGlobally.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Object declared globally result constructor calling skiped
 * @version 0.1
 * @date 2022-10-03
 * @since MonDay; 10:25 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

class MyClass{
public:
    /*If object is globally then constructor not invoking*/
    MyClass(){
        cout<<"Default constructor not invoked...!"<<endl;
    }
    /*Member function*/
    void memberFunction(){
        cout<<"\tA member function()"<<endl;
    }
};
/*Object declared gloally*/
MyClass myObject;
void myFunction(){
    cout<<"Call from myFunction()..."<<endl;
    myObject.memberFunction();
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    myFunction();
    cout<<"Call from main()..."<<endl;
    myObject.memberFunction();
    
    return 0;
}
