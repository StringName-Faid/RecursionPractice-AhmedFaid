#include <iostream>

using namespace std;

int findFactorial(int x){
    if (x <= 0)
        return 0;

    if(x == 1)
        return 1;

    return x*findFactorial(x-1);
}

int main(){
    int x;

    cout << "Insert number to find factorial" << endl;
    cin >> x;
    cout << endl << findFactorial(x);


    return 0;
}

