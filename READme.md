
# Labo Refactorización

## #1 Clase Perezosa
* Líneas: 9-16
* Code Smell: Clase perezosa-> una clase que hace muy poco.
* Cómo se refactorizo?: En este caso la clase solo imprime líneas así que se eliminó la clase Impreso y se llevo el método "ImprimirVacio" a la clase Operacion y se le cambio el nombre por "ImprimirSeparador"
* Líneas Refactorizadas: 51-54 en operacion.h

## #2 Identificadores excesivamente largos
* Líneas: 134, 139, 146
* Code Smell: Identificadores excesivamente largos-> en particular, el uso de convenciones de nombres para proporcionar desambiguación que debería estar implícita en la arquitectura de software.
* Cómo se refactorizo?: Se renombro "ImprimeLineasDeEspacioParaSepararParrafos" a simplemente "LineaSeparadora"
* Líneas Refactorizadas: 12, 17, 23 en  main.cpp

## #3 Identificadores excesivamente cortos
* Líneas: 117, 133, 149, 151, 153, 154, 157, 160, 163, 166, 170.
* Code Smell: Identificadores excesivamente cortos-> el nombre de una variable debe reflejar su función, a menos que sea obvio.
* Cómo se refactorizo?: El método "r" al no ser muy descriptivo se cambió por el nombre de "Resultado", y las variables "o,x,y" se cambiaron por "opcion, num1, num2"
* Líneas Refactorizadas: 58 en operacion.h y 11, 26, 28, 30, 31, 34, 37, 40, 43, 47 en main.cpp

## #4 Codigo Duplicado
* Líneas: 140, 157, 160, 163, 166
* Code Smell: Codigo Duplicado-> existe código idéntico o muy similar en más de una ubicación.
* Cómo se refactorizo?: la línea 140 fue eliminada, las líneas 157,160,163,166 fueron refactorizadas con la creacion de un método "ImprimirResultado" en la clase operacion.h
* Líneas Refactorizadas: 34, 37, 40, 43 en main.cpp

## #5 Envidia de caracteristicas
* Líneas: 18 clase (RealizarOperacion), 84 metodo (ObtenerResultado)
* Code Smell: Envidia de caracteristicas-> una clase que usa excesivamente métodos de otra clase.
* Cómo se refactorizo?: Se elimino la clase RealizarOperacion y se adecuaron los métodos para que tengan un mismo funcionamiento en el metodo ObtenerResultado de la clase Operacion. 
* Líneas Refactorizadas: 33, 36, 39, 42 en operacion.h