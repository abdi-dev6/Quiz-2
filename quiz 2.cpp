
#include <iostream>
using namespace std;

// 1. Count positive numbers
int numOfPositive(int arr[], int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0)
            count++;
    }

    return count;
}

// 2. Count negative numbers
int numOfNegative(int arr[], int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0)
            count++;
    }

    return count;
}

// 3. Count zero numbers
int numOfZero(int arr[], int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0)
            count++;
    }

    return count;
}

// 4. Sum of positive numbers
int sumPositive(int arr[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0)
            sum += arr[i];
    }

    return sum;
}

// 5. Sum of negative numbers
int sumNegative(int arr[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0)
            sum += arr[i];
    }

    return sum;
}

// 6. Calculate average
double average(int arr[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    return (double)sum / n;
}

// Main function
int main() {
    int arr[5];

    cout << "Enter 5 numbers: ";

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "\n number ofPositive: "
         << numOfPositive(arr, 5);

    cout << "\n number ofNegative: "
         << numOfNegative(arr, 5);

    cout << "\n number of Zero: "
         << numOfZero(arr, 5);

    cout << "\nPositive sum: "
         << sumPositive(arr, 5);

    cout << "\nNegative sum: "
         << sumNegative(arr, 5);

    cout << "\nAverage: "
         << average(arr, 5);

    return 0;
}
