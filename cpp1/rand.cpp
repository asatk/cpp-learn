#include <cstdlib>
#include <iostream>

using namespace std;

int main(void) {

    char c;
    int seed, x;

    /**
     * the seed is 2025 in base 16 (8229 in base 10). you can make it
     * whatever you want; i just happen to think that putting the 0x
     * in front of the number makes it more fun :)
     */
    seed = 0x2025; 
    srand(seed);    // seed the PRNG

    cout << "Generate Number? [ENTER to contine]: ";    // prompt user
    cin >> noskipws >> c;   // get input char from stdin

    while ( c == '\n' ) {
        x = rand();         // generate random int from 0 to 2^32 - 1
        cout << x << endl;  // output number
        cout << "Generate Number? [ENTER to continue]: ";   // prompt user
        cin >> noskipws >> c;   // get input char from stdin
    }
}
