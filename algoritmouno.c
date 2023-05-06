#include <stdio.h> 


int main() { // Inicio del programa

//SE DECLARAN TODAS LAS VARIABLES 
int sexo,CantM = 0,k,Npacientes,cedula, peso, edad, unidad, Cpacientes,Dermatologia = 0,Cardiologia = 0,Traumatologia = 0,Pediatria = 0; // variables declaradas
float CantF=0,pesoM= 0,pesoF= 0,sumaPesos= 0,sumaPesosF= 0,promedioPesoM= 0,promedioPesoF= 0,edadM=0,sumaEdad= 0,promedioEdadM= 0,sumaEdadF= 0,edadF=0,promedioEdadF= 0;

//PREGUNTAR CUANTOS PACIENTES ASISTIRAN
printf("¡Cuantos pacientes van a ir a consulta?\n"); 
 ti(" %d", &Npacientes); // guardar la respuesta en la variable


//SE REPITE LAS PREGUNTAS A TODOS LOS PACIENTES SEGUN LA VARIABLE Npacientes
for ( k=0; k<Npacientes; k++)
{ 

    printf("\n-------Coloca los datos del paciente numero %i",k);

    printf("\nCedula: "); // Solicitamos la cédula del paciente
    scanf("%d", &cedula); // Leemos la cédula ingresada por el usuario

//SE CALCULA LA CANTIDAD DE HOMBRES Y MUJERES
    printf("Sexo: selecciona 1 (Masculino) / 2 (Femenino): "); // Solicitamos el sexo del paciente
    scanf(" %i", &sexo); // Leemos el sexo ingresado por el usuario


    switch (sexo)
    {
    case 1:
    CantM++;

//PESO DE LOS HOMBRES
    
    printf("Ingrese el peso de hombre: "); // Solicitamos el peso del paciente
    scanf(" %f", &pesoM); // Leemos el peso ingresado por el usuario
    sumaPesos+=pesoM;
    

//EDAD DE LOS HOMBRES
    printf("Ingrese el su edad: "); // Solicitamosla edad del paciente
    scanf(" %f", &edadM); // Leemos el peso ingresado por el usuario
    sumaEdad+=edadM;
    

    break;

    case 2:
    CantF++;
//PESO DE LAS MUJERES 
    printf("Ingrese el peso de la mujer: "); // Solicitamos el peso del paciente
    scanf(" %f", &pesoF); // Leemos el peso ingresado por el usuario
    sumaPesosF+=pesoF;

//EDAD DE LA MUJERES
    printf("Ingrese el su edad: "); // Solicitamosla edad del paciente
    scanf(" %f", &edadF); // Leemos el peso ingresado por el usuario
    sumaEdadF+=edadF;
    

    break;
    default:
    printf("Elegir un numero 1-2");
    break;
}

//AQUI SE PIDEN LOS DATOS DE DONDE ASISTIERON SEGUN SUS ENFERMEDADES A LOS USUARIOS
    printf("Unidad a la que asistio de acuerdo al tipo de enfermedad:\n(seleciona segun el numero 1,2,3,4)\n"); // Solicitamos la unidad a la que asistió el paciente
    printf("1-Dermatologia\n2-Cardiologia\n3-Traumatologia\n4-Pediatria\n"); // Mostramos las opciones disponibles
    scanf(" %d", &unidad); // Leemos la opción ingresada por el usuario

//SE CALCULA CUANTAS VISITAS TUBIERON LAS UNIDADES MEDICAS
    switch (unidad)
    {
    case 1:
     Dermatologia++;
    break;
    case 2:
    Cardiologia++;
    break;
    case 3:
    Traumatologia++;
    break;
    case 4:
    Pediatria++;
    break;
    default:
    printf("Tipo de enfermedad inválido. Intente de nuevo.\n");
    break;
    }
}

printf("\n\n\n--------------------------------------------");

//Porcentajes de mujeres y hombres que asistieron
    printf("\n\n----------- PORCENTAJE DE SISTENCIA -----------");

    float porcentajeM = CantF / k * 100; //porcentaje de hombres
    printf("\nEl porcentaje de mujeres que asistieron a consulta: %.2f%%", porcentajeM);
    
    float porcentajeH = 100 - (CantF / k*100); // porcentaje de mujeres
    printf("\nEl porcentaje de los hombres que asistieron a consulta es: %.2f%%", porcentajeH);
    

//Aqui se muestra el promedio de peso de lOS HOMBRES y mujeres
    printf("\n\n----------- PROMEDIO DE PESOS -----------");
    
    promedioPesoM=sumaPesos/CantM;//se calcula el promedio de los hombres
    printf("\nEl peso del hombre promedio que asistio es:  %.1f", promedioPesoM);
    printf("Kg");

    promedioPesoF=sumaPesosF/CantF;//se calcula el promedio de las mujeres
    printf("\nEl peso de la mujer promedio que asistio es:  %.1f", promedioPesoF);
    printf("Kg");
   
//Aqui se muestra el promedio de las edades
    printf("\n\n----------- PROMEDIO DE EDADES -----------");
    promedioEdadM=sumaEdad/CantM;//se calcula el promedio de las  edades de los hombres
    printf("\nEl promedio de la edad de los hombres es: %.1f", promedioEdadM);

    promedioEdadF=sumaEdadF/CantF;//se calcula el promedio de las  edades de las mujeres
    printf("\nEl promedio de la edad de las mujeres es: %.1f", promedioEdadF);

//AQUI SE NUESTRA EL PORCENTAGE DE LAS UNIDADES VISITADAS
    printf("\n\n----------- PORCENTAGE DE PACIENTES POR UNIDAD -----------");
    printf("\nDermatologia: %.2f%%", (float)Dermatologia/Npacientes*100);
    printf("\nCardiologia: %.2f%%", (float)Cardiologia/Npacientes*100);
    printf("\nTraumatologia: %.2f%%", (float)Traumatologia/Npacientes*100);
    printf("\nPediatria: %.2f%%", (float)Pediatria/Npacientes*100);

//AQUI DICE QUIENES QUE GENERO ASISTIO MAS 
if (CantM>CantF)
{
    printf("\n\n\nLos hombres asistieron mas que las mujeres");
} else {
    printf("\n\n\nLas mujeres asistieron mas que los hombres");
}

 
printf("\n\n\n\n---------------------------------------------------\n\n\n\n");


    return 0; // Finalizamos el programa
}