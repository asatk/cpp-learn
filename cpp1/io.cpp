#include <fstream>
#include <iostream>
#include <string>

/** use functions from the std namespace without using
 * the resolution operation (::) to prefix the call to
 * that function, e.g., std::cout vs. cout
 */
using namespace std;    

int cli_io(void) {

    int i;
    double d;
    string s;

    cout << "[Command-line I/O Demo]\n";

    cout << "Enter integer: ";
    cin >> i;

    cout << "Enter double: ";
    cin >> d;

    cout << "Enter string: ";   // output characters to stdout filestream
    cin >> s;                   // input characters from stdin filestream to s
    //cin.get();
    //getline(cin, s);            // read characters from stdin until delimiter

    cout << "int=" << i << " double=" << d << " string=" << s << endl;

    return 0;

}

int file_io(void) {

    int i;
    double d;
    string fname, line, s;
    ofstream fout;
    ifstream fin;

    // write to file `file_io.txt`
    fname = "file_io.txt";
    fout.open(fname);

    // defensive programming -- it is good practice to ensure files are opened
    // correctly
    if ( !fout.is_open() ) {
        cerr << "Error reading file... goodbye." << endl;
        return 1;   // error code of 1 to say something went wrong!
    }

    cout << "[File I/O Demo]\n";

    cout << "Enter integer: ";
    cin >> i;

    cout << "Enter double: ";
    cin >> d;

    cout << "Enter string: ";
    cin.get();
    getline(cin, s);

    // writing can be chained! woah
    fout << i << endl << d << endl << s << endl;

    // ALWAYS CLOSE YOUR FILE!! you don't want any orphaned files :(
    fout.close();

    // read from file `file_io.txt`
    fin.open(fname);

    if ( !fin.is_open() ) {
        cerr << "Error reading file... goodbye." << endl;
        return 1;
    }

    while ( getline(fin, line) ) {
        cout << line << endl;
    }

    // NO ORPHANED FILES!!
    fin.close();

    return 0;

}

int main (void) {

    int errc = 0;

    // return non-zero error code if there is one
    if ( (errc = cli_io()) ) {
        return errc;
    }

    if ( (errc = file_io()) ) {
        return errc;
    }

    return 0;
}
