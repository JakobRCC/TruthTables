using namespace std;
#include <iostream>
// decided to be super lazy with all the spaces
// yeah i can use <iomanip> but there is little point

// because all 3 parts of the lab are in the same solution, only this one will compile
// just clone the repo and copy the code from the other source files here to see the output

int main()
{
    bool p;
    bool q;

    cout << "p q ~p ~q p&&q p||q p^q p^q^q p^q^p !(p&&q) !p||!q !(p||q) !p^!q" << endl;
    p = q = true;
    cout << p << " " << q << "  " << !p << "  " << !q << "    " << (p && q) << "    " << (p || q) << "   " << (p ^ q) << "     " << (p ^ q ^ q) << "     " << (p ^ q ^ p) << "       " << (!(p && q)) << "      " << (!p || !q) << "       " << (!(p || q)) << "     " << (!p ^ !q) << endl;
    q = false;
    cout << p << " " << q << "  " << !p << "  " << !q << "    " << (p && q) << "    " << (p || q) << "   " << (p ^ q) << "     " << (p ^ q ^ q) << "     " << (p ^ q ^ p) << "       " << (!(p && q)) << "      " << (!p || !q) << "       " << (!(p || q)) << "     " << (!p ^ !q) << endl;
    p = false;
    q = true;
    cout << p << " " << q << "  " << !p << "  " << !q << "    " << (p && q) << "    " << (p || q) << "   " << (p ^ q) << "     " << (p ^ q ^ q) << "     " << (p ^ q ^ p) << "       " << (!(p && q)) << "      " << (!p || !q) << "       " << (!(p || q)) << "     " << (!p ^ !q) << endl;
    q = false;
    cout << p << " " << q << "  " << !p << "  " << !q << "    " << (p && q) << "    " << (p || q) << "   " << (p ^ q) << "     " << (p ^ q ^ q) << "     " << (p ^ q ^ p) << "       " << (!(p && q)) << "      " << (!p || !q) << "       " << (!(p || q)) << "     " << (!p ^ !q) << endl;
}
