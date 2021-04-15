//#include <iostream>

using namespace std;

int main()
{
  init();
  
  Serial.begin(9600);
  
    int num= 0;
    int suma = 0;
    int mod =0;
    int may=0;
    int c=1;
  
  if(Serial.available()>0){
    Serial.print("ingrese numero entero positivo: ");
    num = Serial.parseInt();
    while (num<=0){
        Serial.print( "ingrese numero entero positivo: ");
        num = Serial.parseInt();
    }
    while (num >0){
        mod=num%10;
        if (mod>may){
            may = mod;
        }else if (mod== may) {
            c += 1;
}
        int pot=1;
        for (int cont = 1; cont <= mod; ++cont) {
            pot *= mod;


        }
        //cout<<pot<<endl;
        suma += pot;
        num /=10;
        //cout<<mod<<" "<<num<<endl;
    }
    Serial.print("El resultado es: ");
    Serial.print(suma);
    Serial.print("El digito mayor encontrado es el ");
    Serial.print(may);
    Serial.print(" que aparece ");
    Serial.print(c);
    Serial.print(" vez");
    }
    return 0;
}



/*
  This program blinks pin 13 of the Arduino (the
  built-in LED)
*/

/*void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  // turn the LED off by making the voltage LOW
  digitalWrite(13, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}*/