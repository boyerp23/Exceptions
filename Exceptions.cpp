// Exceptions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <exception>

float myDivide(float num, float denum) 
{
    return num / denum;
}

using namespace std;

int main()
{
    int dbz_err = 0;
    int num_z_wrn = 1;
    float numm;
    float denumm;
    char chr_in;

START:
    try 
    {
        cout << "Hello, this is my divider program! It takes in two numbers"
            "and divides them" << endl;
        cout << "Please enter a number for your numerator" << endl;
        cin >> numm;
        if (numm == 0) 
        {
            throw num_z_wrn;
        }
        cout << "Please enter a number for your denominator" << endl;
        cin >> denumm;
    }
    catch(int e)
    {
        cout << "Numerator entered as Zero, answer will always be Zero. Program terminating.." << endl;
        return -1;
    }
    try 
    {
        if (denumm == 0)
        {
            throw dbz_err;
        }
    }
    catch (int myE)
    {
        if (myE==dbz_err)
        {
            cout << "Your entered 0 as your denominator casting to smole value" << endl;
            denumm = 0.00000001;
            
        }
    }
    cout << "your answer is " << myDivide(numm, denumm);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
