#include<stdio.h>
void menu();
void marcaAgua();

main()
{
    int opc, alum, clase, x, calif1[alum], calif2[alum];
    int falta[alum], Tcalif=0, Apro=0, Repro=0, Exe=0;
    int ord=0, Extra=0, Titu=0, Recur=0;
    char nombre[alum][20], sit[alum][10], sitFalta[alum][20];
    
    printf("Total de alumnos: ");
    scanf("%d",&alum);
    printf("Total de clases: ");
    scanf("%d",&clase);
    system("pause");
    system("cls");
    
    do{
        menu();
        scanf("%d",&opc);
        system("pause");
        system("cls");
        
        switch(opc)
    case 1:
        marcaAgua();
        for (x=0; x<alum ; x++) {
            printf("Nombre de alumno: ");
            scanf("%s",&nombre[x]);
            printf("Primera calificacion: ");
            scanf("%d",&calif1[x]);
            Tcalif+=calif1[x];
            printf("Segunda calificacion: ");
            scanf("%d",&calif2[x]);
            Tcalif+=calif2[x];
            printf("Numero de faltas: ");
            scanf("%d",&falta[x]);
            
            if(((calif1+calif2)/2)>=8)
            {
                Exe++;
                sit[x]='Exentado';
            }
            else
            {
                Ord++;
                sit[x]='Ordinario';
            }
            
            if(((falta[x]*100)/clase)<20)
                sitFalta[x]'Sin problemas';
            else
            {
                if((((falta[x]*100)/clase)>=20)&&(((falta[x]*100)/clase)<40))
                {
                    Extra++;
                    sitFalta[x]='Extraordinario';
                }
                else
                {
                  if((((falta[x]*100)/clase)>=40)&&(((falta[x]*100)/clase)<60))
                  {
                      Titu++;
                      sitFalta[x]='Titulo suficiencia';
                  }
                    else
                    {
                        if((((falta[x]*100)/clase)>=60)&&(((falta[x]*100)/clase)==100))
                        {
                            Recur++;
                            sitFalta[x]='Recurse';
                        }
                    }
                }
                   
            }
        }
        break;
        
    case 2:
        marcaAgua();
        for(x=0; x<alum; x++)
        {
            printf("%d.- Alumno: %s",x+1,nombre[x]);
            printf("Promedio: %.2f",(calif1+calif2)/2);
            printf("Situacion: %s",sit[x]);
            printf("Situacion por faltas: %s",sitFalta[x]);
        }
        break;
        
    case 3:
        marcaAgua();
        printf("Total de alumnos: %d",alum);
        printf("Total de clases: %d",clase);
        printf("Promedio general del grupo: %.2f",TCalif/clase);
        printf("Exentados: %d",Exe);
        printf("Ordinario: %d",Ord);
        printf("Extraordinario: %d",Extra);
        printf("Titulo de suficiencia: %d",Titu);
        printf("Recurse: %d",Recur);
        system("pause");
        break;
        
    default:
        marcaAgua();
        printf("Esa opcion no es valida.");
        break;
        
    }while(opc!=4)
}

void menu()
{
    printf("¿Que desea hacer? \n\n");
    printf("1.- Capturar alumnos.");
    printf("2.- Imprimir lista de alumnos.");
    printf("3.- Hoja estadistica.");
    printf("4.- Salir.");
}

void marcaAgua()
{
    printf("Control Escolar de alumnos UAEM");
    printf("Hecho por: Erick Perez.");
}