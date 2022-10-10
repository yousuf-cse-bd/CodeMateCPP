/**
 * @file 32_TwoDimentionalObjectArray.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Constructed a two dimentional object's array
 * @version 0.1
 * @date 2022-10-10
 * @since MonDay; 11:14 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class Adds{
private:
    int number1, number2;
public:
    Adds(int number1, int number2){
        this->number1 = number1;
        this->number2 = number2;
    }
    void adderResult(void){
        cout<<number1<<"+"<<number2<<" = "<<number1 + number2<<endl;
    }
    ~Adds(){}
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Adds adder[2][2] = {Adds(15,5), Adds(35,5), Adds(5,55), Adds(5,10)};

    for(register unsigned short int i = 0; i < 2; i++){
        for(register unsigned short int j = 0; j < 2; j++){
            adder[i][j].adderResult();
        }
    }
    return 0;
}

