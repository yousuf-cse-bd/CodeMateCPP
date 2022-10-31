/**
 * @file 69_AverageWithClassTemplate.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Calculation average using template class
 * @version 0.1
 * @date 2022-10-31
 * @since MonDay; 10:50 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

template <class DataType> 
class Average{
private:
    DataType elementSet[5];
public:
    void getElements(void){
        for(unsigned int i = 0; i < 5; i++){
            cout<<"Index["<<i<<"]: Element = ";
            cin>>*(elementSet + i);
        }
    }
    DataType getAverage(void){
        DataType sum = 0;
        for(unsigned int i = 0; i < 5 ; i++){
            sum += *(elementSet + i);
        }
        return (sum / 5);
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Average <int> intAvgObject;
    intAvgObject.getElements();
    cout<<"\tGet <int> Avrage: "<<intAvgObject.getAverage()<<endl;

    Average <double> doubleAveObject;
    doubleAveObject.getElements();
    cout<<"\tGet <double> Average: "<<doubleAveObject.getAverage()<<endl;
    return 0;
}
