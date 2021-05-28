#include<iostream>

using namespace std;

int main()
{
    int a,b;
    int choice = 0;
    int Result = 0;

    cout << "Enter two value ";
    cin >> a >> b;
    cout << "choice 1 = Addition \n";
    cout << "choice 2 = Subtraction \n";
    cout << "choice 3 = Multification \n";
    cout << "choice 4 = Divide \n";
    
    cout << "Enter your choice \n";
    cin >> choice;

    if(choice == 1)
    {
       Result = a + b;
       cout << Result<< "\n";
    }
    else if (choice == 2)
    {
        Result = a - b;
        cout << Result<< "\n";
    }
    else if(choice == 3)
    {
        Result = a * b;
        cout << Result << "\n";
    }
    else
    {
        Result = a / b;
        cout << Result << "\n";
    }

    //cout << "Here is result  " << choice;

    return 0;
}