#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>

float aleatoire(float , float);
int genEntropicSeed();
int main(){
    genEntropicSeed();
    printf("######## Pile ou Face #########\n\n");
    printf("Pile ou face ?\n\n1. Pile\n2. Face\n0. Quitter le jeu\n\n");
    
    int reussite=0;
    int echec=0;
    while (echec!=10)
        {    
            char buf[255];
            memset(buf,0,255);
            fgets(buf,sizeof(buf),stdin);
            buf[strlen(buf)-1]=0;
            int reponse;
            int r=aleatoire(1,3);
            for (int i = 0; i < strlen(buf); i++)
            {
                if (buf[i]>90)
                {
                    buf[i]=buf[i]-32;
                }
                else{
                    
                }
            }
            // printf("%d,%c",buf[strlen(buf)-2],buf[strlen(buf)-2]);
            // printf("%d",strcmp(buf,"PILE"));
            if (strcmp(buf,"PILE")==0||strcmp(buf,"P")==0 || strcmp(buf,"1")==0)
            {
                reponse=1;
            }
            else if (strcmp(buf,"FACE")==0||strcmp(buf,"F")==0 || strcmp(buf,"2")==0)
            {
                reponse=2;
            }
            else if (strcmp(buf,"QUIT")==0||strcmp(buf,"quitter")==0||strcmp(buf,"exit")==0||strcmp(buf,"0")==0)
            {
                reponse=0;
            }
            else{
                reponse=0;
                printf("! Réponse invalide !\n Relancez le jeu pour réessayer.\n");
            }
        
            if (reponse==1)
            {
                printf("\nVous faites Pile !\n");
                printf("La pièce est jetée\n");
                sleep(1);
                printf(".\n");
                sleep(1);
                printf(".\n");
                sleep(1);
                printf(".\n");
                    if (reponse==r)
                    {
                        printf("PILE !\n\n");
                        sleep(1);
                        printf("C'est Gagné ! Bien joué !\n");
                        reussite++;
                        printf("Reussite : %d\n",reussite);
                        printf("Echec : %d\n", echec);
                        printf("|-----------------------------|\n");
                    }
                    if (reponse!=r)
                    {
                        printf("Face !\n\n");
                        sleep(1);
                        printf("C'est Perdu ! Dommage... !\n");
                        echec++;
                        printf("Reussite : %d\n",reussite);
                        printf("Echec : %d\n", echec);
                        printf("|-----------------------------|\n");
                    }
                    
                
            }
            if (reponse==2)
            {
                printf("\nVous faites Face !\n");
                printf("La pièce est jetée\n");
                sleep(1);
                printf(".\n");
                sleep(1);
                printf(".\n");
                sleep(1);
                printf(".\n");
                if (reponse==r)
                    {
                        printf("FACE !\n\n");
                        sleep(1);
                        printf("C'est Gagné ! Bien joué !\n");
                        reussite++;
                        printf("Reussite : %d\n",reussite);
                        printf("Echec : %d\n", echec);
                        printf("|-----------------------------|\n");
                    }
                    if (reponse!=r)
                    {
                        printf("PILE !\n\n");
                        sleep(1);
                        printf("C'est Perdu ! Dommage... !\n");
                        echec++;
                        printf("Reussite : %d\n",reussite);
                        printf("Echec : %d\n", echec);
                        printf("|-----------------------------|\n");
                    }
            }
            if (reponse==0 || echec==10)
            {
                printf("Vous quittez le jeu.\n");
                sleep(1);
                printf("Reussites :%d\n", reussite);
                printf("Echecs : %d\n",echec);
                sleep(1);
                printf("|-----------------------------|\n###########GAME OVER###########\n");
                return 0;
            }
        }
}
            


int genEntropicSeed(){
    int tab[255];
    getentropy(tab,sizeof(tab));
    int seed=0;
    for (int i = 0; i < 255; i++)
    {
        seed=seed+tab[i];
    }
    srand(seed);
}

float aleatoire(float minimum,float maximum){
    int minetmax = minimum+(float)rand()/RAND_MAX*(maximum-minimum); 
    return minetmax;
}

