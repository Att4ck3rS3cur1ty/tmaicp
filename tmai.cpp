#include <iostream>
#include <algorithm>

void readNumbers(int size, double input[]){
    int index = 0;
    for (int i = 0; i < size; i++){
        std::cout << "Enter the " << index << "st number" << std::endl;
        std::cin >> input[i]; 
        index++;    
    }     
} 

void printNumbersOrdered(int size, double input[]){
    // it would be the sort algorithm calling 
    // std::sort(std::begin(input), std::end(input));
    std::cout << "\nOrdered numbers: " << std::endl;
    for (int i = 0; i < size; i++){
        // it has not been ordered because there's no sort algorithm being called
        std::cout << input[i] << std::endl;
    } 
}

int main(){
    int size = 0;
    std::cout << "Enter the size of array: " << std::endl;
    std::cin >> size;
    // do not use array. Replace it for std::vector (then you could skip the size of array input)
    double *input = new double[size];
    readNumbers(size, input);
    printNumbersOrdered(size, input);

    return 0;
}