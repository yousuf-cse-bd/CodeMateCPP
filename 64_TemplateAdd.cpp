/**
 * @file 64_TemplateAdd.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Template can be replaced function overloading
 * @version 0.1
 * @date 2022-10-29
 * @since SaturDay; 06:35 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;
/*Template prototype*/
template <class DataType> DataType add(DataType number1, DataType number2);
/*Template definition*/
template <class DataType> DataType add(DataType number1, DataType number2){
    return (number1 + number2);
}
/*Driver code*/
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    cout<<add(5,6)<<endl;
    cout<<add(float(5.6), float(6.5))<<endl;
    return 0;
}
