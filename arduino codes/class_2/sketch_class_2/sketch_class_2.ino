/* project: light up led
   author: samuel carneiro silveira
   schematic at https://github.com/SamuelCarneiroSilveira/Arduino
   video of the project at  
 
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
