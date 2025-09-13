#include <iostream>
#include <algorithm>

using namespace std;

struct box {
    int x1;
    int y1;
    int x2;
    int y2;
};

int areaEnPlano(box &s) {
    return (
        ( max(s.x1, s.x2) - min(s.x1, s.x2) ) *
        ( max(s.y1, s.y2) - min(s.y1, s.y2) )
    );
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    box a,b, c;

    cin>>a.x1>>a.y1>>a.x2>>a.y2;
    cin>>b.x1>>b.y1>>b.x2>>b.y2;

    // Case 1
    if (
       a.x1 <= b.x1 && a.y1 <= b.y1 &&
       a.x2 >= b.x1 && a.y2 >= b.y1
    ) {
       cout << areaEnPlano(b);

    } else if (
       b.x1 <= a.x1 && b.y1 <= a.y1 &&
       b.x2 >= a.x1 && b.y2 >= a.y1
    ) {
       cout << areaEnPlano(a);

    // Case 2
    } else if (

    ) {}

    // Case 3
    // Case 4
    // Case 5
    
    return 0;
}
