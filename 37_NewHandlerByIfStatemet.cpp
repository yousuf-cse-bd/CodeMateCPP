/**
 * @file 37_NewHandlerByIfStatemet.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Memory allocation error handling by if condition (not perfect)
 * @version 0.1
 * @date 2022-10-11
 * @since TuesDay; 10:45 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int *arrayList = new int[500000000l];
    /*If memory allocation not successful then return nullprt or NULL*/
    if(arrayList == NULL){
        cout<<"Memory allocation not successful..!";
        return 1;
    }
    *arrayList = 101;
    cout<<"The first element: "<<*arrayList<<endl;
    delete[] arrayList;
    arrayList = nullptr;
    return 0;
}
