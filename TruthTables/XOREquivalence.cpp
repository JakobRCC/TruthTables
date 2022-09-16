using namespace std;
#include <iostream>

// This code is complete, but commented out so the code can compile
// Swap the uncommented main() in TruthTable.cpp with this to see the compiled code
/*
int main()
{
    int p;
    int q;

    cout << "p q (p&&q)||~(p||q) !(p^q) (p||q)&&~(p&&q) p^q" << endl;
    p = q = 1;
    cout << p << " " << q << "               " << ((p && q) || !(p || q)) << "      " << !(p ^ q) << "               " << ((p || q) && !(p && q)) << "   " << (p ^ q) << endl;
    q = 0;
    cout << p << " " << q << "               " << ((p && q) || !(p || q)) << "      " << !(p ^ q) << "               " << ((p || q) && !(p && q)) << "   " << (p ^ q) << endl;
    p = 0;
    q = 1;
    cout << p << " " << q << "               " << ((p && q) || !(p || q)) << "      " << !(p ^ q) << "               " << ((p || q) && !(p && q)) << "   " << (p ^ q) << endl;
    q = 0;
    cout << p << " " << q << "               " << ((p && q) || !(p || q)) << "      " << !(p ^ q) << "               " << ((p || q) && !(p && q)) << "   " << (p ^ q) << endl;
}
*/