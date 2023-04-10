#include <iostream>
using namespace std;

int calculateSum(int array[], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += array[i];
    }
    return sum;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    int sum = calculateSum(numbers, length);
    cout << "The sum of the numbers is " << sum << endl;
    
    if (sum % 2 == 0) {
        cout << "The sum is even" << endl;
    } else {
        cout << "The sum is odd" << endl;
    }
    
    return 0;
}
