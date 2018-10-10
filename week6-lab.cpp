#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Input your grade \n";
    cin >> x;
    if (x>=86) {
    cout << "You got an A! congrats!";
    }
    else if (x>=72){
    cout <<"You got a B! Nice Job!";
    }
    else if (x>=60){
        cout <<"you got a C! Could be better.";
    }
    else if (x>=50){
        cout << "You got a D! Better luck next time.";
    }
    else {
        cout <<"Sorry, you got an F.";
    }
    return 0;
}