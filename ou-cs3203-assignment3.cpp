#include<iostream>
using namespace std;

// Function Prototype
int sumArray(int x, int y, int z);


int sumArray(int x, int y, int z){

    int sum = 0;
    int array[3] = {x,y,z};

    for(int i = 0; i < 3; i++){

        sum += array[i];

    }

    return sum;

}
