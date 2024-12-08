#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Welcome" << endl;

    string player_name;
    cout << "What is your name? ";
    getline(cin, player_name);
    cout << "Nice to meet you, " << player_name << "! I will ask you a few questions to analyze you." << endl;

    // Question 1
    cout << "\n" << player_name << ", What kind of cars do you like?" << endl;
    cout << "a) Super cars" << endl;
    cout << "b) Basic cars" << endl;
    cout << "c) Modified street cars." << endl;
    char env_choice;
    cin >> env_choice;

    // Question 2
    cout << "\n" << player_name << ",   What is important to you in a car ? " << endl;
    cout << "a) Durability" << endl;
    cout << "b) Aesthetics" << endl;
    cout << "c) Fuel consumption." << endl;
    char power_choice;
    cin >> power_choice;

    // Question 3
    char third_choice;
    if (power_choice == 'a') {
        cout << "\n" << player_name << ", If you prefer durable car you can choice German cars, Which one do you want ? " << endl;
        cout << "a) Volkswagen" << endl;
        cout << "b) Audi" << endl;
        cout << "c) Mercedes-Benz" << endl;
    }
    else if (power_choice == 'b') {
        cout << "\n" << player_name << ", If you like aesthetics car you can choice Italy cars, Which one do you want ?" << endl;
        cout << "a) Ferrari" << endl;
        cout << "b) Lamborghini" << endl;
        cout << "c) Alfa Romeo" << endl;
    }
    else {
        cout << "\n" << player_name << ", If you want economic car you can choice electric cars, Which one do you want ?" << endl;
        cout << "a) TOGG" << endl;
        cout << "b) Tesla" << endl;
        cout << "c) BYD" << endl;
    }
    cin >> third_choice;

    // Question 4
    cout << "\n" << player_name << ", Where do you like to drive?" << endl;
    cout << "a) Highway" << endl;
    cout << "b) Traffic" << endl;
    cout << "c) Winding roads" << endl;
    char time_choice;
    cin >> time_choice;

    // Evaluate and respond
    cout << "\nThanks for the playing this game, " << player_name << "! Here is the information I got about you." << endl;


    if (env_choice == 'a') {
        cout << "You like expensive and very fast cars." << endl;
    }
    else if (env_choice == 'b') {
        cout << "You like standard cars that are enough to take you from point a to point b." << endl;
    }
    else {
        cout << "You like modified and eye-catching but inexpensive cars." << endl;
    }

    if (power_choice == 'a') {
        cout << "Durability and safety are extremely important to you." << endl;
    }
    else if (power_choice == 'b') {
        cout << "The aesthetics of your vehicle are more important to you than some other things." << endl;
    }
    else {
        cout << "The amount of fuel your vehicle consumes is extremely important to you because it affects your economy." << endl;
    }

    if (time_choice == 'a') {
        cout << "Driving comfortably on the highway is good for you." << endl;
    }
    else if (time_choice == 'b') {
        cout << "Spending time in traffic is not a problem for you and it is safe." << endl;
    }
    else {
        cout << "Driving on winding roads is fun for you." << endl;
    }

    cout << "\nThanks for playing, " << player_name << "! Hope you enjoyed the game." << endl;

    return 0;
}