 #include <algorithm>
#include <iostream>

 using namespace std;

 struct puntos {
     int x;
     int y;
 };

 int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    puntos a,b,c;
    
    cin>>a.x>>a.y>>b.x>>b.y>>c.x>>c.y;

    puntos a_max, b_min;

    a_max.x = max(a.x, b.x);
    a_max.y = max(a.y, b.y);
    b_min.x = min(a.x, b.x);
    b_min.y = min(a.y, b.y);

    if (a_max.x>=c.x && a_max.y>=c.y && b_min.x<=c.x && b_min.y<=c.y) {
        cout<<"adentro";
    }

    // "", "afuera", "lado derecho", "lado izquierdo", "lado superior" y "lado inferior".
    
    return 0;
 }

 // Nombre: Francisco Javier Velez Otavo
 // Grado: 1001
 // UserOmegaup: Fravelz
 // Residencia: Colombia, Bogota DC, San Cristobal
 
