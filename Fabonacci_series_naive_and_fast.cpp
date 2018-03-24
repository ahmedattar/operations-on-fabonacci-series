#include <iostream>
using namespace std;
long long naive_fibonacci(long long number)
{
    if( number >=0)
    {
        if (number==0)
        {
            return 0;
        }
        else if ( number==1 )
        {
            return 1;
        }
        else
        {
            return naive_fibonacci(number-1)+ naive_fibonacci(number-2);
        }
    }


}
long long fibonacci_fast(long long number)
{
    int num_array [number];
    num_array[0]=0;
    num_array[1]=1;
    for (int i=2; i <= number; i++)
    {
        num_array[i]=num_array[i-1]+num_array[i-2];
    }
    return num_array[number];
}

int main()
{
    long long number =0;
    cout<< " enter number to get the fabonacci of it "<<endl;
    cin>>number;
    cout<<" the fast solution is " <<fibonacci_fast(number)<<endl;
    cout<<" the fast solution is " <<naive_fibonacci(number)<<endl;
    return 0;
}
