/**
 * @file PhoneBookHardInitialized1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Lowest efficient of phonebook directory
 * @version 0.1
 * @date 2023-04-11
 * @since TuesDay; 10:22 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <iomanip>
#pragma pack(1)
using namespace std;

void phoneBookDirectory(void){
	string names[] {"yousuf", "ali"};
	string numbers[] {"555", "121"};
	
	/*Linear search algorithm*/
	for(size_t i{0}; i < size(names); i++){
		if(*(names+i) == "ali"){
			cout<<*(names+i)<<": "<<*(numbers+i)<<endl;
			return;
		}
	}
	cout<<"Not found"<<endl;
    return;
}

int main(int argc, const char *const argv[]){
    system("cls");
	cout<<setprecision(2)<<fixed;
	
	phoneBookDirectory();
	
	constexpr const char smilee{2};
	cout<<setw(50)<<setfill(smilee)<<right<<"HappyEnding...!"<<endl;
	
	system("pause>0");
};