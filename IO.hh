#if !defined __IO_hh__
#define __IO_hh__


#include <iostream>


namespace IO {

using namespace std;



static const string defUsername {"anonymous user"};


void PrintWelcome(string user = "")
{
    cout << "welcome to ScratchProgram, "
         << (user.empty()? defUsername : user)
         << '\n';
}




} // namespace IO


#endif
