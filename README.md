# Proyecto-Informatico-1

## Guia de ejercicios 1
Guía para practicar el contenido visto de arduino, realizado de circuito, lectura y escritura analogica y digital, combinado, uso de condicional, variables y la función Map.

## Consigna del TP1
Desarrollar un código y un esquema electrónico básico que haga una secuencia de luces con 3 leds RGB.

La secuencia es la siguiente: 
- prende el 1°led en color rojo. (De forma analógica)
- se apaga el 1° led y se prende el 2° led en color magenta(de forma digital)
- se paga el 2° led y se prende el 3° led en color cian(De forma analógica y tenue)
- se paga el 3° led y se prende el 1° led  devuelta y así infinitamente.

## Consigna del TP2
Usando el ejercicio del TP1 como base, agregarle una resistencia variable y lograr cambiar la velocidad en que los leds prenden.
Ademas agregar un pulsador y  cuando se aprieta, los leds ya no prenden y si se suelta, los leds prenden y siguen con su juego de luces

## Consigna del TP3
Colocar un pulsador, 3 potenciómetro y 1 LED RGB. 
Cuando se pulsa una vez el botón, se ejecuta un tiempo de espera que dure 10 segundos en donde se le da tiempo al usuario a mover cada potenciómetro al punto que quiera y luego el LED RGB cambie su color en cada uno de sus espectros de luz (rojo, verde, azul) y quede prendido en esa combinación de colores hasta que se vuelva a presionar el pulsador y le deje usuario devuelta seleccionar otra combinación de colores.
Cuando se toca el botón mostrar solo 1 vez el mensaje:
     - "Tiene 10 s para configurar el color del led...."
Cuando ya se acabe el tiempo y se muestre el color del led mostrar una sola ves el mensaje:
     -"El led esta usando esta configuración de colores RGB:   ( xx; xx ; xx )"
Siendo cada xx los valores de 0 a 255 de cada color  ( rojo , verde , azul )

## Consigna del TP4
-Leer datos que nos brinda un sensor de temperatura(TPM36) y uno de luz ambiental(LDR).
-Mostrar esos 2 datos por el monitor serial con el siguiente formato:
"El nivel de luz actual es:"  VALOR " y la temperatura actual:" VALOR  "ºc"   c/u en una linea distinta                                

-Hacer prender un led RGB según la temperatura que mida el sensor:
                -rojo: si es más de 90°c
                -azul: si es menos de 18°c
                -verde: si está entre 18ºc y 90ºc
 -Solo se debera prender el led como se indica arriba, siempre y cuando no halla luz ambiental.

## Consigna del TP5
Generar con un buzzer y el arduino una melodía personalizada autentica de cada uno, sin importar si el linda o entendible.  (no descargar melodías).

La misma puede ser un fragmento corto de algún tema que les guste (recomendable para no tener que rehacer el TP porque tiene continuidad en otro TP).

La melodía debe de ser mínimo de 40 notas y la misma debe repetirse infinitamente (termina, se espera unos segundos y vuelve a empezar).

Es obligatorio el uso de vectores.

## Consigna del TP6
Tratar de pensar alguna manera para que un led RGB muestre toda la combinaciones de colores existentes en la tonalidades de RGB que se escribe de la siguiente forma:

Formato de color RGB ( 255 ; 255 ; 255 ), donde cada parte representa los byte de cada columna de color. En total un led RGB puede producir aprox 16.000.000 de colores.

## Consigna del TP7
Generar con un display/visualizador de 7 segmentos, un switch (de palanquitas) y un arduino la muestra de  los siguientes datos:

Datos a mostrar: 0-1-2-3-4-5-6-7-8-9-A-C-E-F-H-J

Trabajar todo con vectores, el uso de una sola llamada al pinMode para configurar cada conjunto de led's y asimismo para mostrar cualquier dato de la secuencia de datos a mostrar.

Utilizar el ingreso de datos por medio de switchs (palanquitas, 4 lecturas digitales) para una entrada binada de datos correspondiente a la siguiente tabla, la cual mostrara el datos en el display dependiendo el switch binario.


Tabla de equivalencias:
Código en binario     Carácter a Mostrar
          0000                              0
          0001                              1
          0010                              2
          0011                              3
          0100                              4
          0101                              5
          0110                              6
          0111                              7
          1000                              8
          1001                              9
          1010                              A
          1011                              B
          1100                              C
          1101                              D
          1110                              E
          1111                              F

## Consigna TP8
Re armar el TP 5 con la siguiente modificación:

Realizar una version Lirics con una pantalla LCD 16x2 pasando parte de la letra de la cancion mienstras esta sonando.

sI EL TEMA ELEGIDO NO DISOPONE DE LETRA,  EN EL LYRICS PONER NOTAS MUSICALES A COMO CORRESPONDA

## Consigna TP9
Se desea realizar un  pequeño juego en el cual nos permita lanzar 2 dado digitales (usar display de 7 segmentos), el cual tengamos un boton que cuando lo toquemos UNA SOLA VEZ (no mantener apretado) empezara a calcular 2 numero aleatorios entre 1 y 6  y los mostrara en los 2 display correspondientes.

En el caso de que que la suma de ambos dados (ambos numeros aleatorios) sumen 7, el jugador habrá ganado, y habrá que indicárselo mediante una alarma sonora ( buzzer - no usar la función Tone()  ) 

Si es posible, realizar una animacion rapida en la muestra de los numeros de la siguiente manera:
antes de mostrar el numero final,  mostrar varios numeros al azar con un bajo delay, esto dara la imprecion de que los dados se estan moviendo antes de mostrar el numero final que se calculo con el random.
Para usar el pin 0 y 1 NO SE PUEDE TENER LA CONSOLS Serial.begin() y Serial.print() activas en el codigo
El boton se puede leer de forma analogica por los pine A0-A5
Se puede (no convencionalmente) usar los pines A0-A5 como Salidas (OUTPUT analogWrite)

## Consigna TP10
Utilizando un sensor de movimiento para identificar si hay una persona acercándose a una puerta ( la puesta es doble )
Utilizar un par de servo-motores para abrirle ambas puertas a la persona.
Utilizar otro sensor de movimiento del otro lado de la puerta para cerrar la puerta cuento la persona termino de cruzarla.
Además revisar todo el tiempo la si hay poca visibilidad (esta oscuro) en ese caso prender un farol de luz led de 24v (en la puerta de salida)

Utilizar funciones/procedimientos  creadas por ustedes para la detección del movimiento, detección de luz, prendido de luminaria, para abrir y cerrar las puertas.

Mantener el ciclo void loop() lo mas corto de codificación utilizando funciones
Todas las funciones/procedimientos deben recibir parámetros de entrada (lo que sientan mas apropiado)

#Guia Ejercicios 2
Guía para practicar el contenido visto de arduino, realizado de circuito, manejo de ciclos, vectores,  algunos sensores, lectura de datos por consola serial y funciones.

## Consigna del examen
Realizar un diagrama y codificacion en arduino para lograr que mediante 1 LED RGB se prendan de tal manera que muestre un color configurable dinamicamente por el usuario, a travez de 3 resistencias variables. ( cada resistencia le permite a usuario cambiar una de las gamas de color del led RBG)
Se pide ademas que mediante un boton (siempre que este precionando) muestre el color, en el caso de que no este apretado no se mostrara ningun color

Mostrar por consola la combinación de colores en todo momento con el siguiente formato:

(R: valor ; G: valor ; V: valor)
