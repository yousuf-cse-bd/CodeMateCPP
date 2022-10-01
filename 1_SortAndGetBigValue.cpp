/**
 * @file 1_SortAndGetBigValue.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Get sorted list and largest value using class
 * @version 0.1
 * @date 2022-10-01
 * @since SaturDay; 07:32 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

#pragma pack(1)

class SortedLargest{
    private:
    unsigned short int i, j;
    int getLarge, list[5];
    public:
    /*Class Constructor*/
    SortedLargest(void){
        cout<<"Enter five integer:\n";
        for(i = 0; i < 5; i++){
            cin>>*(list+i);
        }
        getSortedArray();
        getLargestValue();
    }
    private:
    /*Function to sort array-list*/
    void getSortedArray(void){
        /*Modified bubble sort algoirthm*/
        bool swapStatus = true;
        for(i = 0; i < 5 - 1 && swapStatus == true; i++){
            swapStatus = false;
            for(j = 0; j<5-(i+1); j++){
                if(*(list+j) > *(list+j+1)){
                    swap(*(list+j), *(list+j+1));
                    swapStatus = true;
                }
            }
        }
        /*Print the sorted array-list*/
        cout<<"\nAfter sorting: ";
        for(i = 0; i<5; i++){
            cout<<*(list+i)<<" ";
        }
        cout<<endl;
    }
    /*Function to get largest value*/
    void getLargestValue(void){
        getLarge = *list;
        for(i = 1; i<5; i++){
            if(getLarge < *(list+i)){
                getLarge = *(list+i);
            }
        }
        cout<<"\nThe largest value: "<<getLarge<<endl;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    SortedLargest object;
    return 0;
}
