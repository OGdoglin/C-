/*
* TIPOS DE DATOS
*   ·Los tipos de datos en C++ se clasifican en:
*   · Tipos Primitivos y Tipos derivados.
* La razón para ofrecer más de un tipo de datos
* es permitir al programador aprovechar las 
* caracteristicas del hardware.
*/

// TIPOS PRIMITIVOS
/*
    TIPOS ENTEROS       
    __________________________________________
    char (Los valores 0 a 127 se corresponde a los caracteres ASCII.) ==> Rango -128 a 127.
    short       ==> Rango -32768 y +32767 (16 bits de longitud).
    int         ==> Rango -2147483648 a +2147483647 (32 bits de longitud).
    long        ==> Rango -9223372036854775808 a +9223372036854775807.
        · long: Depende de la implementación puede ser de 32 bits o 64 bits.   
    

    TIPOS REALES
    __________________________________________
    float       ==> Almacenan valores con una precisión aproximada de 6 dígitos. (32 bits de longitud)
        · Har que añadir al final la letra 'f' o 'F',
        de lo contrario será considerado de tipo double.
    double      ==> Almacenan valores con una precisión aproximada de 15 dígitos. (64 bits de longitud)
    long double: El tipo long double depende de la implementación C++ utilizada puede ser de 8 bytes 
    de longitud, igual que un double, 0 de 12 bytes.

    TIPO CARACTER AMPLIADO wchar_t
    __________________________________________
    · Permite manipular el juego caracteres Unicode
    · (16 bits \\ 2 bytes)      ==> Rango 0 a 65535

    TIPO bool
    __________________________________________
    · Se utiliza para indicar si el resultado es
    · verdadero o falso.
    true  ==> Toma el 1.
    false == Toma el 0.
*/