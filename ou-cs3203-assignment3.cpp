#include<iostream>
using namespace std;

// Function Prototype
int sumArray(int x, int y, int z);
int productArray(int x, int y, int z);
int* reverseArray(int x, int y, int z);


// Step 1 - Sum of Array
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
    int array[3]={x,y,z};

    for(int i = 0; i< 3;i++){

        product *= array[i];

    }

    return product;
}


// Step 5 - Reverse Function
int* reverseArray(int x, int y, int z){

    int reverse[3] = {z, y, x};

    for(int i = 0; i < 3;i++){
        cout << reverse[i];
    }
    
    return reverse;

}

// Step 3 - Main Method with User Input
int main(){

    int x, y, z;

    cout << "Please enter the first number: ";
    cin >> x;

    cout<<"\nPlease enter the second number: ";
    cin >> y;

    cout << "\nPlease enter the third number: ";
    cin >> z;

    cout << "\n\nSum of the numbers: ";
    cout << sumArray(x,y,z);

    cout << "\nProduct of the numbers: ";
    cout << productArray(x,y,z);

    cout << "\nReverse of the numbers inputted: ";
    reverseArray(x,y,z);

    return 0;

 
}