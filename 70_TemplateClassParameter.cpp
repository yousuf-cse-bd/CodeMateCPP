/**
 * @file 70_TemplateClassParameter.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Template class with parameterize constructor and destructor
 * @version 0.1
 * @date 2022-10-31
 * @since 11:00 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

template <class DataType> 
class Average{
private:
    unsigned int size;
    DataType *elementSet; /*Dynamic DataType Array*/
public:
    Average(unsigned int size){
        this->size = size;
        elementSet = new DataType[size];
    }
    void getElements(void){
        for(unsigned int i = 0; i < size; i++){
            cout<<"Index["<<i<<"]: Element = ";
            cin>>*(elementSet + i);
        }
    }
    DataType getAverage(void){
        DataType sum = 0;
        for(unsigned int i = 0; i < size; i++){
            sum += *(elementSet + i);
        }
        return (sum / size);
    }
    ~Average(){
        delete [] elementSet; /*De-Allocation Memory*/
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Average <int> intAvgObject(5);
    intAvgObject.getElements();
    cout<<"\tGet <int> Avrage: "<<intAvgObject.getAverage()<<endl;

    Average <double> doubleAveObject(5);
    doubleAveObject.getElements();
    cout<<"\tGet <double> Average: "<<doubleAveObject.getAverage()<<endl;
    return 0;
}