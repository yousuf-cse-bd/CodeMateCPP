/**
 * @file 29_CallByReference.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief One times called constructor and destructor
 * @version 0.1
 * @date 2022-10-09
 * @since SunDay; 11:21 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

class CallByReference{
private:
    int *a; /*No problem for any type of variable*/
    static int count;
public:
    CallByReference(int x){
        a = new int;
        cout<<"\tThe Constructor..."<<endl;
        *a = x;
        count ++;
    }
    void showNumber(void){
        cout<<"The number: "<<*a<<endl;
    }
    static void objectCount(void){
        cout<<"The object number: "<<count<<endl;
    }
    ~CallByReference(){
        cout<<"\tThe Destructor..."<<endl;
        delete a;
        a = nullptr;
    }

    // CallByReference(CallByReference &copyConstructor){
    //     a = copyConstructor.a;
    // }
};
int CallByReference :: count;
void myFunction(CallByReference *pointerObject){
    pointerObject->showNumber();
    CallByReference :: objectCount();
    delete pointerObject;
    pointerObject = nullptr;
}
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    CallByReference reference(101);
    reference.showNumber();
    myFunction(&reference);
    
    return 0;
}
