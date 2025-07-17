#include <iostream>
#define MAXLINE 256     // define constant for maximum number of characters in
                        // our string buffer

using namespace std;    // use functions from the std namespace without using
                        // the resolution operation (::) to prefix the call to
                        // that function, e.g., std::cout vs. cout

int main (void) {

    char buf[MAXLINE];  // allocate array of MAXLINE characters

    cout << "Enter string: ";   // output characters to stdout filestream
    cin >> buf;                 // input characters from stdin filestream to buf
    cout << "Your string is: " << buf << endl;  // output characters from buf

}
