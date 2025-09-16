#include <iostream>
#include <array>
#include <string>
#include <algorithm>

using namespace std;

string solve(string& s) {
    array<string, 11> nums = {
        "cero","uno","dos","tres","cuatro","cinco",
        "seis","siete","ocho","nueve","diez"
    };


    array<int, 11> nums_ = {0,1,2,3,4,5,6,7,8,9,10};

    for (int i=0; i<11; ++i) {
        int pos;

        while ( (pos=s.find(nums[i])) != string::npos) {
            s.replace(pos, nums[i].size(), to_string(nums_[i]));
        }
    }
    return s;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;

    while( getline(cin, s) ) {
        cout<<solve(s)<<'\n';
    }

    return 0;
}