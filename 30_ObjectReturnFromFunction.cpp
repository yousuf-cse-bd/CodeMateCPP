/**
 * @file 30_ObjectReturnFromFunction.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief An object returning from user-defined function to main function
 * @version 0.1
 * @date 2022-10-10
 * @since MonDay; 12:02 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

#pragma pack(1)

class ObjectReturnFromFunction{
private:
    string name;
public:
    ObjectReturnFromFunction(string name){
        this->name = name;
        cout<<"Constructoring..."<<endl;
    }
    void showName(void){
        cout<<"The name: "<<name<<endl;
    }
    ObjectReturnFromFunction(){
        cout<<"\t\tDestructor..."<<endl;
    }
};
/*Not called destructor because of object not declared in main function.*/
ObjectReturnFromFunction myFunction(string name){
    ObjectReturnFromFunction object(name);
    cout<<"In myFunction(): ";
    object.showName();
    return object;
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    ObjectReturnFromFunction mainObject = myFunction("Muhammad Yousuf Ali");
    cout<<"In mainFunction(): ";
    mainObject.showName();
    return 0;
}



