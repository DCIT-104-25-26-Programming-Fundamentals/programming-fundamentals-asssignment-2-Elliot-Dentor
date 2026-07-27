// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 3
// =============================================================================
//
// TASK: Array Statistics Calculator
//
// Write a C++ program that reads a collection of numbers from the user
// and computes key statistical values using separate functions.
//
// -----------------------------------------------------------------------------
// EXPECTED INPUT / OUTPUT EXAMPLE
// -----------------------------------------------------------------------------
//
//   How many numbers? 5
//   Enter number 1: 4
//   Enter number 2: 7
//   Enter number 3: 2
//   Enter number 4: 9
//   Enter number 5: 1
//
//   Results:
//   Sum:     23
//   Average: 4.6
//   Maximum: 9
//   Minimum: 1
//
// -----------------------------------------------------------------------------
// REQUIREMENTS
// -----------------------------------------------------------------------------
// - You MUST implement each calculation in its own function (see scaffold).
// - You may NOT use any standard library functions like accumulate(), max(),
//   or min(). Implement the logic yourself using loops.
// - N must be a positive integer. If the user enters 0 or a negative number,
//   print an error message and stop.
//

//
// =============================================================================
// YOUR CODE BELOW — remove the // symbols from the scaffold and fill it in
// =============================================================================

#include <iostream>
using namespace std;

int getSum( int arr[], int n);
double getAverage( int sum, int n );
int getMax( int arr[], int n );
int getMin( int arr[], int n );

int main() {
  int n;
cout << " How many numbers?";
cin >> n;

if ( n <= 0 ) {
cout << " Error: Number of values must be positive." << end1;
return 0;
}
int numbers[n];
for ( int i = 0; i , n; i++) << ": " ;
cin >> numbers[i];
}
int sum = getSum( numbers, n );
double average = getAverage( sum, n );
int maximium = getMax( numbers, n);
int minimium = getMin( numbers, n );

cout <<"Results:" << end1;
cout << "Sum: " << sum << end1;
cout << "Average: " << average << end1;
cout << "Maximium: " << maximium << end1;
cout << "Minimium: " << minimium << end1;
  return 0;
}

int getSum9 int arr[], int n) {
int total = 0;
for (int i = 0;i < n; i++) {
total += arr[i];
}
return total;
}

double getAverage9 int sum, int n) {
return static_cast<,double>(sum) / n;
}

int getMax(int arr[], int n) {
  int max = arr[0];
for (int i = 1; i < n; i++) {
if (arr[i] > max) {
  max = arr[i];
  }
}
return max;

int getMin(int arr[], int n) {
  int min = arr[0];
for (int i = 1; i < n; i++) {
  if (arr[i] < min) {
    min = arr[i];
    }
}
return min;
}
