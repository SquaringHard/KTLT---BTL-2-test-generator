#include <bits/stdc++.h>
#include "study_in_pink2.h"
#define PII pair <int, int>
#define fastio ios_base::sync_with_stdio(0); cin.tie(NULL)

using namespace std;

const char nl = '\n';

int main() {
    string s, s1, s2;
    int no, a = 0; cout << "How many tests? (warning: too many tests may crash the code) "; cin >> no;
    StudyPinkProgram * st = nullptr;

    bool diff = 0;
    ifstream ifsE, ifsO;
    string sE, sO;

    cout << "Processing...\n";
    cout << "Differences found in tests:\n";

    for (int test=1; test<=no; test++)
    {
        diff = 0;
        s = ".\\Tests\\input\\input" + to_string(test) + ".txt";
        s1 = ".\\Tests\\expected\\expected" + to_string(test) + ".txt";
        s2 = ".\\Tests\\output\\output" + to_string(test) + ".txt";

        // cout << "Locations: \n" << s << nl << s1 << nl;

        st = new StudyPinkProgram(s, s2);
        st->run(1);

        // comparison

        ifsE.open(s1); ifsO.open(s2);
        ifsE >> sE;
        ifsO >> sO;

        while ((!ifsE.eof()) && (!ifsO.eof()))
        {
            if (sE != sO) {cout << test << " "; diff = 1; a++; break;}
            ifsE >> sE;
            ifsO >> sO;
        }

        if (!diff)
        {
            if ((!ifsE.eof()) && (ifsO.eof())) {cout << test << " "; diff = 1; a++;}
            if ((ifsE.eof()) && (!ifsO.eof())) {cout << test << " "; diff = 1; a++;}
        }

        ifsE.close(); ifsO.close();
        delete st;
    }

    if (!a) cout << "none :)";
    cout << "\nMatched " << no - a << "/" << no << " tests with expectations.\n";
    cout << "Testing complete.\n";

    return 0;
}
