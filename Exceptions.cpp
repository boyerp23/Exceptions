// Exceptions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <exception>

float myDivide(float num, float denum) 
{
    return num / denum;
}

using namespace std;

int divSolution()
{
    int dbz_err = 0;
    int num_z_wrn = 1;
    float numm;
    float denumm;
    char chr_in;
//Label
START:
    try
    {
        //ask for user input
        cout << "Please enter a number for your numerator" << endl;
        //gets user input
        cin >> numm;
        //if user input is 0 'catch (int e)' will display and ask user to try agian or terminate.
        if (numm == 0)
        {
            throw num_z_wrn;
        }
        cout << "Please enter a number for your denominator" << endl;
        cin >> denumm;
    }//where try ends
    //Displays if user inputs 0 as the numerator
    catch (int e)
    {
        cout << "Numerator entered as Zero, answer will always be Zero. Try again.." << endl;
        return 0;
    }//where catch ends
    //If user inputs 0 as the denominator the 'catch int myE' will output warning and ask user to try again or terminate program
    try
    {
        if (denumm == 0)
        {
            throw dbz_err;
        }//where if ends
    }//where try ends
    //Displays is the user inputs 0 as the Denominator.
    catch (int myE)
    {
        if (myE == dbz_err)
        {
            cout << "Your entered 0 as your denominator casting to smole value" << endl;
            denumm = 0.00000001;

        }//where if ends
    }//where catch ends
    //Outputs the answer
    cout << "your answer is " << myDivide(numm, denumm);
}//where divSolution ends

int main()
{
    //intro
    cout << "Hello, this is my divider program! It takes in two numbers"
        "and divides them" << endl;
    //user input required for continuation
    char ui;
    while (true)
    {
        //protoyped function for loop
        divSolution();
        //asks user for their input to continue or quit.
        cout << "\ndo you want to try again? Enter 'y' for yes." << endl;
        //gets user input
        cin >> ui;
        //checks if true - if true program continues - if not program terminates
        if (ui != 'y')
        {
            //terminates program ending the loop
            break;
        }//where if ends

    }//where while ends
}//where main ends

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
