/**
 * @file StandAloneFnction.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief This is a simple stand-alone function
 * @version 0.1
 * @date 2023-01-19
 * @since ThursDay; 11:16 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;
/*No-Paremeters and no return typed function*/
inline const void standAloneFunction(void){ /*inline & const not mandatory*/
    cout<<"This is a stand-alone function."<<endl;
}
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    standAloneFunction();
    return 0;
}
