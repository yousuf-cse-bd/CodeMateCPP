/**
 * @file 67_MultipleGenericType.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Generic data type using template
 * @version 0.1
 * @date 2022-10-30
 * @since 10:43 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

template <class DataType1, class DataType2, class DataType3> void showValue(DataType1 d1, DataType2 d2, DataType3 d3){
    cout<<"D1: "<<d1<<endl;
    cout<<"D2: "<<d2<<endl;
    cout<<"D3: "<<d3<<endl;
    cout<<endl;
}

template <class DataType1, class DataType2> void add(DataType1 n1, DataType2 n2){
    cout<<n1 + n2<<endl;
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    showValue("Yousuf", 101, 3.35f);
    showValue(105, 3.35f, "AlMurshid");
    showValue(3.4f, 103, "Mustafeez");

    add(5, 5);
    add(5, 5.6);
    add(5.5, 5);
    add(5.5, 5.6);
    return 0;
}
