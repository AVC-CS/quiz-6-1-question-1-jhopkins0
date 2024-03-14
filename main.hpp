#include <iostream>
using namespace std;


void getTwoValues(int& begin, int& end);
int getNextPrime(int);
int getPrevPrime(int);


void getTwoValues(int begin, int end) {
    do {
        cout << "Enter values: " << endl;
        cin >> begin >> end;
    } while (begin >= end);
}

bool isPrime(int n) {
    if(n <= 1) {
        return false;
    }
    for(int i = 2; i*i <= n; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

int getNextPrime(int begin) {
    for(int i = begin + 1; ; i++) {
        if(isPrime(i)) {
            return i;
        }
    }
}

int getPrevPrime(int end) {
    for(int i = end - 1; i > 1; i--) {
        if(isPrime(i)) {
            return i;
        }
    }
}