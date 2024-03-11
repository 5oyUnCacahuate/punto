#include <iostream>
#include <cmath>
using namespace std;

class Punto {
private:
    double x; 
    double y;

public:
    
    Punto() : x(0), y(0) {}

    Punto(double x, double y) : x(x), y(y) {}

    double calcularArea(Punto p) {
        double base = abs(p.x - x);
        double altura = abs(p.y - y);
        return base * altura;
    }

    void mostrarInformacion() {
        cout << "Coordenada X: " << x << endl;
        cout << "Coordenada Y: " << y << endl;
    }
};

int main() {
    Punto punto1(2, 4);
    Punto punto2(5, 2);
    cout << "Informacion de los dos puntos del primer rectangulo:" << endl;
    punto1.mostrarInformacion();
    cout << "Area: " << punto1.calcularArea(punto2) << endl;
    cout << endl;

    Punto punto3(10, 5);
    Punto punto4(13, 2);
    cout << "Informacion de los dos puntos del segundo rectangulo:" << endl;
    punto3.mostrarInformacion();
    cout << "Area: " << punto3.calcularArea(punto4) << endl;
    cout << endl;

    return 0;
}