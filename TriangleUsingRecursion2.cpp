/**
 * @file TriangleUsingRecursion2.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Draw an upper triangle using recursion and single loop
 * @version 0.1
 * @date 2023-04-12
 * @since WednesDay; 05:12 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <iomanip>
#pragma pack(1)
using namespace std;

void drawTriangle(const int &height){
	if(height <= 0){
		return;
	}
	// drawTriangle(height-1); /*Denoted upper lower*/
	for(int i{0}; i < height; i++){
		cout<<"#";
	}
	cout<<endl;
	drawTriangle(height-1); /*Denoted upper*/
}

int main(int argc, const char *const argv[]){
    system("cls");
	cout<<setprecision(2)<<fixed;

	int height{};
	do{
		cout<<"Enter triangle height here: ";
		cin>>height;
	}while(height < 0);
	
	drawTriangle(height);	
	
	constexpr const char smilee{2};
	cout<<setw(50)<<setfill(smilee)<<right<<"HappyEnding...!"<<endl;
	
	system("pause>0");
};