#include <iostream>
using namespace std;
// i want to calculate the last digit of fabonacci number even if , it was large number in fast way



int LastDigitFibonacci(int number)
{
    int first=0, second =1, result; // i define here the first numbers of fabonacci series as first=0 and second=1
    for ( int i = 2; i <= number; i++)
    {
        /* here i want to loop in fast way : i do my calculations on the last one
        digit only of the numbers and it gives the same correct results */
        result = (first+second)%10;
        first = second;
        second = result;

    }
    return result;
}

int main()
{
    int number = 0;
    cout<<"enter the number to get the last digit of fabonacci of it "<<endl;
    cin >> number;
    cout <<"the last digit of fabonacci of " << number<<" is "<<endl;
    cout<<LastDigitFibonacci(number) << endl;
    return 0;
}
