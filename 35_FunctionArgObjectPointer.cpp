/**
 * @file 35_FunctionArgObjectPointer.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief For the function argument as object and parameter pointer-object
 * @version 0.1
 * @date 2022-10-11
 * @since TuesDay; 05:13 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class Adder{
private:
    int number1, number2;
public:
    Adder(int number1, int number2){
        this->number1 = number1;
        this->number2 = number2;
    }
    void addedThem(void){
        cout<<number1<<" + "<<number2<<" = "<<(number1 + number2)<<endl;
    }
};
/*A stan-alone function has two paramters*/
void resultFunction(Adder *ptrObject, const int size){
    cout<<"Adding Operation:"<<endl;
    for(unsigned int i = 0; i < size; i++){
        ptrObject->addedThem();
        ptrObject++;
    }
}
/*Driver code*/
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Adder object[4] = {Adder(5,6), Adder(10,5), Adder(6,6), Adder(101, 0)};
    /*Here the object is type of array, so do not use '&' sign*/
    resultFunction(object, sizeof(object) / sizeof(Adder));
    return 0;
}
