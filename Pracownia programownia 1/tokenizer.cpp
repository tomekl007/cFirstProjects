#include "Tokenizer.h"
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    // instanciate Tokenizer class
    Tokenizer str("This is a very long string.");
    string token;

    // Tokenizer::next() returns a next available token from source string
    // If it reaches EOS, it returns zero-length string, "".
    while((token = str.next()) != "")
    {
        cout << token << endl;
    }
    return 0;
}
