/**
 * @file ConvertingKM2Miles1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Converting Kilometers To Miles & Nautical-Miles
 * @version 0.1
 * @date 2023-04-18
 * @since ThursDay; 06:25 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
#include <iomanip>
#pragma pack(1)
using namespace std;


constexpr double kmToMiles(const double &km){
	return (km * 0.621371);
}

constexpr double kmToNauticalMiles(const double &km){
	return (km * 0.539957);
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
	
	double startKM{0.0};
	double stepKM{0.0};
	double endKM{0.0};
	
	do{
		cout<<"Enter start KM value: ";
		cin>>startKM;
		
		if(startKM < 0){
			cout<<"Start KM is NOT > -1"<<endl;
		}
	}while(startKM < 0);
	
	do{
		cout<<"Enter step KM value: ";
		cin>>stepKM;
		
		if(stepKM <= 0){
			cout<<"Step KM is NOT > 0"<<endl;
		}
	}while(stepKM <= 0);


	do{
		cout<<"Enter end KM value: ";
		cin>>endKM;
		
		if(endKM < 0){
			cout<<"End KM is NOT > -1"<<endl;
		}
	}while(endKM < 0);

	cout<<setprecision(3)<<fixed;
	cout<<"KelloMiters"<<setw(10)<<setfill('<')<<"Miles"<<setw(10)<<setfill('<')<<"";
	cout<<"NauticalMiles"<<setw(10)<<setfill('<')<<endl;
	
	cout<<setw(45)<<setfill('=')<<""<<endl;
	
	for(double currentKM {startKM}; currentKM <= endKM; currentKM += stepKM){
		cout<<left<<currentKM<<setw(15)<<setfill('-');
		cout<<right<<kmToMiles(currentKM)<<setw(15)<<setfill('-');
		cout<<right<<kmToNauticalMiles(currentKM)<<setw(10)<<setfill('-');
		cout<<""<<endl;
	}
	
	system("pause>0");
    return 0;
}
