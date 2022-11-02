/**
 * @file 76_ExceptionHandle.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Simple exception handling
 * @version 0.1
 * @date 2022-11-02
 * @since WednesDay; 08:51 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;
void divFunction(){
    float result ,number1, number2;
    cout<<"Enter number1: ";
    cin>>number1;
    cout<<"Enter number2: ";
    cin>>number2;
    if(number2 == 0){
        throw result;
    }
    result = number1 / number2;
    cout<<"Result: "<<result<<endl;
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");

    try{
        divFunction();
    }
    catch(...){
        cout<<"Execption cought, divisor is zero."<<endl;
    }
    

    return 0;
}
