/**
 * @file 21_AnObjectAsFunctionArgument.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Object argument in function
 * @version 0.1
 * @date 2022-10-07
 * @since FriDay; 10:19 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;
#pragma pack(1)
class Calculation{
private:
    int number1, number2;
public:
    Calculation(int number1, int number2){
        this->number1 = number1;
        this->number2 = number2;
    }
    int add(void){
        return (number1+number2);
    }
};
/*A function contains an object as parameter*/
void objectArgFunction(Calculation sum){
    int getObjectValue = sum.add();
    cout<<"Sum = "<<getObjectValue<<endl;
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Calculation object(15, 13);
    objectArgFunction(object);
    return 0;
}
