#ifndef REGISTROMEDICO_H_INCLUDED
#define REGISTROMEDICO_H_INCLUDED
typedef struct{
    int idRegistro;
    int idPaciente;
    int idEspecialidadMedica;
    char nombrePaciente[30];
    char apellidoPaciente[30];
    char diagnostico[100];
    char fechaAtencion[11];   /// formato: AAAA-mm-DD
    char especialidadMedica[30];
    char nombreDoctor[30];
    float precioAtencion;
}stRegistroMedico;


void mostrarRegistro (stRegistroMedico dato);
stRegistroMedico cargarRegistro ();


#endif // REGISTROMEDICO_H_INCLUDED
