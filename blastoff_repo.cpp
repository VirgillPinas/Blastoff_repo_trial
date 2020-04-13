#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Let's", "try", "this", "again", ".", "Here", "we", "go", "."};

    int i = 0;
    for (const string& word : msg)
    {
        ++i;

        cout << word << " ";
    }
    cout << endl;
}