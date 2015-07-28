#include <exception>
#include <iostream>


using namespace std;


int main(int argc, char* argv[])
{
    try {

        cout << "welcome to Scratch Program\n";
        
    }

    catch (exception& e) {
        cerr << e.what() << '\n';
        return 1;
    }
    catch (...) {
        cerr << "caught unknown exception\n";
        return 1;
    }

    return 0;
}
