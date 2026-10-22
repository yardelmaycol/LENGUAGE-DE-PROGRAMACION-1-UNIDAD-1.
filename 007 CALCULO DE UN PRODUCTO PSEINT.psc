Proceso CALCULO_IGV_PRODUCTO
    Definir precio, igv, total Como Real;

    Escribir "Ingrese el precio del producto sin IGV:";
    Leer precio;

    igv <- precio * 0.18;
    total <- precio + igv;

    Escribir "Precio del producto: S/ ", precio;
    Escribir "IGV (18%): S/ ", igv;
    Escribir "Precio total con IGV: S/ ", total;
FinProceso
