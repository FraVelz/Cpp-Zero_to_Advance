#include <cstdio>

inline void intercambiar(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a, b, c, d; scanf("%d %d %d %d", &a, &b, &c, &d);
    int a_ = a, b_ = b, c_ = c, d_ = d;

    for (int i = 0; i < 4; ++i) {
        if (a_ > b_) intercambiar(a_, b_);
        if (b_ > c_) intercambiar(b_, c_);
        if (c_ > d_) intercambiar(c_, d_);
    }

    printf("%d %d %d %d", a_, b_, c_, d_);

    return 0;
}