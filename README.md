# Proyecto-Informatico-1

## Consigna del TP1

Desarrollar un código y un esquema electrónico básico que haga una secuencia de luces con 3 leds RGB.

La secuencia es la siguiente: 
- prende el 1°led en color rojo. (De forma analógica)
- se apaga el 1° led y se prende el 2° led en color magenta(de forma digital)
- se paga el 2° led y se prende el 3° led en color cian(De forma analógica y tenue)
- se paga el 3° led y se prende el 1° led  devuelta y así infinitamente.

- ## Consigna del TP2

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

## Consigna del examen

Realizar un diagrama y codificacion en arduino para lograr que mediante 1 LED RGB se prendan de tal manera que muestre un color configurable dinamicamente por el usuario, a travez de 3 resistencias variables. ( cada resistencia le permite a usuario cambiar una de las gamas de color del led RBG)
Se pide ademas que mediante un boton (siempre que este precionando) muestre el color, en el caso de que no este apretado no se mostrara ningun color

Mostrar por consola la combinación de colores en todo momento con el siguiente formato:

(R: valor ; G: valor ; V: valor)
