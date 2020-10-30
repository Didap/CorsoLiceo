#include <stdio.h>
#include <string.h>


//esempio di utilizzo stringhe app quiz
int main()
{
    int punteggio=0,valore1=3,valore2=5,valore3=10;
    
    char risposta[20];

    printf("Benvenuto nell'APP SUPERQUIZ, ti sarrano fatte 3 domande, se risponderai a tutte correttamente avrai un premio\n\n");
    
    printf("Domanda 1. (Valore %d punti)\n", valore1);
    printf("Qual'è la capitale d'Italia?\n");
    scanf("%s", risposta);
    //Prima domanda
    if(strcmp(risposta, "Roma")){
        
        printf("Mi dispiace, la risposta era 'Roma' ");
        
    }else{
        printf("Complimenti! Hai risposto correttamente!\nHai totalizzato %d punti\n", valore1);
        punteggio=punteggio+valore1;
        printf("Il tuo punteggio totale adesso è di %d punti\n", punteggio);
        
    }
    
    printf("Domanda 2. (Valore %d punti)\n", valore2);
    printf("Quando e' caduto il muro di Berlino?\n");
    scanf("%s", risposta);
    //Seconda domanda
    if(strcmp(risposta, "1989")){
        
        printf("Mi dispiace, la risposta era '1989' \n");
        
    }else{
        printf("Complimenti! Hai risposto correttamente!\nHai totalizzato %d punti", valore2);
        punteggio=punteggio+valore2;
        printf("Il tuo punteggio totale adesso è di %d punti\n", punteggio);
        
    }
    
    printf("Domanda 3. (Valore %d punti)\n", valore3);
    printf("Chi ha scritto il Passero Solitario\n");
    scanf("%s", risposta);
    //Terza domanda
    if(strcmp(risposta, "Leopardi")){
        
        printf("Mi dispiace, la risposta era 'Leopardi' \n");
        
    }else{
        printf("Complimenti! Hai risposto correttamente!\nHai totalizzato %d punti", valore3);
        punteggio=punteggio+valore3;
        printf("Il tuo punteggio totale adesso è di %d punti\n", punteggio);
        
    }
    
    switch(punteggio){
            
        case 3:
            printf("%d\n", punteggio);
            printf("Mi dispiace, il tuo punteggio e' molto basso, prova a studiare un po' di piu'");
            
            break;
        case 5:
            printf("%d\n", punteggio);
            printf("Mi dispiace, il tuo punteggio e' basso, prova a studiare un po' di piu'");
            break;
        case 8:
            printf("%d\n", punteggio);
            printf("Mi dispiace, il tuo punteggio e' mediocre, sappiamo che puoi fare un po' di piu'");
            break;
        case 10:printf("%d\n", punteggio);
            printf("Mi dispiace, il tuo punteggio e' buono, prova a dare il massimo la prossima volta!");
            break;
        case 13:
            printf("%d\n", punteggio);
            printf("Mi dispiace, il tuo punteggio e' ottimo, sei un grande!");
            break;
        case 18:printf("%d\n", punteggio);
            printf("Ommiodio sei onniscente! <3\n");
            break;
            
            
            
    }
    
    
}

