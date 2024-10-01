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

    // Asks this question with the input only once
    cout << "How many fruits do you want to know the type of? " << endl;
    cin  >> Number_Of_Fruits;

    // Creates a while loop in which everything inside it runs until the fruits = 0
    while (Number_Of_Fruits != 0)
    {

        // Statement showing how many fruits are left
        cout << "You have " << Number_Of_Fruits << " fruits left" << endl;

        // Asking the user for input of the fruit 
        cout << "What is the name of your fruit (Please enter in one word): " << endl;
        cin >> Name_Of_Fruit;

        // Asking the user for input of the grams of sugar in the fruit
        cout << "How many grams of sugar are in your fruit?" << endl;
        cin >> Gram_Numbers;

         // Used line break for organization
        cout << endl;

        // If statements
        // Shows that if the sugar is less than 10, print Low Sugar fruit
        if (Gram_Numbers < 10)
        {
            cout << Name_Of_Fruit << ": LOW SUGAR FRUIT" <<  endl;
        }

        // Shows that if the sugar is between 10 and 14 grams, it will print medium sugar fruit
        if (10 <= Gram_Numbers  && Gram_Numbers <= 14)
        {
            cout << Name_Of_Fruit << ": MEDIUM SUGAR FRUIT" << endl;
        }

        // Shows that if the sugar is more than 14, print high Sugar fruit
        if (Gram_Numbers > 14)
        {
            cout << Name_Of_Fruit << ": HIGH SUGAR FRUIT" <<  endl;
        }
        // Makes a blank line
        cout << endl;

        // Acts like a countdown until it breaks 
        Number_Of_Fruits = Number_Of_Fruits - 1;

    }

    return 0; // Finishes the code

}

/* Output of my code
How many fruits do you want to know the type of? 
5
You have 5 fruits left
What is the name of your fruit (Please enter in one word):
grapes
How many grams of sugar are in your fruit?
23.37

grapes: HIGH SUGAR FRUIT

You have 4 fruits left
What is the name of your fruit (Please enter in one word):
avocado
How many grams of sugar are in your fruit?
.99

avocado: LOW SUGAR FRUIT

You have 3 fruits left
What is the name of your fruit (Please enter in one word):
strawberries
How many grams of sugar are in your fruit?
7

strawberries: LOW SUGAR FRUIT

You have 2 fruits left
What is the name of your fruit (Please enter in one word):
grapefruit
How many grams of sugar are in your fruit?
10.6

grapefruit: MEDIUM SUGAR FRUIT

You have 1 fruits left
What is the name of your fruit (Please enter in one word):
orange 
How many grams of sugar are in your fruit?
14

orange: MEDIUM SUGAR FRUIT
*/