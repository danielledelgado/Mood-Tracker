// Danielle Delgado Sosnowska
// 10/7/24
// Mood Tracker
// Extra: ASCII Art, Do-While Loop

#include <iostream>
using namespace std;

int main() {
    int mood;
    bool valid = true;

// ascii art
    cout << "                    _        _           " << endl;
    cout << "._ _ _  ___  ___  _| |  _ _ <_>._ _  ___ " << endl;
    cout << "| ' ' |/ . \\/ . \\/ . | | '_>| || ' |/ . |" << endl;
    cout << "|_|_|_|\\___/\\___/\\___| |_|  |_||_|_|\\_. |" << endl;
    cout << "                                    <___'" << endl;

    cout << "Welcome to the digital Mood Ring" << endl;
    cout << "How are you feeling today? " << endl;

    // the moods
    cout << "1. Happy, Content" << endl;
    cout << "2. Calm, Peaceful" << endl;
    cout << "3. Normal, Relaxed" << endl;
    cout << "4. Uncertain, Fearful" << endl;
    cout << "5. Nervous, Anxious" << endl;
    cout << "Enter a number from above: ";

// do while loop
    do {
        cin >> mood;

// the switch case, each number correlates to a mood
    switch(mood) {
        case 1:
            cout << "That's really good!! Keep it up!" << endl;
            valid = false; // all of the cases apart from default have this, it lets the program not restart
            break;
        case 2:
            cout << "That's good!! You seem stress free right now." << endl;
            valid = false;
            break;
        case 3:
            cout << "That's good! At least you're having a good day." << endl;
            valid = false;
            break;
        case 4:
            cout << "Oh no! It's okay, everything will come to you in time." << endl;
            valid = false;
            break;
        case 5:
            cout << "Ooooo are you nervous or excited?" << endl;
            valid = false;
            break;
        default: 
            cout << "Invalid choice." << endl;
            cout << "\nEnter another number from above: " << endl;
            break;
    }

    } while (valid); // it will ask the user to enter another number if they don't input one 1-5
}