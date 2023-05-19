/**
 * @file RemoveAllVowels1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Remove all vowels from s string using C concept
 * @version 0.1
 * @date 2022-10-29
 * @since SaturDay; 11:05 AM
 * @copyright Copyright (c) 2022
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

void removeVowels(char line[]){

	size_t currentPosition{0};
	size_t newPosition{0};
	while(*(line + currentPosition) != '\0'){
		if(!(*(line + currentPosition) == 'a' || *(line + currentPosition) == 'e' ||
			*(line + currentPosition) == 'i' || *(line + currentPosition) == 'o' ||
			*(line + currentPosition) == 'u')){
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
	
	removeVowels(line);
	
	cout<<"Line: "<<line<<endl;
	system("pause>0");
    return 0;
}
