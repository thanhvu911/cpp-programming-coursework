#include <iostream>
#include <climits> 
using namespace std;

int main() {
    int userVal;
    cin >> userVal;
    cout << "Number: " << userVal << endl;
    // Check if the inputVal is within valid range
    // https://www.geeksforgeeks.org/maximum-value-of-short-int-in-c/
    if (userVal < SHRT_MIN || userVal > SHRT_MAX) {
        cout << userVal << "?!!1!?! Are you an idiot or something?" << endl;
        cout << "The only valid inputs are 0 – 6." << endl;
    } 
    // Print day of the weeking corresponding to the inputVal
    else {
        switch (userVal) {
        case 0: 
            cout << "Sunday" << endl;
            break;
        case 1: 
            cout << "Monday" << endl;
            break;
        case 2: 
            cout << "Tuesday" << endl;
            break;
        case 3: 
            cout << "Wednesday" << endl;
            break;
        case 4: 
            cout << "Thursday" << endl;
            break;  
        case 5: 
            cout << "Friday" << endl;
            break;  
        case 6: 
            cout << "Saturday" << endl;
            break; 
        default: 
            cout << "Invalid Value!"<< endl;
            break;
        }
    }
    return 0;
}