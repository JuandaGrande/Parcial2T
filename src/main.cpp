#include <iostream>
#include <vector>
#include "Producto.h"

/**
 * @brief Función principal que simula operaciones de una tienda en línea.
 * @return int Código de salida (0 si todo fue correcto).
 */
int main() {
    // Contenedor
    std::vector<Producto> tienda;

    //algunos Productos
    tienda.push_back(Producto("Laptop", 1500.0f, 10, 10));
    tienda.push_back(Producto("Mouse", 25.0f, 50, 0));
    tienda.push_back(Producto("Teclado", 45.0f, 30, 5));

    //Venta
    tienda[0].vender(3);

    // Reabastecimiento
    tienda[1].reabastecer(20);

    // Nuevo precio teclado
    tienda[2].actualizarPrecio(40.0f);

    // resumen
    for (auto& prod : tienda) {
        prod.resumenProducto();
        std::cout << std::endl;
    }

    // total inv
    float valorTotalInventario = 0.0f;
    for (auto& prod : tienda) {
        valorTotalInventario += prod.consultarValorInventario();
    }

    std::cout << "Valor total del inventario: $" << valorTotalInventario << std::endl;

    return 0;
}
