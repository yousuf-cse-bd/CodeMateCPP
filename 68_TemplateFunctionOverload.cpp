/**
 * @file 68_TemplateFunctionOverload.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Template function overloading using templates
 * @version 0.1
 * @date 2022-10-30
 * @since SunDay; 11:05 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;
/*Here, single paramter*/
template <class DataType1> void showInfo(DataType1 var1){
    cout<<"Single generic type:\n"<<"Var1: "<<var1<<endl;
    cout<<endl;
}
/*Here, double parameters*/
template <class DataType1, class DataType2> void showInfo(DataType1 var1, DataType2 var2){
    cout<<"Double generic type:"<<endl;
    cout<<"Var1: "<<var1<<endl;
    cout<<"Var2: "<<var2<<endl;
    cout<<endl;
}
/*Here, Triple parameters*/
template <class DataType1, class DataType2, class DataType3>
void showInfo(DataType1 var1, DataType2 var2, DataType3 var3){
    cout<<"Tripple generic type:"<<endl;
    cout<<"Var1: "<<var1<<endl;
    cout<<"Var2: "<<var2<<endl;
    cout<<"Var3: "<<var3<<endl;
    cout<<endl;
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    showInfo("Yousuf");
    showInfo(101);

    showInfo("Yousuf", 101);
    showInfo("Yousuf", 101, 3.5f);
    return 0;
}
