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
    FILE *archivo;

    archivo = fopen("canciones.csv", "r");

    if (archivo == NULL)
    {
        *n = 0;
        return;
    }

    char linea[200];

    // Leer y descartar el encabezado
    fgets(linea, sizeof(linea), archivo);

    *n = 0;

    while (fscanf(archivo,
                  "%[^,],%[^,],%[^,],%[^,],%[^,],%d\n",
                  canciones[*n].codigo,
                  canciones[*n].titulo,
                  canciones[*n].clasificacion,
                  canciones[*n].compositor,
                  canciones[*n].artista,
                  &canciones[*n].duracion) == 6)
    {
        (*n)++;
    }

    fclose(archivo);
}