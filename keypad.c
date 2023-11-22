#include <xc.h>
#include "keypad.h"
    
int checkCols(){
    int col=4;
    if(PORTBbits.RB0==0){
        col = 0;
    }else if(PORTBbits.RB1==0){
        col = 1;
    }else if(PORTBbits.RB2==0){
        col = 2;
    }else if(PORTBbits.RB3==0){
        col = 3;
     }
return col;
}
    
char check_rows(int col){
    char tecla;
    if(col==4){
      tecla = ' ';
    }else{
      tecla = map[0][col];
     if(PORTBbits.RB4==0){
          tecla = map[0][col];
     }else if(PORTBbits.RB5==0){
          tecla = map[1][col];
     }else if(PORTBbits.RB6==0){
          tecla = map[2][col];
     }else if(PORTBbits.RB7==0){
          tecla = map[3][col];
     }
    }
    return tecla;
}
