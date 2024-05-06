#include <iostream>

using namespace std;

int main() {

double sum;       // Variable that stores the sum of numbers in.
double average;   // Variable that stores the average of numbers in.
double numbers;   // Variable that stores the numbers.
double count;     // Variable that stores the number of numbers you want.

cout << "Enter the number the number of numbers: ";
cin >> count;       // Count is the number of numbers you want.

for (int i = 1; i <= count; i++) {
   cout << "Enter number " << i << " ";
   cin >> numbers;   // Enter the numbers after each iteration.
   sum += numbers;   // Here the numbers are added together.
   cout << sum;      
   average = sum / count;  
   cout << average;
}

}