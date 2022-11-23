#include <iostream>
#include <string>
using namespace std;

class Sorting
{
public:
    int i, j, temp, input[10], sum = 0, fact = 1;
    string user_reply = "yes";
    int how_many_number;

    void user_input()
    {
        cout << "Do you have a set of numbers ?\n";
        cin >> user_reply;
        // @TO_DO: convert user_reply to lowercase
        if (user_reply == "yes")
        {

            cout << "How many numbers do you have? \n";
            cin >> how_many_number;
            cout << "Enter the number ? \n";
            for (int i = 0; i < how_many_number; i++)
            {
                cin >> input[i];
            }
        }
    }

    void sort()
    {
        for (i = 0; i < how_many_number; i++)
        {
            for (j = i + 1; j < how_many_number; j++)
            {
                if (input[i] > input[j])
                {
                    temp = input[i];
                    input[i] = input[j];
                    input[j] = temp;
                }
            }
        }

        cout << "Array after sorting\n";
        for (int i = 0; i < how_many_number; i++)
        {
            cout << input[i] << endl;
        }
    }

    void sum_of_array()
    {
        for (i = 0; i < how_many_number; i++)
        {
            sum = sum + input[i];
        }
        cout << "The sum of sorted array = " << sum;
    }

    // Function for finding the factorial of the sum
    void factorial_of_array()
    {
        for (i = 1; i <= sum; i++)
        {
            fact = fact * i;
        }
        cout << "The factorial = " << fact;
    }
};

int main()
{
    Sorting oldObj;
    while (oldObj.user_reply == "yes")
    {
        // Performing the logic by calling if the user replies yes
        oldObj.user_input();
        if (oldObj.user_reply != "yes")
        {
            break;
        }
        oldObj.sort();
        oldObj.sum_of_array();
        cout << endl;
        oldObj.factorial_of_array();
        cout << endl;

        if (oldObj.user_reply == "yes")
        {
            oldObj.sum = 0;
            oldObj.fact = 1;
            continue;
        }
        else
        {
            break;
        }
    }
    cout << "End of the program"
         << "\n";
    return 0;
}

// Sorting newObj;
// Make a function inside the class that takes a

//     int k = 0;
//     Sorting sortObj;
//     sortObj.input[0] = 1;
//     sortObj.input[1] = 2;
//     sortObj.input[2] = 0;

//     // calling sort function to sort the input array
//     sortObj.sort();

//     // printing the sorted 'input' array
//     // while (k < 3)
//     // {
//     //     cout << sortObj.input[k];
//     //     k++;
//     // }
//     cout << endl;
//     // Calling sum_of_array function to get the sum
//     cout << "The sum = " << sortObj.sum_of_array();
//     cout << endl;

//     // cout << sortObj.sum;

//     // Calling factorial_of_array  function to print the factorial of the sum of the array
//     cout << "Factorial = " << sortObj.factorial_of_array();

//

// int arr[1];
// cout << "Enter the array elements";
// cin >> arr[0];When array is to be initialized its length should be
// specified however for accessing/assign individual members their
// respective index number should be specified

// arr[0] = 1;
// cout << arr
// sortObj.input[3] = {2, 5, 4};

//////// ************* ////////////
// Do you have a set of numbers?
// input=> yes
// How many number do you have?
//=> 5
// Enter the numbers
//=> 4, 10, 44, 10, 1
// Factorial of sum is 15151561

// Do you have a set of numbers?
// input=> yes
// How many number do you have?
//=> 5
// Enter the numbers
//=> 4, 10, 44, 10, 1
// Factorial of sum is 15151561

// Do you have a set of numbers?
// input=> no
// end of program
