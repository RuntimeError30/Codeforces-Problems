#include<iostream>
using namespace std;
int main()
{
    int x;
    int distance = 0;
    cin >> x;
    distance = x / 5;
    if (x % 5 != 0)
    {
        distance = distance + 1;
    }
    cout << distance << endl;
}