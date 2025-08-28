
#include <iostream>
using namespace std;
int main()
{
    int counter = 1;
    int value;
    cout<<"please enter where you want the number to multiply ";
    cin>>value;
    while (counter <= 10){
        cout<<"your answer is "<<value * counter<<endl;
        counter = counter + 1;
    }

    return 0;
}