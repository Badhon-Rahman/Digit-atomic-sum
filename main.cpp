#include <iostream>

using namespace std;

int FindAtomicSum(int value){
    int length = 0;
    int sum = 0;

    while(value != 0){
        sum += (value % 10);
        value = value / 10;
        ++length;
    }
    if(length == 1){
        return sum;
    }
    if(length > 1){
       return FindAtomicSum(sum);
    }
}

int main()
{
    int sumValue, atomicSum;
    cout << "Enter summing value: ";
    cin >> sumValue;

    atomicSum = FindAtomicSum(sumValue);
    cout << "Atomic sum: " << atomicSum << endl;
    return 0;
}
