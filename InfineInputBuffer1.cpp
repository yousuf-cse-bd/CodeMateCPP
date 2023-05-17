/**
 * @file InfiniteInputBuffer1.cpp
 * @author: Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Infinite Input Buffer Using calloc(), realloc() 
 * @version 0.1
 * @date 2023-05-17
 * @since WednesDay; 05:57 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

int main(int argc, const char *const argv[]){
    system("cls");

	size_t bufferSize{2};
    int *buffer {(int*)calloc(bufferSize, sizeof(int))};
	
	int inputData{0};
	size_t index{0};
	
	while(true){
		if(index == bufferSize){
			bufferSize <<= 1; //bufferSize *= 2
			buffer = (int*) realloc(buffer, bufferSize*sizeof(int));
			if(buffer == nullptr){ /*Memory leak safe*/
				cerr<<"Memory allocation is NOT done...!"<<endl;
				exit(0);
			}
		}

		cout<<"Enter [-1 to quit]: ";
		cin>>inputData;

		if(inputData == -1){ /*sentinel control loop*/
			break;
		}
		else{
			*(buffer + index++) = inputData;
		}
	}
	
	cout<<"--------------------------------------------"<<endl;

	size_t total {0};
	double average{0.0};
	
	for(size_t i{0}; i < index; i++){
		cout<<"Buffer["<<i<<"] = "<<*(buffer + i)<<endl;
		total += *(buffer + i);
	}
	cout<<"Total: "<<total<<endl;

	try{
		if(index == 0){
			throw "Average not possible exception...!";
		}
		average = static_cast<double>(total)/index;
	}catch(const char *exception){
		cerr<<exception<<endl;
	}
	
	cout<<"Average: "<<average<<endl;
	
	cout<<"Buffer size: "<<bufferSize<<endl;

	free(buffer);
	buffer = nullptr;

    return 0;
}