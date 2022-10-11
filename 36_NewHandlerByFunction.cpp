/**
 * @file 36_NewHandlerByFunction.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Memory allocation error handling
 * @version 0.1
 * @date 2022-10-11
 * @since TuesDay; 10:36 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <new.h>
using namespace std;
void notAllocated(void){
    cout<<"Memory does not allocating...!"<<endl;
    exit(0);
}
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    set_new_handler(notAllocated);

    int *arrayList = new int[9000000];
    *arrayList = 101;
    cout<<"The first element: "<<*arrayList<<endl;
    set_new_handler(0);
    delete[] arrayList;
    arrayList = nullptr;
    return 0;
}
