#include <cstdio>
#include <climits>

using namespace std;

int main() {
    int n, minimo=INT_MAX, sum=0; scanf("%d", &n);

    while (n--) {
        int j; scanf("%d", &j);
        sum += j;
        if (j < minimo) minimo = j;
    }
    printf("%d", sum-minimo);
    return 0;
}