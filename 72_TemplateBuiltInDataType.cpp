/**
 * @file 72_TemplateBuiltInDataType.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Template as paramter bult-in data-type
 * @version 0.1
 * @date 2022-10-31
 * @since MonDay; 12:20 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

template <class DataType, unsigned int size>
class MyClass{
private:
    DataType elementSet[size];
public: 
    /*Constructor*/
    MyClass(){
        for(unsigned int i = 0; i < size; i++){
            *(elementSet + i) = 0;
        }
    }
    void getElements(void){
        cout<<"The elements are: ";
        for(DataType x : elementSet){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    void setElements(void){
        for(unsigned int i = 0; i < size; i++){
            cout<<"Index["<<i<<"]: Element = ";
            cin>>*(elementSet + i);
        }
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    MyClass <unsigned int, 5> object;
    object.getElements();

    object.setElements();
    object.getElements();
    return 0;
}
