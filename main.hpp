#include <iostream>
using namespace std;


int getTwoValues(int, int);
bool isPrime(int);
int getNextPrime(int);
int getPrevPrime(int);


int getTwoValues(int &begin, int &end){
    do{
        cin >> begin >> end;
    }while(begin >= end);
}

bool isPrime(int num){
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

int getNextPrime(int begin){
    for(int i = begin + 1; ; i++){
        if(isPrime(i)){
            return i;
        }
    }
}

int getPrevPrime(int end){
    for(int i = end - 1; i > 1;){
        if(isPrime(i)){
            return i;
        }
    }
}
