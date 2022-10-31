/**
 * @file 74_ExplicitTemplateClass.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Explicit special object template class
 * @version 0.1
 * @date 2022-10-31
 * @since MonDay; 09:55 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

template <class DataType>
class Test{
public:
    Test(){
        cout<<"This is object of generated class."<<endl;
    }
};

template <>
class Test <char>{
public:
    Test(){
        cout<<"This is object of specialized <char> class."<<endl;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Test <double> t1; /*This is object of generated class*/
    Test <char> t2; /*This is object of specialized class*/
    Test <int> t3; /*This is object of generated class*/
    return 0;
}
