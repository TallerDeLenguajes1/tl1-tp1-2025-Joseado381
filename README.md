[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)


### *RESPUESTAS DEL TO1 PUNTO 2*

_¿Por qué es conveniente incluirlo?_

-Evita archivos innecesarios en el repositorio, como archivos generados automáticamente, logs o configuraciones locales no deberían subirse a Git del proyecto.

-Mejora el rendimiento del repositorio excluyendo archivos grandes o innecesarios evitara que Git maneje contenido que no aporta al desarrollo.

-Protege información sensible como credenciales, tokens de API o configuraciones personales.

_¿Cuándo se debe hacer?_

Desde el inicio del proyecto, para evitar que archivos innecesarios se suban al repositorio. 
También se debe modificar si se agregan nuevas herramientas o configuraciones que generan archivos temporales.

_¿Cómo configuraría el archivo .gitignore?_

Para configurar un .gitignore, se crea un archivo llamado .gitignore en la raíz de tu proyecto y dentro escribes las reglas 
que le dicen a Git qué archivos o carpetas debe ignorar.


3. g) Si resolvió correctamente los apartados 2 y 3 del punto anterior notará
que el resultado es el mismo. ¿a qué se debe? ¿Qué obtiene en el
punto 4? ¿Es igual a los anteriores? ¿Por qué?

¿A qué se debe? 
Se debe a que la variable puntero guarda la direccion de memoria de la variable al que apunta
Por lo que imprimir puntero (%p) y &variable (%p) da el mismo valor.

¿Qué obtiene en el punto 4?
En el punto 4 se obtiene la dirección de memoria del puntero. 
Es decir, &puntero devuelve la dirección donde está almacenado el puntero en la memoria.

¿Es igual a los anteriores? ¿Por qué?
No, la dirección de &puntero es diferente de puntero y &variable. 
Esto se debe a que el puntero es una variable que ocupa su propio espacio en la memoria. 
Aunque puntero almacena la dirección de variable, el puntero mismo tiene una ubicación diferente en la memoria del programa.

