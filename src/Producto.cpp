#include "Producto.h"
#include <iostream>

/**
 * @brief Constructor de Producto.
 * @param n Nombre del producto.
 * @param p Precio del producto.
 * @param s Cantidad en inventario.
 * @param d Porcentaje de descuento.
 */
Producto::Producto(std::string n, float p, int s, int d) {
    nombre = n;
    precio = p;
    stock = s;
    descuento = d;
}

/**
 * @brief Muestra un resumen con las características del producto.
 */
void Producto::resumenProducto() {
    std::cout << "Producto: " << nombre << std::endl;
    std::cout << "Precio: " << precio << std::endl;
    std::cout << "Stock: " << stock << std::endl;
    std::cout << "Descuento: " << descuento << "%" << std::endl;
}

/**
 * @brief Vende una cantidad determinada del producto.
 * @param cantidad Cantidad a vender.
 * @return Valor total de la venta considerando precio y descuento.
 */
float Producto::vender(int cantidad) {
    if (cantidad > stock) {
        std::cout << "No hay suficiente stock para la venta." << std::endl;
        return 0.0f;
    }
    stock -= cantidad;
    float valorVenta = cantidad * precio * (1 - descuento / 100.0f);
    return valorVenta;
}

/**
 * @brief Reabastece el stock del producto.
 * @param cantidad Cantidad a añadir al stock.
 */
void Producto::reabastecer(int cantidad) {
    if (cantidad > 0) {
        stock += cantidad;
    }
}

/**
 * @brief Calcula el valor total del inventario de este producto.
 * @return Valor total basado en precio por stock.
 */
float Producto::consultarValorInventario() {
    return stock * precio;
}
