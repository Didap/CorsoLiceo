#include <stdio.h>
//app gestionale libro
int main()
{
    
    int scelta, scelta2, scelta3, scelta4;
    //gestire meglio le caratteristiche del libro
    char libro1[20]="piccoloprincipe";
    char libro2[20]="manualec";
    char libro3[20]="doriangray";
    int idlibro1=0001;//codice univoco libro
    int idlibro2=0002;
    int idlibro3=0003;
    int libro1prenotato=0;
    int libro2prenotato=0;
    int libro3prenotato=0;
    int ciclo=1;
    
    
    printf("Benvenuto nell'app di gestione libri\n");
    while(ciclo==1){
    printf("Che cosa vuoi fare?\n");
    printf("1.Prendere un libro in prestito\n");
    printf("2.Riconsegnare un libro\n");
    printf("3.Chiedere l'id del libro\n");
    printf("4. Esci dall'app\n");
    scanf("%d", &scelta);
    switch(scelta){
        case 4:
            ciclo=0;
            break;
        case 1:
            printf("Quale libro vuoi prenotare?\n");
            if(libro1prenotato==0){printf("1. %s\n", libro1);}
            if(libro2prenotato==0){printf("2. %s\n", libro2);}
            if(libro3prenotato==0){printf("3. %s\n", libro3);}
            scanf("%d", &scelta2);
           
            switch(scelta2){
                case 1:
                    libro1prenotato=1;
                    printf("Ok grazie per aver scelto %s", libro1);
                    
                    break;
                case 2:
                    libro2prenotato=1;
                    printf("Ok grazie per aver scelto %s", libro2);
                    break;
                case 3:
                    libro3prenotato=1;
                    printf("Ok grazie per aver scelto %s", libro3);
                    break;
                default:
                    break;
                    
            }
            
        case 2:
            if(libro1prenotato==0&libro2prenotato==0&libro3prenotato==0)
            {printf("Non c'e' nessun libro da restituire\n");} else {
            printf("Quale libro vuoi restituire?\n");
            if(libro1prenotato==1){printf("1. %s\n", libro1);}
            if(libro2prenotato==1){printf("2. %s\n", libro2);}
            if(libro3prenotato==1){printf("3. %s\n", libro3);}
            
            scanf("%d", &scelta3);
           
            switch(scelta3){
                case 1:
                    libro1prenotato=0;
                    printf("Ok grazie per aver restituito %s", libro1);
                    
                    break;
                case 2:
                    libro2prenotato=0;
                    printf("Ok grazie per aver restituito %s", libro2);
                    break;
                case 3:
                    libro3prenotato=0;
                    printf("Ok grazie per aver restituito %s", libro3);
                    break;
                default:
                    break;
                    
            }}
            break;
            
        case 3:
            printf("Di quale libro vuoi avere l'id?");
        printf("1. %s\n", libro1);
        printf("2. %s\n", libro2);
        printf("3. %s\n", libro3);
            scanf("%d", &scelta4);
           
            switch(scelta4){
                case 1:
                    
                    printf("L'id del libro %s e' %d", libro1, idlibro1);
                    
                    break;
                case 2:
                    printf("L'id del libro %s e' %d", libro2, idlibro2);
                    
                    break;
                case 3:
                    printf("L'id del libro %s e' %d", libro3, idlibro3);
                    break;
                default:
                    break;
                    
            }
        
        default:
            break;
    }
    }
    printf("Grazie per aver utilizzato l'app");
    }
