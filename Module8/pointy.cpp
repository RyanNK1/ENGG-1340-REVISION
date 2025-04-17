#include  <iostream>
using namespace std;

int main(){
    int i = 10;
    int * ipointer = &i;
    cout << i << " " << ipointer << endl;
    cout << * ipointer << endl;
    int y = * ipointer;
    cout << y;
    *ipointer = 20;
    cout << *ipointer << endl;

    return 0;
}