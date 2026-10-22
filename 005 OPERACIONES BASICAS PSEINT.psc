Proceso OPERACIONES_BASICAS
    Definir num1, num2, suma, resta, multiplicacion Como Real;
    Definir division Como Real;

    Escribir "Ingrese el primer numero:";
    Leer num1;

    Escribir "Ingrese el segundo numero:";
    Leer num2;

    suma <- num1 + num2;
    resta <- num1 - num2;
    multiplicacion <- num1 * num2;

    Escribir "La suma es: ", suma;
    Escribir "La resta es: ", resta;
    Escribir "La multiplicacion es: ", multiplicacion;

    Si num2 <> 0 Entonces
        division <- num1 / num2;
        Escribir "La division es: ", division;
    SiNo
        Escribir "No se puede dividir entre cero.";
    FinSi
FinProceso
