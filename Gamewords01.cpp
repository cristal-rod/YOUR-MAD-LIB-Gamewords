/*
Mad Libs Game
A fun word-filling game where you enter words to create a silly story!
Great for learning: cin, cout, strings, and variables
*/

#include <iostream>
#include <string>          // We need this to use the "string" data type
using namespace std;

int main()
{
    // ---- DECLARE VARIABLES ----
    // These are like "blank boxes" that will hold the words the user types
    string noun1, noun2, noun3;        // A noun is a person, place, or thing (dog, pizza, school)
    string verb1, verb2;               // A verb is an action word (run, jump, eat)
    string adjective1, adjective2;     // An adjective describes something (purple, tiny, loud)
    string place;                      // A location (the park, Mars, Walmart)
    string name;                       // A person's name

    // ---- WELCOME MESSAGE ----
    cout << "==============================" << endl;
    cout << "   Welcome to C++ Mad Libs!   " << endl;
    cout << "==============================" << endl;
    cout << "Fill in the blanks and I will tell you a funny story!" << endl;
    cout << endl;  // This just prints a blank line to make it look nice

    // ---- ASK THE USER FOR WORDS ----
    // cin >> reads ONE word from the user (stops at a space)
    // getline() reads a FULL sentence including spaces

    cout << "Enter a person's name: ";
    cin >> name;                        // Stores what they type into "name"

    cout << "Enter a noun (a thing): ";
    cin >> noun1;

    cout << "Enter another noun: ";
    cin >> noun2;

    cout << "Enter one more noun: ";
    cin >> noun3;

    cout << "Enter a verb (action word, like 'run'): ";
    cin >> verb1;

    cout << "Enter another verb: ";
    cin >> verb2;

    cout << "Enter an adjective (describing word, like 'purple'): ";
    cin >> adjective1;

    cout << "Enter another adjective: ";
    cin >> adjective2;

    cout << "Enter a place: ";
    cin >> place;

    // ---- PRINT THE STORY ----
    // We use the variables inside the sentence to fill in the blanks
    // The words the user typed will appear where the variables are!
    cout << endl;
    cout << "==============================" << endl;
    cout << "        YOUR MAD LIB!         " << endl;
    cout << "==============================" << endl;
    cout << endl;

    // The story - notice how we mix regular text with our variables
    cout << "One day, " << name << " woke up and found a " << adjective1
        << " " << noun1 << " on their doorstep." << endl;

    cout << "They decided to " << verb1 << " all the way to " << place
        << " to figure out what to do." << endl;

    cout << "Suddenly, a " << adjective2 << " " << noun2
        << " jumped out and started to " << verb2 << "!" << endl;

    cout << "Luckily, " << name << " had a " << noun3
        << " in their pocket and saved the day." << endl;

    cout << "Everyone in " << place << " cheered and they all lived "
        << adjective1 << " ever after." << endl;

    cout << endl;
    cout << "THE END! Thanks for playing!" << endl;
    cout << "==============================" << endl;

    return 0;  // This tells the computer the program finished successfully
}