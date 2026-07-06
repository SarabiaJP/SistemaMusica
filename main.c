#include <stdio.h>
#include "canciones.h"
#include "archivo.h"

int main()
{
    Cancion canciones[MAX_CANCIONES];
    int cantidad = 0;
    int opcion;
    //cargarCanciones(canciones, &cantidad);

    do
    {
        printf("\n=====================================\n");
        printf("      BIBLIOTECA MUSICAL\n");
        printf("=====================================\n");
        printf("1. Registrar canción\n");
        printf("2. Listar canciones\n");
        printf("3. Buscar canción\n");
        printf("4. Actualizar canción\n");
        printf("5. Eliminar canción\n");
        printf("6. Mostrar duración de una canción\n");
        printf("7. Tiempo total de reproducción\n");
        printf("8. Canción más larga\n");
        printf("9. Canción más corta\n");
        printf("10. Cantidad por clasificación\n");
        printf("11. Duración promedio\n");
        printf("12. Clasificación con más canciones\n");
        printf("13. Tiempo total por clasificación\n");
        printf("14. Guardar cambios\n");
        printf("15. Salir\n");
        printf("-------------------------------------\n");
        printf("seleccione una opción: ");
      if (scanf("%d", &opcion) != 1)
{
    printf("Error al leer la opcion\n");
    return 0;
}

printf("Opcion leida: %d\n", opcion);

switch (opcion)
 {   

            case 1:
                registrarCancion(canciones, &cantidad);
                break;

            case 2:
                listarCanciones(canciones, cantidad);
                break;

            case 3:
               buscarCancion(canciones, cantidad);
                break;

            case 4:
                printf("Función en desarrollo...\n");
                break;

            case 5:
                printf("Función en desarrollo...\n");
                break;

            case 6:
                printf("Función en desarrollo...\n");
                break;

            case 7:
                printf("Función en desarrollo...\n");
                break;

            case 8:
                printf("Función en desarrollo...\n");
                break;

            case 9:
                printf("Función en desarrollo...\n");
                break;

            case 10:
                printf("Función en desarrollo...\n");
                break;

            case 11:
                printf("Función en desarrollo...\n");
                break;

            case 12:
                printf("Función en desarrollo...\n");
                break;

            case 13:
                printf("Función en desarrollo...\n");
                break;

            case 14:
                guardarCanciones(canciones, cantidad);
                printf("Cambios guardados correctamente.\n");
                break;

            case 15:
                printf("\nGracias por usar el programa.\n");
                break;

            default:
                printf("\nOpción inválida.\n");
                break;
        }

    } while(opcion != 15);

    return 0;
}