/**
 * @file StringInitialized.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Strirng initializations
 * @version 0.1
 * @date 2023-01-27
 * @since FriDay; 10:09 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    string fullName {}; /*Empty string*/
    cout<<"Full-Name: "<<fullName<<endl;

    string planet {"Earth. Where the sky is blue"};/*Initialize with string literal*/
    cout<<"Planet: "<<planet<<endl;

    string preferedPlanet {planet}; /*Initialize with other existing string*/
    cout<<"Prefered-Planet: "<<preferedPlanet<<endl;

    string message {"Hello there", 5}; /*Initialize with part of a string literal, Contains "Hello"*/
    cout<<"Message: "<<message<<endl;
     
    string weirdMessage {4, 'e'}; /*Initialize with multiple copies of a char contains "eeee"*/
    cout<<"Weird-Message: "<<weirdMessage<<endl;

    string greeting {"Hello World"}; /*Initialize with string literal*/
    cout<<"Greeting: "<<greeting<<endl;

    /*Initialize with part of an existing string,
    Starting at index 6, taking 5 characters.
    And constains "World"*/
    string sayingHello {greeting, 6, 5}; 
    cout<<"Saying-Hello: "<<sayingHello<<endl;

    /*Changing: string at runtime*/
    planet = "Earth. Where the sky is blue. Earth. Where the sky is blue";
    cout<<"Planet: "<<planet<<endl;

    /*Use a raw array (Pointer)*/
    const char *planet1 {"Earth. Where the sky is blue"};
    cout<<"Planet1: "<<planet1<<endl;

    planet1 = "Earth. Where the sky is blue. Earth. Where the sky is blue";
    cout<<"Planet1: "<<planet1<<endl;

    /*Use a raw array*/
    // char planet3[] {"Earth. Where the sky is blue."};
    // planet3 = "Earth. Where the sky is blue.";

    return 0;
}
