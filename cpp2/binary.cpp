#include <iostream>

using namespace std;

// NOTE -- this list must be sorted in order for binary search to work
const int list[] = {1, 5, 25, 30, 31, 43, 67, 68, 77, 92};

/*
 * Recursive binary search. Returns position of element if found; else -1.
 * num - number to search for
 * i - start of sub-array
 * len - length of sub-array
 */
int binary (int num, int i, int len) {

    int mid;

    // midpoint of sub-array
    mid = i+len/2;

    if ( len == 0 ) // nothing left to search  :(
        return -1;
    else if ( num == list[mid] )    // found it :)
        return mid;
    else if ( num < list[mid] ) // bottom half
        return binary(num, i, len/2);
    else if ( num > list[mid] ) // top half
        return binary(num, mid+1, len/2);

    // execution should never reach here
    return -1;
}

int main (void) {

    int i, len, num, pos;

    len = sizeof(list) / sizeof(int);

    // print elements of list
    cout << "List (" << len << " elements): ";
    for ( i = 0 ; i < len ; i++ ) cout << " " << list[i];
    cout << "\n";

    // prompt user
    cout << "Find position of which element? ";
    cin >> num;

    // search for element
    pos = binary(num, 0, len);
    if ( pos == -1 ) {
        cout << "Number " << num << " not found." << endl;
        return 1;
    }

    // print result of search
    cout << "Number " << num << " found at position " << pos << endl;

}
