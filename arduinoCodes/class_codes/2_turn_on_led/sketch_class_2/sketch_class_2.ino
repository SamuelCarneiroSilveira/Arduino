/* project: light up led
   author: samuel carneiro silveira
   schematic at https://github.com/SamuelCarneiroSilveira/Arduino/blob/main/arduino%20codes/2_turn_on_led/schematic%20class_2.jpg
   picture at https://github.com/SamuelCarneiroSilveira/Arduino/blob/main/arduino%20codes/2_turn_on_led/picture%20class_2.jpg
   components: 
   1 x arduino
   1 x led  
   1 x resistor 175Ω  

   schematic at https://github.com/SamuelCarneiroSilveira/Arduino
   video of the project at 
*/      
void setup() { //void mode has no return
  pinMode(5,OUTPUT); // tells whether the pin is input or output
}
void loop() {
  digitalWrite(5, HIGH); // says the state of the pin
  delay(2000); // 
}
