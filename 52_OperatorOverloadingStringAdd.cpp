/**
 * @file 52_OperatorOverloadingStringAdd.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Operator overloading, added object string value (polymorphism)
 * @version 0.1
 * @date 2022-10-24
 * @since 09:40 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class Append{
private:
    string firstName;
public:
    Append(){
        firstName = "";
    }
    Append(string firstName){
        this->firstName = firstName;
    }
    Append operator+(string str){
        Append adder;
        adder.firstName = firstName.append(str);
        return adder;
    }
    void showData(void){
        cout<<"The string: "<<firstName<<endl;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Append adder1("Yousuf"), adder2;
    adder2 = adder1 + "Ali";
    adder1.showData();
    adder2.showData();
    return 0;
}
