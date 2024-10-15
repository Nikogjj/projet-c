#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>

float aleatoire(float , float);
int genEntropicSeed();
int main(){
    genEntropicSeed();
    
    int reussite=0;
    int echec=0;
    printf("######## Pile ou Face #########\n\n");   
    while (echec!=10)
        {    
        printf("Pile ou face ?\n\n1. Pile\n2. Face\n0. Quitter le jeu\n\n");
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
                reponse=3;
                printf("! Réponse invalide !\n Veuillez entre une nouvvelle réponse valide.\n");
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
                        reussite++;
                        if (reussite>=2 && echec<2)
                        {
                            printf("C'est Gagné ! Bien joué !\n");
                            printf("Reussites : %d\n",reussite);
                            printf("Echec : %d\n", echec);
                            printf("|-----------------------------|\n");
                        }
                        else if(echec>=2 && reussite<2){
                            printf("C'est Gagné ! Bien joué !\n");
                            printf("Reussite : %d\n",reussite);
                            printf("Echecs : %d\n", echec);
                            printf("|-----------------------------|\n");
                        }
                        else if(reussite<=2 && echec<=2){
                            printf("C'est Gagné ! Bien joué !\n");
                            printf("Reussite : %d\n",reussite);
                            printf("Echec : %d\n", echec);
                            printf("|-----------------------------|\n");
                        }
                        else{
                            printf("C'est Gagné ! Bien joué !\n");
                            printf("Reussites : %d\n",reussite);
                            printf("Echecs : %d\n", echec);
                            printf("|-----------------------------|\n");
                        }
                    }
                    if (reponse!=r)
                    {
                        echec++;
                        printf("Face !\n\n");
                        sleep(1);
                        if (reussite>=2 && echec<2)
                        {
                            printf("C'est perdu ! Dommage !\n");
                            printf("Reussites : %d\n",reussite);
                            printf("Echec : %d\n", echec);
                            printf("|-----------------------------|\n");
                        }
                        else if(echec>=2 && reussite<2){
                            printf("C'est perdu ! Dommage !\n");
                            printf("Reussite : %d\n",reussite);
                            printf("Echecs : %d\n", echec);
                            printf("|-----------------------------|\n");
                        }
                        else if(echec>=2 && reussite>=2){
                            printf("C'est perdu ! Dommage !\n");
                            printf("Reussites : %d\n",reussite);
                            printf("Echecs : %d\n", echec);
                            printf("|-----------------------------|\n");
                        }
                        else{
                            printf("C'est perdu ! Dommage !\n");
                            printf("Reussite : %d\n",reussite);
                            printf("Echec : %d\n", echec);
                            printf("|-----------------------------|\n");
                        }
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
                        reussite++;
                        if (reussite>=2 && echec<2)
                        {
                            printf("C'est Gagné ! Bien joué !\n");
                            printf("Reussites : %d\n",reussite);
                            printf("Echec : %d\n", echec);
                            printf("|-----------------------------|\n");
                        }
                        else if(echec>=2 && reussite<2){
                            printf("C'est Gagné ! Bien joué !\n");
                            printf("Reussite : %d\n",reussite);
                            printf("Echecs : %d\n", echec);
                            printf("|-----------------------------|\n");
                        }
                        else if(echec<2 && reussite<2){
                            printf("C'est Gagné ! Bien joué !\n");
                            printf("Reussite : %d\n",reussite);
                            printf("Echec : %d\n", echec);
                            printf("|-----------------------------|\n");
                        }
                        else{
                            printf("C'est Gagné ! Bien joué !\n");
                            printf("Reussites : %d\n",reussite);
                            printf("Echecs : %d\n", echec);
                            printf("|-----------------------------|\n");
                        }
                    }
                    if (reponse!=r)
                    {
                        printf("PILE !\n\n");
                        sleep(1);
                        echec++;
                        if (reussite>=2 && echec<2)
                        {
                            printf("C'est perdu ! Dommage !\n");
                            printf("Reussites : %d\n",reussite);
                            printf("Echec : %d\n", echec);
                            printf("|-----------------------------|\n");
                        }
                        else if(echec>=2 && reussite<2){
                            printf("C'est perdu ! Dommage !\n");
                            printf("Reussite : %d\n",reussite);
                            printf("Echecs : %d\n", echec);
                            printf("|-----------------------------|\n");
                        }
                        else if(echec>=2 && reussite>=2){
                            printf("C'est perdu ! Dommage !\n");
                            printf("Reussites : %d\n",reussite);
                            printf("Echecs : %d\n", echec);
                            printf("|-----------------------------|\n");
                        }
                        else{
                            printf("C'est perdu ! Dommage !\n");
                            printf("Reussite : %d\n",reussite);
                            printf("Echec : %d\n", echec);
                            printf("|-----------------------------|\n");
                        }
                    }
            }
            if (reponse==0 || echec==10)
            {
                printf("Vous quittez le jeu.\n");
                sleep(1);
                if (reussite >=2 && echec <2)
                {    
                    printf("Reussites :%d\n", reussite);
                    printf("Echec : %d\n",echec);
                    sleep(1);
                    printf("|-----------------------------|\n###########GAME OVER###########\n");
                    return 0;
                }
                else if(reussite>=2 && echec>=2){
                    printf("Reussites :%d\n", reussite);
                    printf("Echecs : %d\n",echec);
                    sleep(1);
                    printf("|-----------------------------|\n###########GAME OVER###########\n");
                    return 0;
                }
                else if(reussite<2 && echec>=2){
                    printf("Reussite :%d\n", reussite);
                    printf("Echecs : %d\n",echec);
                    sleep(1);
                    printf("|-----------------------------|\n###########GAME OVER###########\n");
                    return 0;
                }
                else{
                    printf("Reussite :%d\n", reussite);
                    printf("Echec : %d\n",echec);
                    sleep(1);
                    printf("|-----------------------------|\n###########GAME OVER###########\n");
                    return 0;
                }
                
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
