#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int voc[] = {0,0,0,0,0};

    string text;
    getline(cin, text);

    transform(text.begin(), text.end(), text.begin(), ::tolower);

    for ( char e : text ) {
        if (e=='a') voc[0]++;
        else if (e=='a') voc[0]++;
        else if (e=='e') voc[1]++;
        else if (e=='i') voc[2]++;
        else if (e=='o') voc[3]++;
        else if (e=='u') voc[4]++;
    }

   int cont=0;

    for ( int e : voc ) {
        cout<<e;
        if (cont++ != 4) cout<<' ';
    }

    return 0;
}