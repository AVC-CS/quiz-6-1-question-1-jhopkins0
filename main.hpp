#define MAIN_HPP

#include <iostream>
using namespace std;


int getTwoValues(int, int);
bool Prime(int);
int nextPrime(int);
int prevPrime(int);


int getTwoValues(int &begin, int &end){
    do{
        cin >> begin >> end;
    }while(begin >= end);
}

bool Prime(int num){
    if(num <= 1){
        return false;
    }
    for(int i = 2; i * i <= num; i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

int nextPrime(int begin){
    for(int i = begin + 1; ; i++){
        if(Prime(i)){
            return i;
        }
    }
}

int prevPrime(int end){
    for(int i = end - 1; i > 1;){
        if(Prime(i)){
            return i;
        }
    }
}
//********************
// Declare Function Prototypes
//********************

// ******************************
// Implement all your functions here
// ******************************
