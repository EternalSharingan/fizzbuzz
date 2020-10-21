#include <iostream>

using namespace std;

void fizzbuzz();

int main()
{
    fizzbuzz();
    return 0;
}

void fizzbuzz()
{
    for(int i = 1; i <= 100; i++)
    {
        if(i%3 == 0)
        {
            cout << "Fizz";
        }
        if(i%5 == 0)
        {
            cout << "Buzz";
        }
        if(i%3 != 0 && i%5 != 0)
        {
            cout << i;
        }
        cout << endl;
    }
}
