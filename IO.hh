#if !defined __IO_hh__
#define __IO_hh__


#include <iostream>
#include <string>


namespace IO {

using namespace std;



static const string defUsername {"anonymous user"};


void PrintWelcome(string user = "", bool longerGreeting = true)
{
    cout << "welcome to ScratchProgram, "
         << (user.empty()? defUsername : user)
         << '\n';
    if (longerGreeting)
        cout << "may the force be with you\n";
}




} // namespace IO


#endif
