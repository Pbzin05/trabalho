#include <stdio.h>
#include <stdlib.h>

double f(int x, double b) {
        
double a0 = 186.752;

    doubl
double a1 = -148.235;
    
    doub
double a2 = 34.5049;
    
    d
double a3 = -3.5091;
    double a4 = 0.183166;
    
    d
double a5 = -0.00513554;
    
    dou
double a6 = 0.0000735464;
    double a7 = -4.22038e-7;

    ret
 
return a0 + (a1 + b) * x + a2 * x * x + a3 * x * x * x + a4 * x * x * x * x +
           a5 * x * x * x * x * x + a6 * x * x * x * x * x * x + a7 * x * x * x * x * x * x * x;
}


           a5 * x * x * x * x * x + a6 * x * x * x * x * x * x + a7 * x * x * x * x * x * x * x;
}

           a5 * x * x * x * x * x + a6 * x * x * x * x * x * x + a7 * x * x * x * x * x * 

           a5 * x * x * x * x * x + a6 * x * x * x * x * x * x + a7 * x * x * x *

           a5 * x * x * x * x * x + a6 * x * x * x * x * x * x + a7 * x *

           a5 * x * x * x * x * x + a6 * x * x * x * x * 

           a5 * x * x * x * x * x + a6 * x * x * x

           a5 * x * x * x * x * x + a6 * x

           a5 * x * x * x * x * x + a

           a5 * x * x * x * x *

           a5 * x * x * 

           a5 * x * 

           a5 *

           
       
void decode_message(const char *hex_string) {
    char message[51] = {0}; // Para armazenar a mensagem decodificada (até 50 caracteres + nulo)
    int i = 0, j = 0;
   
while (hex_string[i] != '\0' && hex_string[i + 1] != '\0') {
        
  
if (hex_string[i] == '0' && hex_string[i + 1] == '0') {
            
      
break; // Encerra a leitura ao encontrar "00"
        }
        
   
// Converte os dois caracteres hexadecimais em um valor decimal
        
   
char hex_char[3] = {hex_string[i], hex_string[i + 1], '\0'};
        
        in

     
int ascii_value = (int)strtol(hex_char, NULL, 16);
        
        
       
// Calcula b (posição atual + 1)
        double b = (double)(j + 1);
        
        /
// Calcula o valor do caractere decodificado
        
       
int decoded_value = (int)(ascii_value - f(j + 1, b));

        

        
// Verifica se o valor decodificado é um caractere imprimível
        if (decoded_value >= 0 && decoded_value <= 127) {
            message[j] = (
          
char)decoded_value;
            j++;
        }

        i += 
            j++;
        

            
2; // Avança para o próximo par de caracteres hexadecimais
    }

    
    }

   
// Imprime a mensagem decodificada
    printf("Mensagem Decodificada: %s\n", message);
}

int main() {
    
  
// Exemplo de uso
    
    con
const char *hex_message = "48656c6c6f21004579002e2e00466f6f00620061";
    decode_message(hex_message);

    
    decode_message(hex_message);

    retur

    decode_message(hex_message);


    decode_mess

    d
return 0;
}
