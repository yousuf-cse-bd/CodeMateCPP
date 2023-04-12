/**
 * @file DynamicMemory1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Realloacting manualy using tmp variable
 * @version 0.1
 * @date 2023-04-12
 * @since WednesDay; 06:08 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <iomanip>
#include <cstdlib>
#pragma pack(1)
using namespace std;

int main(int argc, const char *const argv[]){
    system("cls");
	cout<<setprecision(2)<<fixed;
	
	constexpr size_t initialSize {3}; 
	
	int *list = (int*) malloc(initialSize*sizeof(int));
	if(list == nullptr){
		cerr<<"The list does NOT allocating"<<endl;
		return 0;
	}
	for(size_t i{0}; i < initialSize; i++){
		*(list + i) = i+1;
	}
	for(size_t i{0}; i < initialSize; i++){
		cout<<*(list + i)<<" ";
	}
	cout<<endl;
	
	/*Time pass*/
	
	int *tmp = (int*) malloc((initialSize + 1)*sizeof(int));
	if(tmp == nullptr){
		free(list);
		cerr<<"The tmp does NOT allocating"<<endl;
		return 1;
	}
	
	for(size_t i{0}; i < initialSize; i++){
		*(tmp + i) = *(list + i);
	}
	*(tmp + initialSize) = 4;
	
	free(list); /*I think, here optional*/
	list = tmp;
	
	
	for(size_t i{0}; i < initialSize + 1; i++){
		cout<<*(list + i)<<" ";
	}
	cout<<endl;
	free(list);
    /*NB: Does not need free tmp variable?*/

	constexpr const char smilee{2};
	cout<<setw(50)<<setfill(smilee)<<right<<"HappyEnding...!"<<endl;
	
	system("pause>0");
};