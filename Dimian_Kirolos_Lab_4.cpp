// Kirolos Dimian
// Lab 4
// 10/1/24

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() // This is the function "main"
{
    // Declaring the Variables
    string Name_Of_Fruit;
    double Gram_Numbers;
    double Number_Of_Fruits;

    cout << "How many fruits do you want to know the type of? " << endl;
    cin  >> Number_Of_Fruits;

    while (Number_Of_Fruits != 0)
    {
        // Asking the user for input of the fruit 
        cout << "What is the name of your fruit (Please enter in one word): " << endl;
        cin >> Name_Of_Fruit;

        // Asking the user for input of the grams of sugar in the fruit
        cout << "How many grams of sugar are in your fruit?" << endl;
        cin >> Gram_Numbers;

         // Used line break for organization
        cout << endl;

        // If statements
        if (Gram_Numbers < 10)
            cout << Name_Of_Fruit << ": LOW SUGAR FRUIT" <<  endl;
    
        if (10 <= Gram_Numbers  && Gram_Numbers <= 14)
            cout << Name_Of_Fruit << ": MEDIUM SUGAR FRUIT" << endl;

        if (Gram_Numbers > 14)
            cout << Name_Of_Fruit << ": HIGH SUGAR FRUIT" <<  endl;
    }
    
    cout << endl;

    Number_Of_Fruits = Number_Of_Fruits - 1;

    return 0;

}