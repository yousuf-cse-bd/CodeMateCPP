/**
 * @file 18_CopyConstructorDynamicArray.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Having some confusion char and integer
 * @version 0.1
 * @date 2022-10-05
 * @since WednesDay; 07:40 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

class ArrayTraversing{
public:
    int *elements;
    ArrayTraversing(){
        elements = new int[5];
    }
    void showArrayElements(){
        cout<<"Array Elements: ";
        for(unsigned short int i = 0; i<5; i++){
            cout<<*(elements+i)<<" ";
        }
        cout<<endl;
    }
    ~ArrayTraversing(){
        delete elements;
    }
    ArrayTraversing(ArrayTraversing &array){
        elements = array.elements;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    cout<<"Before Assigning:"<<endl;
    ArrayTraversing object1;
    for(unsigned short int i = 0; i<5; i++){
        object1.elements[i] = i+1;
    }
    object1.showArrayElements();
    cout<<"\nAfter Assigning:"<<endl;
    ArrayTraversing object2 = object1;
    for(unsigned short int i = 0; i<5; i++){
        object1.elements[i] = i+10;
    }
    object1.showArrayElements();
    object2.showArrayElements();
    delete object1.elements;
    delete object2.elements;
    return 0;
}
