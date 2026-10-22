Proceso AREA_PERIMETRO_RECTANGULO
    Definir largo, ancho, area, perimetro Como Real;

    Escribir "Ingrese el largo del rectangulo:";
    Leer largo;

    Escribir "Ingrese el ancho del rectangulo:";
    Leer ancho;

    area <- largo * ancho;
    perimetro <- 2 * (largo + ancho);

    Escribir "El area del rectangulo es: ", area;
    Escribir "El perimetro del rectangulo es: ", perimetro;
FinProceso
