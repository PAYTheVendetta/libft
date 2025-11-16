📚 Libft – Biblioteca personalizada en C

Libft es una biblioteca en C desarrollada como parte del currículo de 42, cuyo objetivo es recrear funciones estándar de las librerías <string.h>, <ctype.h> y otras utilidades básicas del lenguaje. Además, incluye funciones propias que estoy desarrollando e implementando para ampliar sus capacidades y adaptarla a mis necesidades en futuros proyectos.

Este proyecto permite comprender a fondo cómo funcionan internamente muchas funciones fundamentales en C, mejorar la gestión de memoria y ofrecer una base sólida para aplicaciones más complejas.

🔧 Contenido de la biblioteca

La biblioteca incluye:

Reimplementaciones de funciones estándar:

Manejo de memoria: memset, memcpy, memmove, calloc, etc.

Manejo de cadenas: strlen, strchr, strnstr, strlcpy, strlcat, etc.

Funciones de caracteres: isalpha, isdigit, toupper, tolower, etc.

Funciones adicionales y utilidades propias:

Manipulación avanzada de strings: substr, strjoin, split, itoa, etc.

Funciones de salida: putchar_fd, putstr_fd, putendl_fd, etc.

Funciones personales en desarrollo, como nuevas herramientas para el manejo de cadenas, memoria y estructuras de datos.

Módulo de listas enlazadas (t_list):

Creación, modificación y recorrido de listas.

🛠️ Compilación

Para generar la biblioteca:

make


Esto creará el archivo libft.a listo para enlazarlo en tus proyectos C.

📦 Uso

Incluye la cabecera:

#include "libft.h"


Y compila enlazando la librería:

gcc mi_programa.c -L. -lft

🚀 Estado del proyecto

✔️ Funciones estándar completadas

🔧 Añadiendo y mejorando funciones propias

🧪 Testeando nuevas implementaciones

👨‍💻 Autor

Proyecto desarrollado como parte del programa 42.
