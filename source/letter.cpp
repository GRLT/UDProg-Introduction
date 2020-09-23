#include "std_lib_facilities.h"

int main()
{
    string FirstName = "";
    string friend_name = "";
    char friend_sex = 0;
    double age = 0;
    int AgeOfFriend = 0;

    cout << "Enter the name of the person you want to write to" << endl;
    cin >> FirstName;
    cout << "Dear " << FirstName << "," << friend_name << endl;
    cout << "How are you?" << endl
         << "I am fine." << endl
         << "I miss you" << endl
         << "A few words" << endl;
    cout << "Name another friend!" << endl;

    cin >> friend_name;
    cout << "Have you seen " << friend_name << " lately?" << endl;
    cout << "Please enter your friend gender(m or f)" << endl;
    cin >> friend_sex;
    if (friend_sex == 'm')
    {
        cout << "If you see " << friend_name << " please ask him to call me" << endl;
    }
    else if (friend_sex == 'f')
    {
        cout << "If you see " << friend_name << " please ask her to call me." << endl;
    }

    cout << "Please enter your age!" << endl;
    cin >> AgeOfFriend;
    if (AgeOfFriend >= 110 || AgeOfFriend <= 0)
    {
        simple_error("You're kidding!");
    }
    else
    {
        cout << "I hear you just had a birthday and you are " << AgeOfFriend << " years old." << endl;
    }

    if (AgeOfFriend < 12)
    {
        cout << "Next year you will be " << AgeOfFriend + 1 << " years old" << endl;
    }
    else if (AgeOfFriend == 17)
    {
        cout << "Next year you will be able to vote" << endl;
    }
    else if (AgeOfFriend > 70)
    {
        cout << "I hope you're enjoying retirement" << endl;
    }

    cout << "Yours sincerely" << endl << endl << "Laci";
    

    return 0;
}