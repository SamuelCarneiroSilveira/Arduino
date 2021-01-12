/* project: traffic light
   author: samuel carneiro silveira
   schematic at https://github.com/SamuelCarneiroSilveira/Arduino
   video of the project at  
   components: 
   1 x arduino
   3 x led  
   3 x resistor 175Ω  

   the #define tag uses less memory than defining an int variable
*/

#define green 5
#define yellow 6
#define red 7

void setup() {
  pinMode (green, OUTPUT);
  pinMode (yellow, OUTPUT);
  pinMode (red, OUTPUT);
}

void loop() {
  digitalWrite(green, HIGH);
  digitalWrite(yellow, LOW);
  digitalWrite(red, LOW);
  delay(3000);
  
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  digitalWrite(red, LOW);
  delay(1000);
  
  digitalWrite(green, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(red, HIGH);
  delay(3000);

}
