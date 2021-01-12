/* project: led control by pwm
   author: samuel carneiro silveira
   schematic at https://github.com/SamuelCarneiroSilveira/Arduino
   video of the project at  
   components:                                      
   1 x arduino
   3 x led  
   3 x resistor 175Ω  
*/                                           
#define led3 3
#define led5 5
#define led6 6

#define maximo 250
#define minimo 0
#define tmp 60 

void setup() {
  pinMode(led3,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
}

void loop() {
  for(int i=minimo;i<maximo;i=(i+20)){
      analogWrite(led3, i);
      analogWrite(led5, i);
      analogWrite(led6, i);
      delay(tmp);
  }
  for(int i=maximo;i>minimo;i=(i-20)){
      analogWrite(led3, i);
      analogWrite(led5, i);
      analogWrite(led6, i);
      delay(tmp);
  }
}
