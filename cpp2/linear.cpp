#include <iostream>

using namespace std;

// linear search works on any array
const int list[] = {5, 67, 30, 43, 1, 68, 92, 31, 25, 77};

/**
 * Linear search for element. Returns position in array if found else -1.
 * num - number to search array for.
 */
int linear (int num) {

    int i, len;

    len = sizeof(list) / sizeof(int);

    // iterative search through list
    for ( i = 0 ; i < len ; i++ ) {
        if ( num == list[i] )
            return i;
    }
    return -1;
}

int main (void) {

    int i, len, num, pos;

    len = sizeof(list) / sizeof(int);

    // print elements
    cout << "List (" << len << " elements): ";
    for ( i = 0 ; i < len ; i++ ) cout << " " << list[i];
    cout << "\n";

    // prompt user
    cout << "Find position of which element? ";
    cin >> num;

    // search array
    pos = linear(num);
    if ( pos == -1 ) {
        cout << "Number " << num << " not found." << endl;
        return 1;
    }

    // print result
    cout << "Number " << num << " found at position " << pos << endl;

}
