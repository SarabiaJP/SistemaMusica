#include <stdio.h>
#include <string.h>
#include "canciones.h"

void registrarCancion(Cancion canciones[], int *n)
{
    if (*n >= MAX_CANCIONES)
    {
        printf("\nLa biblioteca está llena.\n");
        return;
    }

    printf("\n=== REGISTRAR CANCION ===\n");

    printf("Codigo: ");
    scanf("%s", canciones[*n].codigo);

    printf("Titulo: ");
    scanf(" %[^\n]", canciones[*n].titulo);

    printf("Clasificacion: ");
    scanf(" %[^\n]", canciones[*n].clasificacion);

    printf("Compositor: ");
    scanf(" %[^\n]", canciones[*n].compositor);

    printf("Artista: ");
    scanf(" %[^\n]", canciones[*n].artista);

    printf("Duracion (segundos): ");
    scanf("%d", &canciones[*n].duracion);

    (*n)++;

    printf("\nCancion registrada correctamente.\n");
}

void listarCanciones(Cancion canciones[], int n)
{
    int i;

    if (n == 0)
    {
        printf("\nNo hay canciones registradas.\n");
        return;
    }

    printf("\n===== LISTA DE CANCIONES =====\n");

    for (i = 0; i < n; i++)
    {
        printf("\nCancion %d\n", i + 1);
        printf("Codigo: %s\n", canciones[i].codigo);
        printf("Titulo: %s\n", canciones[i].titulo);
        printf("Clasificacion: %s\n", canciones[i].clasificacion);
        printf("Compositor: %s\n", canciones[i].compositor);
        printf("Artista: %s\n", canciones[i].artista);
        printf("Duracion: %d segundos\n", canciones[i].duracion);
    }
}
void buscarCancion(Cancion canciones[], int n)
{
    char codigo[16];
    int i;
    int encontrado = 0;

    printf("\n=== BUSCAR CANCION ===\n");
    printf("Ingrese el codigo: ");
    scanf("%s", codigo);

    for(i = 0; i < n; i++)
    {
        if(strcmp(canciones[i].codigo, codigo) == 0)
        {
            printf("\nCodigo: %s\n", canciones[i].codigo);
            printf("Titulo: %s\n", canciones[i].titulo);
            printf("Clasificacion: %s\n", canciones[i].clasificacion);
            printf("Compositor: %s\n", canciones[i].compositor);
            printf("Artista: %s\n", canciones[i].artista);
            printf("Duracion: %d segundos\n", canciones[i].duracion);

            encontrado = 1;
            break;
        }
    }

    if(encontrado == 0)
    {
        printf("\nCancion no encontrada.\n");
    }
}

void actualizarCancion(Cancion canciones[], int n)
{
    printf("\nFuncion en desarrollo.\n");
}

void eliminarCancion(Cancion canciones[], int *n)
{
    printf("\nFuncion en desarrollo.\n");
}