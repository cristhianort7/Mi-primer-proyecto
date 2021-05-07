#include<iostream>
using namespace std;
#include "Contenedor.h"

int main (int argc, char *argv[]) {
	Contenedor contenedor;
	contenedor.mostrarMatriz();
	cout<<"\n";
	cout<<contenedor.ventaProducto(0,4)<<"\n";
	cout<<contenedor.ventaSemanal()<<"\n";
	cout.precision(3);
	cout<<fixed<<contenedor.ventaPromProducto(1)<<"\n";
	cout<<contenedor.prodMenorVenta(1)<<"\n";
	return 0;
}

