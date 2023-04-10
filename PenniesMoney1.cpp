/**
 * @file PenniesMoney1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Floating point accuracy by round() math function
 * @version 0.1
 * @date 2023-04-10
 * @since MonDay; 09:24 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <iomanip>
#include <cmath>
#pragma pack(1)
using namespace std;

int main(int argc, const char *const argv[]){
    system("cls");
	cout<<setprecision(2)<<fixed;

    double amount{};
    cout<<"Enter doller amount: ";
    cin>>amount;

    double pennies1 {amount * 100}; /*Accurated by curly brace assigned*/
    double pennies2 {round(amount * 100)};/*Accurated by round() method*/
    cout<<"Penies(Not Accurate): #"<<pennies1<<"$"<<endl;
    cout<<"Penies(Accurate): #"<<pennies2<<"$"<<endl;
    	
	constexpr const char smilee{2};
	cout<<setw(50)<<setfill(smilee)<<right<<"HappyEnding...!"<<endl;
	
	system("pause>0");
};