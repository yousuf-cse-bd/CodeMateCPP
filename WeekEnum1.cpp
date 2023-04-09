/**
 * @file WeekEnum1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief An examole to applying switch-case statement for an week
 * @version 0.1
 * @date 2023-04-09
 * @since SunDay; 07:53 AM
 * @copyright Copyright (c) 2023
 * @institute Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <iomanip>
#pragma pack(1)
using namespace std;

int main(int argc, const char *const argv[]){
    system("cls");
	cout<<setprecision(2)<<fixed;
	
	enum week{SunDay, MonDay, TuesDay, WednesDay, ThursDay, FriDay, SaturDay};
	
	week day = SunDay; /*4 bytes*/
	
	int nextDay{};
	cout<<"Enter a positive number here: ";
	cin>>nextDay;
	nextDay = abs(nextDay);
	switch(day+nextDay){
		case 0: cout<<"SunDay"<<endl; break;
		case 1: cout<<"MonDay"<<endl; break;
		case 2: cout<<"TuesDay"<<endl; break;
		case 3: cout<<"WednesDay"<<endl; break;
		case 4: cout<<"ThursDay"<<endl; break;
		case 5: cout<<"FriDay"<<endl; break;
		case 6: cout<<"SaturDay"<<endl; break;
		default: cout<<"Outof week"<<endl; break;
	}
	
	constexpr const char smilee{2};
	cout<<setw(50)<<setfill(smilee)<<right<<"HappyEnding...!"<<endl;
	
	system("pause>0");
};
