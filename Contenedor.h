#include<iostream>
using namespace std;

class Contenedor{
private:
	int matrizContenedor[15][7];
public:
	Contenedor();
	~Contenedor();
	int ventaProducto(int x,int y);
	int ventaSemanal();
	double ventaPromProducto(int p);
	int prodMenorVenta(int y);
	void mostrarMatriz();
};
