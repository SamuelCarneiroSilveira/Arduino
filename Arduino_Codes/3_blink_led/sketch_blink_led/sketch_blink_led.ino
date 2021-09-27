/* project: flashes led
   author: samuel carneiro silveira
   schematic at https://github.com/SamuelCarneiroSilveira/Arduino/blob/main/arduino%20codes/3_blink_led/schematic%20class_3.jpg
   video of the project at https://www.youtube.com/watch?v=CQyiCKR2C9c 
   
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
