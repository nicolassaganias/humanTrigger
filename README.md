# humanCh
Detector de contacto humano. Cuando dos personas se tocan, un sonido se reproduce.
Usamos nuestros cuerpos como una resistencia más en un circuito que está abierto si no tocamos a nadie y que se cierra cuando
lo hacemos.

La data de cómo hacer la conexión y más detalles acerca de cómo funciona electrónicamente el circuito la saqué de este thread
que recomiendo chusmeen: 

https://electronics.stackexchange.com/questions/113574/understanding-a-circuit-for-reading-current-passing-through-human-bodies/113577

Para el montaje:

Ver el diagrama "diagramaJacks".

De cada salida plug de la caja sale un cable en Y. De un lado un plug mono o TS (J1) y del otro 2 mono o ts (J2 y J3). 
Conectamos la malla del J1 a la malla Y al centro de J2. Conectamos centro de J1 a malla Y centro de J3. Las salidas de la caja
es decir, las hembras, son todas mono (TS). De aquí, nos basaremos en el diagrama "humanTriggerElectroniks" en donde, el centro
de la ficha hembra sería "touch 1" y la malla, "touch 2". Hacemos ese mismo circuito para cada una de las entradas analógicas
de Arduino que vayamos a utilizar. En este caso del A0 al A6.  

Luego toca conectar el Arduino al reproductor de audio. Estamos usando un WavTrigger de Sparkfun. Si van a utilizar otro
deben asegurarse que sea polifónico es decir, que pueda reproducir más de un sample o sonido a la vez sino nunca podrían
sonar digamos el bombo y el platillo juntos. Vamos de las salidas 7 a la 13 del Arduino a T1 al T7 del WavTrigger.

El WavTrigger lleva una tarjeta microSD para leer los samples. En esta web pueden ver los requisitos de la tarjeta, formatos,
librerías, etc. https://www.sparkfun.com/products/13660. Este reproductor tiene salida minijack integrada, como verán en el
montaje solo la extendi hasta el chasis, así como las entradas de power tanto del Arduino como del trigger.


