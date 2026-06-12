#include <stdio.h>
#include <stdlib.h>
#include "registroMedico.h"
int main()
{
    //cargarDatoAlArchivo();
    ///Este es un cambio desde la compu de Emma
    ///Esto es un cambio desde la compu de Lucre


    ///Cambio desde Lucre para conflicto
    mostrarArchivo();
}
void cargarDatoAlArchivo ()
{
    stRegistroMedico aux;
    FILE * fp  = fopen("registroMedico.dat","ab");

    if(fp != NULL)
    {
        aux = cargarRegistro();
        fwrite(&aux,sizeof(stRegistroMedico),1, fp);
        fclose(fp);
    }
}
void mostrarArchivo ()
{
    stRegistroMedico aux;
    FILE * fp  = fopen("registroMedico.dat","rb");

    if(fp != NULL)
    {
        while (fread(&aux,sizeof(stRegistroMedico),1, fp)>0 )
        {
            mostrarRegistro(aux);
        }
        fclose(fp);
    }
}































