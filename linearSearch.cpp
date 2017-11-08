/*
 * Carrie Ward
 */

#include <iostream>
using namespace std;

// function prototype
int searchList(const int[], int, int);
const int SIZE = 5;


int main() {

    int tests[SIZE] = { 87, 75, 98, 100, 82 };
    int results;

    // search the array for 100
    results = searchList( tests, SIZE, 100 );

    // if searchList returns -1, them 100 was not found
    if (results == -1)
    {
        cout << "You did not earn 100 on any test." << endl;
    }
    else
    {
        cout << "You earned 100 on test number ";
        cout << (results + 1) << endl;
    }
    return 0;
}

int searchList(const int list[], int numElement, int testNo)
{
    int index = 0;      // index in search array
    int position = -1;  // to record position of search value (which test number gave a score of 100)
    bool found = false; // flag to indicate if the value was found

    while (index < numElement && !found)
    {
        if (list[index] == testNo)      // if the testNo is found
        {
            found = true;               // set the flag
            position = index;           // record which test number gave a score of 100
        }
        index++;                        // go to the next element
    }
    return position;                    // return the test number or return -1
}
