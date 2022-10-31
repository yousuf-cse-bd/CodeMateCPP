/**
 * @file SwapUsingTemplate.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Universal swaping techique
 * @version 0.1
 * @date 2022-10-31
 * @since MonDay; 10:41 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;
/*Swaping technique using template class with help third variable*/
template <class DataType> void swaping(DataType &var1, DataType &var2){
    DataType temp;
    temp = var1;
    var1 = var2;
    var2 = temp;
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    string number1, number2;
    number1 = "10.3", number2 = "23.5";
    cout<<"\tBefore swaping:"<<endl;
    cout<<"Number1 = "<<number1<<"\tNumber2 = "<<number2<<endl;
    swaping(number1, number2);
    cout<<"\tAfter swaping:"<<endl;
    cout<<"Number1 = "<<number1<<"\tNumber2 = "<<number2<<endl;
    return 0;
}
