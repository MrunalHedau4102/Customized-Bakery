#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    char name[30], cc1[] = "Oreo Cupcakes", cc2[] = "KitKat Cupcakes", cc3[] = "Nutella Cupcakes", cc4[] = "Butterscotch Cupcakes", 
                cc5[] = "Cakesicles", cc6[] = "Wheat Cakes", cc7[] = "Tea Cakes", cc8[] = "Bento Cakes", cc9[] = "Strawberry Cupcakes", 
                cc10[] = "Vanilla Cupcakes", cc11[] = "Mini Cakes", cc12[] = "Lotus Biscoff";
    int choice = 0, pchoice, pchoice1, quantity;
    char gotostart;
    string s, u, p, u1, p1;

    system("CLS");

loginReg:
    cout << "Do you want to Login(L) OR Register(R)?" << endl;
    cin >> s;

    if (s == "L")
    {
        cout << "Enter name : " << endl;
        cin >> u;
        cout << "Enter password : " << endl;
        cin >> p;
        if (u == "Anjali" && p == "ab@12")
        {
            cout << "You have successfully logged in." << endl;
        }
        else
        {
            cout << "Wrong Login credentials" << endl;
            goto loginReg;
        }
    }
    else if (s == "R")
    {
        cout << "Enter name : " << endl;
        cin >> u;

        cout << "Set username : " << endl;
        cin >> u1;
        cout << "Set password : " << endl;
        cin >> p1;

        cout << "Welcome " << u << " .You have successfully registered." << endl;
    }
    else
    {
        cout << "Enter valid input." << endl;
        goto loginReg;
    }

beginning:

    cout << "HELLO " << u << "\n\n Welcome to Online Custom Bakery \n\n";
    cout << "\t\t\t\t--------Bakeries--------\n\n";
    cout << "1) The Cupcake Store\n";
    cout << "2) Euphoric cakes\n";
    cout << "3) Fluff in a cup\n";
    cout << "\nPlease Enter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "\n1)" << cc1 << "\n";
        cout << "\n2)" << cc2 << "\n";
        cout << "\n3)" << cc3 << "\n";
        cout << "\n4)" << cc4 << "\n";
        cout << "\nPlease Enter the flavour you would like to have : ";
        cin >> pchoice;

        cout << "Do you want customization? Select Y/N : ";
        cin >> s;

    customization1:
        if (s == "Y")
        {
            cout << "Please enter type of customization :";
            cin >> s;

            goto customization2;
        }

        else if (s == "N")
        {
            goto customization2;
        }
        else
        {
            cout << "Enter valid input.";
            goto customization1;
        }

    customization2:
        if (pchoice >= 1 && pchoice <= 5)
        {
            cout << "\n1) Box of 6 Cupcakes 250rs "
                 << "\n2) Box of 12 Cupcakes 500rs";
            cout << "\nEnter the category you want ";
            cin >> pchoice1;
            if (pchoice1 >= 1 && pchoice1 <= 2)
                cout << "Please enter the quantity of boxes you need: ";
            cin >> quantity;
            switch (pchoice1)
            {
            case 1:
                choice = 250 * quantity;
                break;
            case 2:
                choice = 500 * quantity;
                break;
            }
            system("CLS");
            switch (pchoice1)
            {
            case 1:
                cout << "\t\t\t--------Your Order---------\n";
                cout << "" << quantity << " " << cc1;
                cout << "\nYour Total Bill is " << choice << "\nYour Order Will be delivered soon";
                cout << "\n\nThank you For Ordering From The Cup Cake Corner\n";
                break;
            case 2:
                cout << "\t\t\t--------Your Order---------\n";
                cout << "" << quantity << " " << cc2;
                cout << "\nYour Total Bill is " << choice << "\nYour Order Will be delivered soon";
                cout << "\n\nThank you For Ordering From The Cup Cake Corner\n";
                break;
            case 3:
                cout << "\t\t\t--------Your Order---------\n";
                cout << "" << quantity << " " << cc3;
                cout << "\nYour Total Bill is " << choice << "\nYour Order Will be delivered soon";
                cout << "\n\nThank you For Ordering From The Cup Cake Corner\n";
                break;
            case 4:
                cout << "\t\t\t--------Your Order---------\n";
                cout << "" << quantity << " " << cc4;
                cout << "\nYour Total Bill is" << choice << "\nYour Order Will be delivered soon";
                cout << "\n\nThank you For Ordering From The Cup Cake Corner\n";
                break;
            }
            cout << "Would you like to order anything else? Y / N:";
            cin >> gotostart;
            if (gotostart == 'Y' || gotostart == 'y')
            {
                goto beginning;
                // return 0;
            }
        }
    }
    else if (choice == 2)
    {
        cout << "\n1) " << cc5 << " Box of 5 for 500rs"
             << "\n";
        cout << "2) " << cc6 << " Box of 6 for 360rs"
             << "\n";
        cout << "3) " << cc7 << " 200rs"
             << "\n";
        cout << "4) " << cc8 << " 300rs"
             << "\n";
        cout << "\nPlease Enter the item u like to have?: ";
        cin >> pchoice1;
        cout << "Do you want customization? Select Y/N : ";
        cin >> s;
        
    customization3:
        if (s == "Y")
        {
            cout << "Please enter type of customization :";
            cin >> u;

            goto customization4;
        }

        else if (s == "N")
        {
            goto customization4;
        }
        else
        {
            cout << "Enter valid input.";
            goto customization3;
        }
    customization4:
        if (pchoice1 >= 1 && pchoice1 <= 4)
        {
            cout << "\nPlease Enter Quantity: ";
            cin >> quantity;
            switch (pchoice1)
            {
            case 1:
                choice = 500 * quantity;
                break;
            case 2:
                choice = 360 * quantity;
                break;
            case 3:
                choice = 200 * quantity;
                break;
            case 4:
                choice = 300 * quantity;
                break;
            }
            system("CLS");
            switch (pchoice1)
            {
            case 1:
                cout << "\t\t--------Your Order---------\n";
                cout << "" << quantity << " " << cc5;
                cout << "\nYour Total Bill is" << choice << "\nYour Order Will be delivered soon";
                cout << "\nThank you For Ordering From Euphoric cakes \n";
                break;
            case 2:
                cout << "\t\t--------Your Order---------\n";
                cout << "" << quantity << " " << cc6;
                cout << "\nYour Total Bill is" << choice << "\nYour Order Will be delivered soon";
                cout << "\nThank you For Ordering From Euphoric cakes\n";
                break;
            case 3:
                cout << "\t\t--------Your Order---------\n";
                cout << "" << quantity << " " << cc7;
                cout << "\nYour Total Bill is" << choice << "\nYour Order Will be delivered soon";
                cout << "\nThank you For Ordering From Euphoric Cupcakes\n";
                break;
            case 4:
                cout << "\t\t--------Your Order---------\n";
                cout << "" << quantity << " " << cc8;
                cout << "\nYour Total Bill is" << choice << "\nYour Order Will be delivered soon";
                cout << "\nThank you For Ordering From Euphoric Cupcakes\n";
                break;
            }
            cout << "\nWould you like to order anything else? Y / N:";
            cin >> gotostart;
            if (gotostart == 'Y' || gotostart == 'y')
            {
                goto beginning;
                //return 0;
            }
        }
    }
    else if (choice == 3)
    {
        cout << "\n1) " << cc9 << " Box of 6 cupcakes for 200rs"
             << "\n";
        cout << "2) " << cc10 << " Box of 6 cupcakes for 250rs"
             << "\n";
        cout << "3) " << cc11 << " Box of 4 for 150rs"
             << "\n";
        cout << "4) " << cc12 << "Box of 6 cupcakes for 300rs"
             << "\n";
        cout << "\nPlease Enter the item needed :";
        cin >> pchoice1;
        cout << "Do you want customization? Select Y/N : ";
        cin >> s;

    customization5:
        if (s == "Y")
        {
            cout << "Please enter type of customization :";
            cin >> u;

            goto customization6;
        }

        else if (s == "N")
        {
            goto customization6;
        }
        else
        {
            cout << "Enter valid input.";
            goto customization5;
        }

    customization6:
        if (pchoice1 >= 1 && pchoice1 <= 4)
        {
            cout << "\nPlease Enter Quantity: ";
            cin >> quantity;
            switch (pchoice1)
            {
            case 1:
                choice = 200 * quantity;
                break;
            case 2:
                choice = 250 * quantity;
                break;
            case 3:
                choice = 150 * quantity;
                break;
            case 4:
                choice = 300 * quantity;
                break;
            }
            system("CLS");
            switch (pchoice1)
            {
            case 1:
                cout << "\t\t--------Your Order---------\n";
                cout << "" << quantity << " " << cc9;
                cout << "\nYour Total Bill is" << choice << "\nYour Order Will be delivered soon";
                cout << "\nThank you For Ordering From Fluff in a cup\n";
                break;
            case 2:
                cout << "\t\t--------Your Order---------\n";
                cout << "" << quantity << " " << cc10;
                cout << "\nYour Total Bill is" << choice << "\nYour Order Will be delivered soon";
                cout << "\nThank you For Ordering From Fluff in a cup\n";
                break;
            case 3:
                cout << "\t\t--------Your Order---------\n";
                cout << "" << quantity << " " << cc11;
                cout << "\nYour Total Bill is" << choice << "\nYour Order Will be delivered soon";
                cout << "\nThank you For Ordering From Fluff in a cup\n";
                break;
            case 4:
                cout << "\t\t--------Your Order---------\n";
                cout << "" << quantity << " " << cc12;
                cout << "\nYour Total Bill is" << choice << "\nYour Order Will be delivered soon";
                cout << "\nThank you For Ordering From Fluff in a cup\n";
                break;
            }
            cout << "Would you like to order anything else? Y / N:";
            cin >> gotostart;
            if (gotostart == 'Y' || gotostart == 'y')
            {
                goto beginning;
                //return 0;
            }
        }
    }
    else
    {
        system("CLS");
        cout << "Please Select Right Option: \n";
        cout << "Would You like to Start the program again? Y / N: ";
        cin >> gotostart;
        if (gotostart == 'Y' || gotostart == 'y')
        {
            goto beginning;
            //return 0;
        }
    }
    getch();
}