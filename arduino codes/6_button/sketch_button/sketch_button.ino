/* project: Push button
   author: samuel carneiro silveira
   schematic at https://github.com/SamuelCarneiroSilveira/Arduino
   video of the project at 
   components: 
   1 x arduino
   1 x led  
   2 x resistor 175Ω
   1 x pushButton  
*/
#define led 4
#define btn 3

int btnclicado=0;
int btnliberado=0;

void trocaLed() { //checks if the led is on or off, and changes its state
  if(digitalRead(led)==HIGH){ 
      digitalWrite(led, LOW);
      } else {
      digitalWrite(led, HIGH); 
      }
}

void keyUp() { //checks if the button has been pressed and released, and calls the led exchange function
  if((btnclicado==1)and(btnliberado==1)){
    btnclicado=0;
    btnliberado=0;
    trocaLed();  
  }  
}

void setup() {
  pinMode(led,OUTPUT);
  pinMode(btn,INPUT);
}

void loop() {
  if(digitalRead(btn)==HIGH){
        btnclicado=1;
        btnliberado=0;
      } else {
        btnliberado=1;
      }
      keyUp();
}
