//An integer n is a divisor of an integer if the remainder of n/d = 0
//Given an integer, for each digit that makes up the integer determine whether it is a divisor.Count the number of divisors occurring within the integer.

#include <iostream>
using namespace std;

int findDigits(int n) {
    int temp = n;
    int count = 0;
    while (temp > 0)
    {
        int digit = temp % 10;
        if (n % digit == 0)
            count++;
        temp /= 10;
    }
    return count;
}

//recursive function overload
int findDigits(int n, int count) {
    int temp = n;
    if (temp == 0)
        return count;
    else
        if (n % (temp % 10) == 0)
        {
            count++;
            findDigits(n / 10, count);
        }
}

int main()
{
    int num;
    cout << "Enter a number = ";
    cin >> num;
    cout << "No. of divisor digits = " << findDigits(num, 0) << endl;
    return 0;
}

