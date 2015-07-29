
#include <exception>

#include <iostream>



#include <iostream>

#include "IO.cc"



using namespace std;


int main(int argc, char* argv[])
{



    try {

        IO::PrintWelcome();
                
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
