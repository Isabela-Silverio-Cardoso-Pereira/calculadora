/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <stdlib.h>
using namespace std;


int main()
{
int seletor;
float conta = 0;

cout << "digite 1 para soma, 2 para subtração, 3 para multiplicação e 4 para divisão" << endl;
cin >> seletor;
system("clear");

float valor;
if(seletor ==1){
    cout << "digite os valores e 'r' para a resposta aparecer" << endl;
    do{
        cin >> valor;
            conta+=valor;

    }while(valor!=0.0);
    cout << "a soma dos valores é: " << conta; 
    
}else if(seletor ==2){
    cout << "digite os valores e 'r' para a resposta aparecer" << endl;
    cin >> conta;
    do{
        cin >>valor;
        conta-=valor;
        //conta de subtração
    }while(valor!=0.0);
    cout << "a subtração dos valores é: " << conta;
}else if(seletor==3){
    cout << "digite os valores e 'r' para a resposta aparecer" << endl;
    conta = 1;
    do{
        cin >> valor;
        if(valor!=0.0){
                    conta*=valor;

        }
    }while(valor!=0.0);
    cout << "a multiplicação dos valores é: " << conta;
}else if(seletor == 4){
    cout << "digite os valores e 'r' para a resposta aparecer" << endl;
    cin >> conta;
    do{
        
        cin >> valor;
        if(valor!=0.0){
            conta/=valor;
        }

    }while(valor!=0.0);
    cout << "a divisão dos valores é: " << conta;
}
    return 0;
}
