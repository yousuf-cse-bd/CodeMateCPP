/**
 * @file 23_CallByValueMemberVarAsPointer.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Call by value for stan-alone function
 * @version 0.1
 * @date 2022-10-11
 * @since FriDay; 05:25 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class CallByValue{
private:  
    int a, b;
public:
    CallByValue(int x, int y){
        a = x;
        b = y;
    }
    int getMultiple(){
        return(a * b);
    }

    // CallByValue(CallByValue &copyConstructor){
    //     copyConstructor.a = a;
    //     copyConstructor.b = b;
    // }
};

int multipleWith10(CallByValue object){
    object = CallByValue(10,10);
    return (object.getMultiple()*10); /*Return 10*10*10 */
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    CallByValue mainObject = CallByValue(15,15);
    
    cout<<"10*10*10: "<<multipleWith10(mainObject)<<endl;
    cout<<"15*15: "<<mainObject.getMultiple()<<endl;
    return 0;
}