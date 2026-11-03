
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string choice;
    string riverChoice;
    string cabinChoice;

    cout << "You are walking through a forest when you realize you are lost. "
         << "You need to make decisions to find your way home. "
         << "(Type only 1 or 2)" << endl;

    cout << "You are lost in the forest! You see two paths. Which one do you choose?" << endl;
    cout << "1. Go left" << endl;
    cout << "2. Go right" << endl;

    cin >> choice;

    if (choice == "1")
    {
        cout << "You chose the left path. You find a river. The water is moving quickly. "
             << "What do you want to do?" << endl;

        cout << "1. Try to cross the river." << endl;
        cout << "2. Follow the river." << endl;

        cin >> riverChoice;

        if (riverChoice == "1")
        {
            cout << "You successfully cross and find a road." << endl;
            cout << "You follow the road and find your way home." << endl;
        }
        else if (riverChoice == "2")
        {
            cout << "You find a small bridge." << endl;
            cout << "You cross the bridge safely." << endl;
            cout << "You follow the path and find your way home." << endl;
        }
        else
        {
            cout << "Invalid choice." << endl;
        }
    }
    else if (choice == "2")
    {
        cout << "You find an abandoned cabin. What do you want to do?" << endl;
        cout << "1. Enter the cabin" << endl;
        cout << "2. Keep walking" << endl;

        cin >> cabinChoice;

        if (cabinChoice == "1")
        {
            cout << "You enter the cabin and find a map inside." << endl;
            cout << "You follow the map and find your way home." << endl;
        }
        else if (cabinChoice == "2")
        {
            cout << "You encounter a friendly hiker and they help you find your way home." << endl;
        }
        else
        {
            cout << "Invalid choice." << endl;
        }
    }
    else
    {
        cout << "Invalid choice. Please enter 1 or 2." << endl;
    }

    return 0;
}
