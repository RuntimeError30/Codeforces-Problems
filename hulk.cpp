#include<iostream>
using namespace std;
int main(){
    int input;
    cin >> input;
    

    for (int i = 1; i <= input; i++)
    {
        if (i%2 == 0 )
        {
            cout << "I love ";
        }
        else{
            cout << "I hate ";
        }

        if(i != input){
            cout << "that ";
        }
        else{
            cout << "it ";
        }
    }

    return 0;
}