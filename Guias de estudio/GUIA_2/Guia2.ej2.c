/*Guia de estudio n°2 - Ejercicio 2 - Cristofer Garcia*/

#include <stdio.h>
#include <string.h>


/*Definiremos la estructura Producto*/ 
typedef struct {
    char codigo[50];
    char descripcion[50];
    float precio;
} Producto;

int main() {
    // Definir dos productos
    Producto producto1, producto2;

    /*especificamos manualmente el codigo, descripcion y precio del producto1*/ 
    printf("Ingrese el codigo del producto 1: ");
    scanf("%s", producto1.codigo);
    printf("Ingrese la descripcion del producto 1: ");
    scanf("%s", producto1.descripcion);
    printf("Ingrese el precio del producto 1: ");
    scanf("%f", &producto1.precio);

    /*especificamos manualmente el codigo, descripcion y precio del producto2*/ 
    printf("Ingrese el codigo del producto 2: ");
    scanf("%s", producto2.codigo);
    printf("Ingrese la descripcion del producto 2: ");
    scanf("%s", producto2.descripcion);
    printf("Ingrese el precio del producto 2: ");
    scanf("%f", &producto2.precio);

    // Imprimir el nombre del producto con mayor precio
    if (producto1.precio > producto2.precio) {
        printf("El producto con mayor precio es: %s\n", producto1.descripcion);
    } else {
        printf("El producto con mayor precio es: %s\n", producto2.descripcion);
    }

    return 0;
}
