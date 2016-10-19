/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Tvoje Máma
 *
 * Created on 15. října 2016, 15:19
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int user_input ;
    do  {
        printf ("Zadejte celé číslo v intervalu <1 , 5>\n") ;
        scanf ("%d", &user_input) ;        
        if (user_input == 1)  
         printf ("Qapla\'\nnoH QapmeH wo\' Qaw\'lu'chugh yay chavbe\'lu\' \'ej wo\' choqmeH may\' DoHlu\'chugh lujbe\'lu\'.\n") ; 
        
        if (user_input == 2)        
         printf ("Qapla\'\nQu\' buSHa\'chugh SuvwI\', batlhHa\' vangchugh, qoj matlhHa\'chugh, pagh ghaH SuvwI\'\'e\'.\n") ;
        
        if (user_input == 3)
         printf ("g") ;
        
        if (user_input == 4)
         printf("g") ;
        
        if (user_input == 5)
            printf("g") ;
        
     
    } while (! ((user_input >= 1) && (user_input <= 5))) ;

    return (EXIT_SUCCESS);
}

