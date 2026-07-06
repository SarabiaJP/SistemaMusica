#include <stdio.h>
#include <string.h>
#include "archivo.h"

void guardarCanciones(Cancion canciones[], int n)
{
    FILE *archivo;

    archivo = fopen("canciones.csv", "w");

    if (archivo == NULL)
    {
        printf("Error al abrir el archivo.\n");
        return;
    }

    fprintf(archivo, "codigo,titulo,clasificacion,compositor,artista,duracion\n");

    for (int i = 0; i < n; i++)
    {
        fprintf(archivo, "%s,%s,%s,%s,%s,%d\n",
                canciones[i].codigo,
                canciones[i].titulo,
                canciones[i].clasificacion,
                canciones[i].compositor,
                canciones[i].artista,
                canciones[i].duracion);
    }

    fclose(archivo);

    printf("Datos guardados correctamente.\n");
}

void cargarCanciones(Cancion canciones[], int *n)
{
    // La implementaremos más adelante.
    // Por ahora solo dejamos la función creada.

    *n = 0;
}