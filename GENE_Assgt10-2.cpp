// Julia Baribeau
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string>
using namespace std;

bool isPrime(int number, int possibleFactor)
{
    if(number/2 < possibleFactor)
        return true;
    else if(number % possibleFactor == 0)
        return false;
    else
        isPrime(number, possibleFactor+1);
}

int main()
{
    cout << "51 " << isPrime(51, 2) << endl;
    cout << "91 " << isPrime(91, 2) << endl;
    cout << "103 " <<isPrime(103, 2) << endl;
    cout << "2 " << isPrime(2, 2) << endl;
    cout << "13 " << isPrime(13, 2) << endl;
    cout << "97 " << isPrime(97, 2) << endl;
    cout << "4 " << isPrime(4, 2) << endl;
    cout << "21 " << isPrime(4, 2) << endl;
    cout << "70 " << isPrime(4, 2) << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}

/*
File Output

51 0
91 0
103 1
2 1
13 1
97 1
4 0
21 0
70 0
Press any key to continue . . .

*/
