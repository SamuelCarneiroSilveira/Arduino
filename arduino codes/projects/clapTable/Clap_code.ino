/*
Project: clap line filter
Date: 11/07/2021 
Programmer: Samuel Carneiro Silveira
*/

/******** pin definitions ****************************************************************/

#define RelayOne 4 
#define RelayTwo 5
#define RelayThree 6
#define RelayFour 7
#define SoundSensor 3 

/******** common variables ****************************************************************/

int clapDuration = 200; // Duration of clap
int clapBreak = 500; // Maximun interval between one sequence of aplauses and another
int clapCounter = 0; // Number of claps recorded

long clapMoment = 0; //Used for detection of claps 
long waitClap = 0;   //Used for record time intervals
/*******************************************************************************************/

void setup() {
  pinMode(RelayOne,OUTPUT);
  pinMode(RelayTwo,OUTPUT);
  pinMode(RelayThree,OUTPUT);
  pinMode(RelayFour,OUTPUT);
  pinMode(SoundSensor, INPUT);
}

void loop() {

  int Hear = digitalRead(SoundSensor);
  
  /****** Clap counter **********************************************************************/
    if(Hear == LOW){
     if(clapMoment == 0){
        clapMoment = waitClap = millis();
        clapCounter += 1;
     
     } else if( (millis() - clapMoment) >= clapDuration){
        clapCounter = 0;   
     }
    }

  /****** Actuation **************************************************************************/
  
  if(((millis() - waitClap) > clapBreak) && (clapCounter != 0)){
      if(clapCounter == 1){
        digitalWrite(RelayOne, !digitalRead(RelayOne));   
      }
      if(clapCounter == 2){
        digitalWrite(RelayTwo, !digitalRead(RelayTwo));   
      }
      if(clapCounter == 3){
        digitalWrite(RelayThree, !digitalRead(RelayThree));   
      }
      if(clapCounter == 4){
        digitalWrite(RelayFour, !digitalRead(RelayFour));   
      }      
      
       delay(100);
       clapCounter = 0;
  }
}
