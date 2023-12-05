#include <iostream>
using namespace std;
template <typename Brusnika >
Brusnika findMax(const Brusnika array[], int size) {

    Brusnika max = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

int main() {

    int intArray[] = { 3, 7, 2, 9, 5 };
    double doubleArray[] = { 2.5, 7.3, 1.8, 9.6, 4.2 };

    int maxInt = findMax(intArray, 5);
    double maxDouble = findMax(doubleArray, 5);

    cout << "max intArray: " << maxInt << endl;
    cout << "max doubleArray: " << maxDouble << endl;

    return 0;
}

