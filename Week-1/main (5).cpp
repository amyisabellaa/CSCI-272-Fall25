
#include <iostream>
using namespace std;

    void printsquare(int side){
        for(int i = 0; i < side; i++){
        for(int j= 0; j< side; j++){
            cout<<"*";
        }
        cout<<endl;
}
}
int main() {
    int side;
    cout<<"enter side length ";
    cin>>side;
    printsquare(side);
    
    return 0;
}