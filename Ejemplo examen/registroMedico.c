#include <stdio.h>
#include <stdlib.h>
#include "registroMedico.h"

void mostrarRegistro (stRegistroMedico nuevo)
{
    printf("\n--------------------------------");
    printf("\nID Registro: %i", nuevo.idRegistro);
    printf("\nID Paciente: %i", nuevo.idPaciente);
    printf("\nID Especialidad: %i", nuevo.idEspecialidadMedica);
    printf("\nNombre Paciente: %s", nuevo.nombrePaciente);
    printf("\nApellido Paciente: %s", nuevo.apellidoPaciente);
    printf("\nDiagnostico: %s", nuevo.diagnostico);
    printf("\nFecha atencion: %s", nuevo.fechaAtencion);
    printf("\nEspecialidad: %s", nuevo.especialidadMedica);
    printf("\nNombre doctor: %s", nuevo.nombreDoctor);
    printf("\nPrecio atencion: %f", nuevo.precioAtencion);

}

stRegistroMedico cargarRegistro ()
{
    stRegistroMedico nuevo;
    printf("\n--------------------------------");
    printf("\nID Registro: ");
    scanf("%i", &nuevo.idRegistro);
    printf("\nID Paciente: ");
    scanf("%i", &nuevo.idPaciente);
    printf("\nID Especialidad: ");
    scanf("%i", &nuevo.idEspecialidadMedica);
    printf("\nNombre Paciente: ");
    scanf("%s", &nuevo.nombrePaciente);
    printf("\nApellido Paciente: ");
    scanf("%s", &nuevo.apellidoPaciente);
    printf("\nDiagnostico: ");
    scanf("%s", &nuevo.diagnostico);
    printf("\nFecha atencion: ");
    scanf("%s", &nuevo.fechaAtencion);
    printf("\nEspecialidad: ");
    scanf("%s", &nuevo.especialidadMedica);
    printf("\nNombre doctor: ");
    scanf("%s", &nuevo.nombreDoctor);
    printf("\nPrecio atencion: ");
    getchar();
    scanf("%f", &nuevo.precioAtencion);

    return nuevo;
}


