#include<iostream>
using namespace std;

// Function Prototype
int sumArray(int x, int y, int z);
int productArray(int x, int y, int z);

int sumArray(int x, int y, int z){

    int sum = 0;
    int array[3] = {x,y,z};

    for(int i = 0; i < 3; i++){

        sum += array[i];

    }

    return sum;

}


// Step 2 - Product of Array
int productArray(int x, int y, int z){


    int product = 1;
    int array[3]={x,y,x};

    for(int i = 0; i< 3;i++){

        product *= array[i];

    }

    return product;
}