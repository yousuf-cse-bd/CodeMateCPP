/**
 * @file 66_ExplicitSpecialization.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Use of explicite specialization function with template but this compiler is clever
 * @version 0.1
 * @date 2022-10-30
 * @since SunDay; 10:03 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <cstring>
using namespace std;
/*The compiler will be code generator for primitive data-type except char*/
template <class DataType> DataType minValue(DataType n1, DataType n2){
    if(n1 < n2){
        return n1;
    }else{
        return n2;
    }
}
// /*Explicit Specialization function, and return type pointer function for string*/
// /*Cause of compiler generated code does not match for char and another primitive data-type*/
// char *minValue(char *str1, char *str2){
//     if(strcmp(str1, str2) < 0){
//         return str1;
//     }else{
//         return str2;
//     }
// }

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    cout<<"The min value: "<<minValue(11, 2)<<endl; 
    cout<<"The min value: "<<minValue("youuf", "Yousuf")<<endl; 
    cout<<"The min value: "<<minValue(12.3f, 25.0f)<<endl;
    return 0;
}
