#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
#include <string>

/**
 * @brief Clase Producto que representa un item en el inventario.
 */
class Producto {
private:
    /**
     * @brief Nombre del producto.
     */
    std::string nombre;
    /**
     * @brief Precio del producto.
     */
    float precio;
    /**
     * @brief Cantidad en el inventario.
     */
    int stock;
    /**
     * @brief Porcentaje de descuento vigente.
     */
    int descuento;

public:
    /**
     * @brief Constructor de Producto.
     * @param n Nombre.
     * @param p Precio.
     * @param s Stock.
     * @param d Descuento.
     */
    Producto(std::string n, float p, int s, int d);

    /**
     * @brief Actualiza el precio del producto.
     * @param nuevoPrecio Nuevo precio a asignar.
     */
    void actualizarPrecio(float nuevoPrecio) {
        precio = nuevoPrecio;
    }

    /**
     * @brief Muestra un resumen con las características del producto.
     */
    void resumenProducto();

    /**
     * @brief Vende una cantidad del producto.
     * @param cantidad Cantidad a vender.
     * @return Valor total de la venta considerando precio y descuento.
     */
    float vender(int cantidad);

    /**
     * @brief Reabastece el stock.
     * @param cantidad Cantidad adicional en stock.
     */
    void reabastecer(int cantidad);

    /**
     * @brief Consulta el valor total en inventario.
     * @return Valor total (precio * stock).
     */
    float consultarValorInventario();
};

#endif // PRODUCTO_H
