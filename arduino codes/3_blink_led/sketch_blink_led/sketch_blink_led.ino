/* project: flashes led
   author: samuel carneiro silveira
   schematic at https://github.com/SamuelCarneiroSilveira/Arduino
   video of the project at  
   
   components:
   1 x arduino
   1 x led
   1 x resistor 175Ω  
*/
int led = 5;

void setup() {
pinMode(led, OUTPUT);
}

void loop() {
digitalWrite(led,LOW);
delay(500);
digitalWrite(led,HIGH);
delay(500);
}
