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
    char codigo[16];
    int i;
    int encontrado = 0;

    printf("\n=== ACTUALIZAR CANCION ===\n");
    printf("Ingrese el codigo: ");
    scanf("%s", codigo);

    for(i = 0; i < n; i++)
    {
        if(strcmp(canciones[i].codigo, codigo) == 0)
        {
            printf("Nuevo titulo: ");
            scanf(" %[^\n]", canciones[i].titulo);

            printf("Nueva clasificacion: ");
            scanf(" %[^\n]", canciones[i].clasificacion);

            printf("Nuevo compositor: ");
            scanf(" %[^\n]", canciones[i].compositor);

            printf("Nuevo artista: ");
            scanf(" %[^\n]", canciones[i].artista);

            printf("Nueva duracion: ");
            scanf("%d", &canciones[i].duracion);

            printf("\nCancion actualizada correctamente.\n");
            encontrado = 1;
            break;
        }
    }

    if(encontrado == 0)
    {
        printf("\nCancion no encontrada.\n");
    }
}

void eliminarCancion(Cancion canciones[], int *n)
{
    char codigo[16];
    int i, j;
    int encontrado = 0;

    printf("\n=== ELIMINAR CANCION ===\n");
    printf("Ingrese el codigo: ");
    scanf("%s", codigo);

    for(i = 0; i < *n; i++)
    {
        if(strcmp(canciones[i].codigo, codigo) == 0)
        {
            for(j = i; j < *n - 1; j++)
            {
                canciones[j] = canciones[j + 1];
            }

            (*n)--;

            printf("\nCancion eliminada correctamente.\n");
            encontrado = 1;
            break;
        }
    }

    if(encontrado == 0)
    {
        printf("\nCancion no encontrada.\n");
    }
}
    void mostrarDuracion(Cancion canciones[], int n)
    {
    char codigo[16];
    int i;
    int encontrado = 0;
    
    printf("\n=== MOSTRAR DURACION ===\n");
    printf("Ingrese el codigo: ");
    scanf("%s", codigo);

    for(i = 0; i < n; i++)
    {
        if(strcmp(canciones[i].codigo, codigo) == 0)
        {
            printf("\nTitulo: %s\n", canciones[i].titulo);
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


void mostrarTiempoTotal(Cancion canciones[], int n) {
    if (n == 0) {
        printf("No hay canciones registradas.\n");
        return;
    }
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += canciones[i].duracion;
    }
    printf("Tiempo total de reproducción: %d segundos (%d min y %d seg)\n", total, total / 60, total % 60);
}

void mostrarCancionMasLarga(Cancion canciones[], int n) {
    if (n == 0) {
        printf("No hay canciones registradas.\n");
        return;
    }
    int indiceMax = 0;
    for (int i = 1; i < n; i++) {
        if (canciones[i].duracion > canciones[indiceMax].duracion) {
            indiceMax = i;
        }
    }
    printf("Canción más larga: %s - %s (%d segundos)\n", canciones[indiceMax].titulo, canciones[indiceMax].artista, canciones[indiceMax].duracion);
}

void mostrarCancionMasCorta(Cancion canciones[], int n) {
    if (n == 0) {
        printf("No hay canciones registradas.\n");
        return;
    }
    int indiceMin = 0;
    for (int i = 1; i < n; i++) {
        if (canciones[i].duracion < canciones[indiceMin].duracion) {
            indiceMin = i;
        }
    }
    printf("Canción más corta: %s - %s (%d segundos)\n", canciones[indiceMin].titulo, canciones[indiceMin].artista, canciones[indiceMin].duracion);
}

void mostrarDuracionPromedio(Cancion canciones[], int n) {
    if (n == 0) {
        printf("No hay canciones registradas.\n");
        return;
    }
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += canciones[i].duracion;
    }
    double promedio = (double)total / n;
    printf("Duración promedio: %.2f segundos\n", promedio);
}
void cantidadPorClasificacion(Cancion canciones[], int n) {
    if (n == 0) {
        printf("No hay canciones registradas.\n");
        return;
    }

    char unicas[MAX_CANCIONES][30];
    int conteos[MAX_CANCIONES] = {0};
    int totalUnicas = 0;

    for (int i = 0; i < n; i++) {
        int encontrado = -1;
        for (int j = 0; j < totalUnicas; j++) {
            if (strcmp(canciones[i].clasificacion, unicas[j]) == 0) {
                encontrado = j;
                break;
            }
        }
        if (encontrado != -1) {
            conteos[encontrado]++;
        } else {
            strcpy(unicas[totalUnicas], canciones[i].clasificacion);
            conteos[totalUnicas] = 1;
            totalUnicas++;
        }
    }

    printf("\n--- Cantidad de canciones por Clasificación ---\n");
    for (int i = 0; i < totalUnicas; i++) {
        printf("%s: %d canción(es)\n", unicas[i], conteos[i]);
    }
}

void clasificacionMasCanciones(Cancion canciones[], int n) {
    if (n == 0) {
        printf("No hay canciones registradas.\n");
        return;
    }

    char unicas[MAX_CANCIONES][30];
    int conteos[MAX_CANCIONES] = {0};
    int totalUnicas = 0;

    for (int i = 0; i < n; i++) {
        int encontrado = -1;
        for (int j = 0; j < totalUnicas; j++) {
            if (strcmp(canciones[i].clasificacion, unicas[j]) == 0) {
                encontrado = j;
                break;
            }
        }
        if (encontrado != -1) {
            conteos[encontrado]++;
        } else {
            strcpy(unicas[totalUnicas], canciones[i].clasificacion);
            conteos[totalUnicas] = 1;
            totalUnicas++;
        }
    }

    int indiceMax = 0;
    for (int i = 1; i < totalUnicas; i++) {
        if (conteos[i] > conteos[indiceMax]) {
            indiceMax = i;
        }
    }
    printf("Clasificación con más canciones: %s (%d canciones)\n", unicas[indiceMax], conteos[indiceMax]);
}

void tiempoTotalPorClasificacion(Cancion canciones[], int n) {
    if (n == 0) {
        printf("No hay canciones registradas.\n");
        return;
    }

    char unicas[MAX_CANCIONES][30];
    int tiempos[MAX_CANCIONES] = {0};
    int totalUnicas = 0;

    for (int i = 0; i < n; i++) {
        int encontrado = -1;
        for (int j = 0; j < totalUnicas; j++) {
            if (strcmp(canciones[i].clasificacion, unicas[j]) == 0) {
                encontrado = j;
                break;
            }
        }
        if (encontrado != -1) {
            tiempos[encontrado] += canciones[i].duracion;
        } else {
            strcpy(unicas[totalUnicas], canciones[i].clasificacion);
            tiempos[totalUnicas] = canciones[i].duracion;
            totalUnicas++;
        }
    }

    printf("\n--- Tiempo total por Clasificación ---\n");
    for (int i = 0; i < totalUnicas; i++) {
        printf("%s: %d segundos\n", unicas[i], tiempos[i]);
    }
}