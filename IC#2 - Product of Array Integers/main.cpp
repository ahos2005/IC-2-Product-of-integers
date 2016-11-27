//
//  main.cpp
//  IC#2 - Product of Array Integers
//
//  Created by Il Dottore on 11/27/16.
//  Copyright © 2016 Ahmed Elhosseiny. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int numOfElements;
    do{
        cout << "Enter the number of elements in the array (2 or greater):";
        cin >> numOfElements;
        if(numOfElements <= 0){
            cout << "Invalid Array Size.\n";
        }
        if( numOfElements == 1){
            cout << "Having only 1 element does not allow for other elements in the array to multiply.\n";
        }
    }while (numOfElements <= 1);
    int array[numOfElements], total = 1, zeroCounter = 0;
    
    for (int index = 0; index < numOfElements; index++){
        cout<<"Enter element #"<<index+1<<":";
        cin>>array[index];
        if(array[index] != 0)
            total *= array[index];
        else{
            zeroCounter++;
        }
    }
    
    if(zeroCounter > 1){
        total = 0;
    }
    
    int result[numOfElements];
    
    if(zeroCounter == 1){
        for (int index = 0; index < numOfElements; index++){
            if(array[index] != 0){
                result[index] = 0;
            } else {
                result[index] = total;
            }
            cout<<result[index]<<" ";
        }
    } else {
        for (int index = 0; index < numOfElements; index++){
            if (total != 0)
                result[index] = total / array[index];
            else
                result[index] = total;
            cout<<result[index]<<" ";
        }
    }
    return 0;
}
