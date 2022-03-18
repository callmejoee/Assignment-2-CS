#include <iostream>
using namespace std;
int main() {
    // looping the program
    string quit;
    while (quit != "quit"){
        // taking inputs
        unsigned int max, att, left,surplus;
        cout << "Enter the max. room capacity: " << endl;
        cin >> max;
        cout << "Enter the number of people attending: " << endl;
        cin >> att;
        // in case number of people attending is greater than number of maximum allowed people
        if (att > max){
            // calculating surplus of people that need to be removed
            surplus = att - max;
            cout << "Maximum number exceeded, you should remove " << surplus << " number of people" << endl ;
        }
        // in case number of maximum people is greater than number of people attending
        else if (max >= att){
            // calculating how many people can still attend the meeting
            left = max - att;
            cout << "It is legal to hold the meeting number of people left is " <<  left << endl;
        }
        // loop breaker
        cout << "write quit if you want to quit: " << endl ;
        cin >> quit;
    }
    return 0;
}
