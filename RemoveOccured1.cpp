/**
 * @file RemoveOccured1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Remove a particular char from a string line
 * @version 0.1
 * @date 2022-05-19
 * @since FriDay; 06:01 PM
 * @copyright Copyright (c) 2022
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
#pragma pack(1)
using namespace std;

void removeOccured(char line[], const char &x){

	size_t currentPosition{0};
	size_t newPosition{0};
	while(*(line + currentPosition) != '\0'){
		if(!(*(line + currentPosition) == x)){
			*(line + newPosition) = *(line + currentPosition);
			newPosition++;
		}
		currentPosition++;
	}
	*(line + newPosition) = '\0';
}


int main(int argc, char const *argv[]){
    /* code */
    system("cls");
	
	char line[] {"This is an way"};
	cout<<"Line: "<<line<<endl;
	
	removeOccured(line, 'i');
	
	cout<<"Line: "<<line<<endl;
	system("pause>0");
    return 0;
}
