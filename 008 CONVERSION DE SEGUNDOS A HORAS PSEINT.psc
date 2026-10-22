Proceso CONVERSION_SEGUNDOS_HORAS
    Definir segundos, horas, minutos, segundosRestantes Como Entero;

    Escribir "Ingrese la cantidad de segundos:";
    Leer segundos;

    horas <- Trunc(segundos / 3600);
    minutos <- Trunc((segundos MOD 3600) / 60);
    segundosRestantes <- segundos MOD 60;

    Escribir segundos, " segundos equivalen a:";
    Escribir horas, " horas, ", minutos, " minutos y ";
    Escribir segundosRestantes, " segundos.";
FinProceso
