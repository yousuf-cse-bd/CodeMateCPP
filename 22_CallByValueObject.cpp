/**
 * @file 22_CallByValueObject.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Call by value with object
 * @version 0.1
 * @date 2022-10-08
 * @since SaturDay; 10:00 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

#pragma pack(1)

class CallByValue{
private:  
    int number1, number2;
public:
    void setNumbers(int number1, int number2){
        this->number1 = number1;
        this->number2 = number2;
    }
    int getMultiple(){
        return(number1*number2);
    }
};

int multipleWith10(CallByValue object){
    object.setNumbers(10, 10); /*Values are changed here*/
    return (object.getMultiple()*10); /*Return 10*10*10 */
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    CallByValue mainObject;
    mainObject.setNumbers(15, 15);
    cout<<"10*10*10: "<<multipleWith10(mainObject)<<endl;
    cout<<"15*15: "<<mainObject.getMultiple()<<endl;
    return 0;
}
