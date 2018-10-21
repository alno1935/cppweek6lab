#include <iostream>
using namespace std;

int main() {
    int x; //defining a variable for user to use
    cout << "Input your grade \n"; 
    cin >> x; //having user enter in the variable
    if (x>=86) { //if statement begins
    cout << "You got an A! congrats!"; //if you got greater than or equal to 86 you get an A
    }
    else if (x>=72){ //if you get greater than or equal to 72 you get a B
    cout <<"You got a B! Nice Job!";
    }
    else if (x>=60){ //if you get greater than or equal to 60 you get a C
        cout <<"you got a C! Could be better.";
    }
    else if (x>=50){ //if you get greater than or equal to a 50 you get a D
        cout << "You got a D! Better luck next time.";
    }
    else { //and finally if you dont you get less than 50 you get an F
        cout <<"Sorry, you got an F.";
    }
    return 0;
}