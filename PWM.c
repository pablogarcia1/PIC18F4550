
int angle;
int valor=0;
int valor2=0;
int T=0;

void interrupt() {

T = ((angle*8.3)/180);
Vdelay_ms(T);
PORTD = 1;
delay_ms(1);
PORTD = 0;
INTCON.INT0IF=0;



}






void main() {
TRISD=0;
TRISA=1;


TRISB=1;
ADCON1 = 0b00000011;
INTCON.GIE = 1;
INTCON.PEIE = 1;
INTCON.INT0IE = 1;


INTCON2.INTEDG0 = 1;

INTCON2.RBPU = 0;


        while(1) {
        if((PORTB.RB7==0)&&(PORTB.RB6==1)) {

                angle = 120;
     }

        else {

        angle = 60;
}

}



}