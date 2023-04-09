/**
 * @file LocalTimeDate.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Local time and date in C++
 * @version 0.1
 * @date 2023-04-09
 * @since SunDay; 08:57 AM
 * @copyright Copyright (c) 2023
 * @institute Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <iomanip>
#include <ctime>
#include <deque>
#pragma pack(1)
using namespace std;

string currentDayNumber(const int &dayNumber){
	switch(dayNumber){
		case 1: return "1st"; break;
		case 2: return "2nd"; break;
		case 3: return "3rd"; break;
		default: return to_string(dayNumber).append("th");break;
	}
}

int main(int argc, const char *const argv[]){
    system("cls");
	cout<<setprecision(2)<<fixed;
	
	time_t currentTimeDate {time(nullptr)};
	tm *timeDatePtr {localtime(&currentTimeDate)};
	
	printf("Hour: %.2d\n", timeDatePtr->tm_hour);
	printf("Minute: %.2d\n", timeDatePtr->tm_min);
	printf("Second: %.2d\n", timeDatePtr->tm_sec);
	cout<<"------------------------------------------"<<endl;
	
	cout<<"Today is: ";
	switch(timeDatePtr->tm_wday){
		case 0: cout<<"SunDay "<<currentDayNumber(timeDatePtr->tm_yday)<<endl; break;
		case 1: cout<<"MonDay"<<currentDayNumber(timeDatePtr->tm_yday)<<endl; break;
		case 2: cout<<"TuesDay"<<currentDayNumber(timeDatePtr->tm_yday)<<endl; break;
		case 3: cout<<"WednesDay"<<currentDayNumber(timeDatePtr->tm_yday)<<endl; break;
		case 4: cout<<"ThursDay"<<currentDayNumber(timeDatePtr->tm_yday)<<endl; break;
		case 5: cout<<"FriDay"<<currentDayNumber(timeDatePtr->tm_yday)<<endl; break;
		case 6: cout<<"SaturDay"<<currentDayNumber(timeDatePtr->tm_yday)<<endl; break;
		default: cout<<"Out of week..!"<<endl; break;
	}
	
	printf("%.2d-%.2d-%.4d\n", timeDatePtr->tm_mday, timeDatePtr->tm_mon+1, timeDatePtr->tm_year+1900);
	
	const deque <string> monthsName{"January", "February", "March", "April",
	"May", "June", "July", "August", "September", "October", "November", "December"};
	
	printf("%.2d/", timeDatePtr->tm_mday);
	cout<<monthsName.at(timeDatePtr->tm_mon)<<"/";
	printf("%.2d\n", timeDatePtr->tm_year+1900);
	
	constexpr const char smilee{2};
	cout<<setw(50)<<setfill(smilee)<<right<<"HappyEnding...!"<<endl;
	
	system("pause>0");
};