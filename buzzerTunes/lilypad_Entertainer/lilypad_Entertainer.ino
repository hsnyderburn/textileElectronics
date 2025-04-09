/******************************************************************************
LilyPad Musci Buzzer Example
--By KOOKYE

This example code shows how to hook up a LilyPad Buzzer to play a simple song 
using the tone() function and setting variables for each note.

Buzzer connections:
   * + pin to 2
   * - to -
******************************************************************************/
// Which pin the buzzer is attached to
int buzzerPin = 2;

// Delay in milliseconds
// 2 beats for measure, quarternote gets the beat
int wholeEight = 1000;
int delayTime = 500; //this is quarternote
int sixteenth = 250; //this is the sixteenth note

// Notes and their frequencies
const int C = 1046;
const int D = 1175;
const int Dsharp = 1244.51; 
const int E = 1319;
const int F = 1397;
const int G = 1568;
const int A = 1760;
const int B = 1976;
const int C1 = 2093;
const int D1 = 2349;
const int D1sharp = 2489.02;
const int E1 = 2637.02;

void setup()
{
    // Set the buzzer pin as an OUTPUT
    pinMode(buzzerPin, OUTPUT);
}

void loop()
{
  // Use the tone() function to play each note in a scale
  tone(buzzerPin, D);
  delay(delayTime);
  tone(buzzerPin, Dsharp);
  delay(sixteenth);
  tone(buzzerPin, E);
  delay(sixteenth);
  tone(buzzerPin, C1);
  delay(delayTime);
  tone(buzzerPin, E);
  delay(sixteenth);
  tone(buzzerPin, C1);
  delay(delayTime);
  tone(buzzerPin, E);
  delay(sixteenth);
  tone(buzzerPin, C1);
  delay(wholeEight);
  noTone(buzzerPin);
  delay(sixteenth);
  tone(buzzerPin, C1);
  delay(sixteenth);
  tone(buzzerPin, D1);
  delay(sixteenth);
  tone(buzzerPin, D1sharp);
  delay(sixteenth);
  tone(buzzerPin, E1);
  delay(sixteenth);
  tone(buzzerPin, C1);
  delay(sixteenth);
  tone(buzzerPin, D1);
  delay(sixteenth);
  tone(buzzerPin, E1);
  delay(delayTime);
  tone(buzzerPin, B);
  delay(sixteenth);
  tone(buzzerPin, D1);
  delay(delayTime);
  tone(buzzerPin, C1);
  delay(wholeEight);

  
  // Use noTone() to shut off the buzzer and delay to create a 'rest'
  noTone(buzzerPin);
  delay(delayTime);
}
