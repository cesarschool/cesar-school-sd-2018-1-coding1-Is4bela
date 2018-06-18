#include <stdio.h>
/**
 * Escreva uma função que encontra a primeira letra que não se repete em uma
 * sentença.
 * Função: char firstNonRepeatingChar(char[] sentence, int length)
 * Input:
 * - sentence: array não nulo de letras, formado apenas por ASCII em minúsculo.
 * - length: tamanho do array - número de caracteres
 * Output: A primeira letra que não se repete, ou -1, caso todas se repitam.
 */
char firstNonRepeatingChar (char sentence[], int length)
{
    printf("\nfirstNonRepeatingChar::START: %s, %d\n", sentence, length);
    
    int word = 0;
    int clean = 0;
    int sinal = 0;
    int fim = length -1;
    
    while (word <= fim) {
        clean = 0;
        while (clean <= fim) {
                if(sentence[word] == ' '){
                    sinal = 0;
                    break;
                }
                else if (sentence[clean] == sentence[word] && clean !=  word) {
                    sinal = 0;
                    break;
                }
                sinal = 1;
                clean++;
        }
        
        if (sinal == 1) {
            printf("%c", sentence[word]);
            printf("\nfirstNonRepeatingChar::END\n");
            return sentence[word];
        }
        word++;
    }
    printf("-1");
    printf("\nfirstNonRepeatingChar::END\n");
    return -1;
}

int main()
{
    printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: firstNonRepeatingChar ###\n");
    
    firstNonRepeatingChar("ovo", 3);
    firstNonRepeatingChar("cesar school", 12);
    firstNonRepeatingChar("sistemas digitais", 17);
    firstNonRepeatingChar("arara", 5);
    firstNonRepeatingChar("ovo ovelha", 10)
    
    return 0;
}
