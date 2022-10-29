/**
 * @file 65_TemplateSumElements.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Sum of array elements using template
 * @version 0.1
 * @date 2022-10-29
 * @since SaturDay; 07:18 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <ctime>
using namespace std;
/*DataType array, pointer all supported*/
template <class DataType> DataType sumOfElements(DataType Array[], unsigned int size){
    DataType sum = 0;
    for(register unsigned int i = 0; i < size; i++){
        sum += *(Array+i); /*Pointer notation*/
    }
    return sum;
}
/*Driver code*/
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    unsigned int size = 5;
    int *array = new int[size];
    srand(time(0));
    cout<<"Elements are: ";
    for(register unsigned int i = 0; i < size; i++){
        *(array + i) = rand() % size;
        cout<<*(array + i)<<" ";
    }
    cout<<"\nSum of them: "<<sumOfElements(array, size)<<endl;
    delete array;
    /*By default decimal number is double type*/
    float unitPrice[] = {50.50f, 70.70f, 80.80f, 90.90f, float(10.3)};
    size = sizeof(unitPrice) / sizeof(float);
    cout<<"Sum of double: "<<sumOfElements(unitPrice, size)<<endl;
    return 0;
}
