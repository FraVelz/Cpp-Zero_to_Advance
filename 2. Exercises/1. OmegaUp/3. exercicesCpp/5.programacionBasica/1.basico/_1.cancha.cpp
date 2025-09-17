#include <iostream>
#include <algorithm>

using namespace std;

struct box {
    int x1, y1, x2, y2;
};

int areaIntersepcion(const box& a, const box& b) {
    int left  = max(min(a.x1, a.x2), min(b.x1, b.x2));
    int right = min(max(a.x1, a.x2), max(b.x1, b.x2));

    int bottom = max(min(a.y1, a.y2), min(b.y1, b.y2));
    int top    = min(max(a.y1, a.y2), max(b.y1, b.y2));

    int w, h;
    return w * h;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    box a, b;

    cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
    cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;

    cout << areaIntersepcion(a, b);
   
    return 0;
}
