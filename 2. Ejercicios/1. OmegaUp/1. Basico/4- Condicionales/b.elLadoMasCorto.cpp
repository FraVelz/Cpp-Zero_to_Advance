#include <cstdio>
#include <cmath>

double distancia(double x1, double y1, double x2, double y2) {
    return sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
}

int main() {
    double x[4], y[4];
    for (int i = 0; i < 4; ++i) {
        scanf("%lf %lf", &x[i], &y[i]);
    }

    double lado = 1e18; // Un número muy grande

    for (int i = 0; i < 4; ++i) {
        for (int j = i + 1; j < 4; ++j) {
            double temp = distancia(x[i], y[i], x[j], y[j]);
            if (temp < lado) lado = temp;
        }
    }

    printf("%lf\n", lado); 
    return 0;
}
