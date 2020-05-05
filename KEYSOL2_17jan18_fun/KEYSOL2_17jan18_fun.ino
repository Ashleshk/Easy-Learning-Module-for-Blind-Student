
#include <LiquidCrystal.h>
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);
void keypad_sense(void);
void solenoid_test(void);
void Char_aA(void);
void Char_bB(void);
void Char_cC(void);
void Char_dD(void);
void Char_eE(void);
void Char_fF(void);
void Char_gG(void);
void Char_hH(void);
void Char_iI(void);
void Char_jJ(void);
void Char_kK(void);
void Char_lL(void);
void Char_mM(void);
void Char_nN(void);
void Char_oO(void);
void Char_pP(void);
void Char_qQ(void);
void Char_rR(void);
void Char_sS(void);
void Char_tT(void);
void Char_uU(void);
void Char_vV(void);
void Char_wW(void);
void Char_xX(void);
void Char_yY(void);
void Char_zZ(void);
const int dval= 1000;
const int b1 = A2;   
const int b2 = A3;
const int b3 = A4;
const int b4 = A5;                                                                                     
const int b5 = A6;
const int b6 = A7;// the number of the pushbutton pin
const int ledPin2 =  2; 
const int ledPin3 =  3;
const int ledPin4 =  4;
const int ledPin5 =  5;
const int ledPin6 =  6;
const int ledPin7 =  7;
// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status
int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0; 
int buttonState4 = 0;
int buttonState5 = 0;
void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin2, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(b1, INPUT);
   pinMode(ledPin3, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(b2, INPUT);
   pinMode(ledPin4, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(b3, INPUT);
   pinMode(ledPin5, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(b4, INPUT);
   pinMode(ledPin6, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(b5, INPUT);
   pinMode(ledPin7, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(b6, INPUT);
  lcd.begin(16, 2);
  Serial.begin(9600);
  Serial.println("Testing Started");
  delay(500);
  lcd.print("Select Auto:Training");
  lcd.setCursor(0,1);
  lcd.print("Select Key:pressing");
  }


void loop() {
  
  if (digitalRead(A0) >= HIGH){
    //Serial.println(analogRead(A0));
 //lcd.setCursor(0,1);
  //lcd.print("Key Mode");
  keypad_sense();
  }
  else {
    // lcd.setCursor(0,1);
  //lcd.print("Auto Mode");
    solenoid_test();
  }
}

//void solenoid_test(void)
//{
 // lcd.print("Edutainment kit");
 // Test each pin for actuation
 digitalWrite(ledPin2, HIGH);
 delay(500);
 digitalWrite(ledPin2, LOW);
 delay(500);
 digitalWrite(ledPin3, HIGH);
 delay(500);
 digitalWrite(ledPin3, LOW);
 delay(500);
 digitalWrite(ledPin4, HIGH);
 delay(500);
 digitalWrite(ledPin4, LOW);
 delay(500);
 digitalWrite(ledPin5, HIGH);
 delay(500);
 digitalWrite(ledPin5, LOW);
 delay(500);
 digitalWrite(ledPin6, HIGH);
 delay(500);
 digitalWrite(ledPin6, LOW);
 delay(500);
 digitalWrite(ledPin7, HIGH);
 delay(500);
 digitalWrite(ledPin7, LOW);
 delay(500);
 //pin testing complete
 //lcd.clear();
 
digitalWrite(ledPin2, HIGH);
digitalWrite(ledPin3, HIGH);
digitalWrite(ledPin4, HIGH);
digitalWrite(ledPin4, HIGH);
digitalWrite(ledPin5, HIGH);
digitalWrite(ledPin6, HIGH);
digitalWrite(ledPin7, HIGH);
//lcd.print("All low");
delay(500);
//lcd.clear(); 

void Char_aA(void)
{
//Alphabet "A" or "a"

lcd.print("a");
Serial.println("a");
digitalWrite(ledPin2, LOW);
 delay(1000);
 digitalWrite(ledPin2, HIGH);
 digitalWrite(ledPin3, HIGH);
 digitalWrite(ledPin4, HIGH);
 digitalWrite(ledPin5, HIGH);
 digitalWrite(ledPin6, HIGH);
 digitalWrite(ledPin7, HIGH);
 delay(1000);
 lcd.clear();
}
void Char_bB(void)
{
 //Alphabet "B" or "b"
lcd.print("b");
Serial.println("b");
digitalWrite(ledPin2, LOW);
digitalWrite(ledPin3, LOW);
 delay(1000);
 digitalWrite(ledPin2, HIGH);
 digitalWrite(ledPin3, HIGH);
 digitalWrite(ledPin4, HIGH);
 digitalWrite(ledPin5, HIGH);
 digitalWrite(ledPin6, HIGH);
 digitalWrite(ledPin7, HIGH);
 delay(1000);
 lcd.clear();
}
void Char_cC(void)
{
 //Alphabet "C" or "c"
lcd.print("c");                                              
Serial.println("c");
digitalWrite(ledPin2, LOW);
digitalWrite(ledPin5, LOW);
 delay(1000);
 digitalWrite(ledPin2, HIGH);
 digitalWrite(ledPin3, HIGH);
 digitalWrite(ledPin4, HIGH);
 digitalWrite(ledPin5, HIGH);
 digitalWrite(ledPin6, HIGH);
 digitalWrite(ledPin7, HIGH);
 delay(1000);
 lcd.clear();
}
 void Char_dD(void)
 {
 //Alphabet "D" or "d"
lcd.print("d");                                              
Serial.println("d");
digitalWrite(ledPin2, LOW);
digitalWrite(ledPin5, LOW);
digitalWrite(ledPin6, LOW);
 delay(1000);
 digitalWrite(ledPin2, HIGH);
 digitalWrite(ledPin3, HIGH);
 digitalWrite(ledPin4, HIGH);
 digitalWrite(ledPin5, HIGH);
 digitalWrite(ledPin6, HIGH);
 digitalWrite(ledPin7, HIGH);
 delay(1000);
 lcd.clear();
 }
 void Char_eE(void)
 {
 //Alphabet "E" or "e"
lcd.print("e");                                              
Serial.println("e");
digitalWrite(ledPin2, LOW);
digitalWrite(ledPin6, LOW);
 delay(1000);
 digitalWrite(ledPin2, HIGH);
 digitalWrite(ledPin3, HIGH);
 digitalWrite(ledPin4, HIGH);
 digitalWrite(ledPin5, HIGH);
 digitalWrite(ledPin6, HIGH);
 digitalWrite(ledPin7, HIGH);
 delay(1000);
 lcd.clear();
 }
 void Char_fF(void)
 {
 //Alphabet "F" or "f"
lcd.print("f");                                              
Serial.println("f");
digitalWrite(ledPin2, LOW);
digitalWrite(ledPin3, LOW);
digitalWrite(ledPin5, LOW);
 delay(1000);
 digitalWrite(ledPin2, HIGH);
 digitalWrite(ledPin3, HIGH);
 digitalWrite(ledPin4, HIGH);
 digitalWrite(ledPin5, HIGH);
 digitalWrite(ledPin6, HIGH);
 digitalWrite(ledPin7, HIGH);
 delay(1000);
 lcd.clear();
 }
 void Char_gG(void)
 {
 //Alphabet "G" or "g"
lcd.print("g");                                              
Serial.println("g");
digitalWrite(ledPin2, LOW);
digitalWrite(ledPin3, LOW);
digitalWrite(ledPin5, LOW);
digitalWrite(ledPin6, LOW);
 delay(1000);
 digitalWrite(ledPin2, HIGH);
 digitalWrite(ledPin3, HIGH);
 digitalWrite(ledPin4, HIGH);
 digitalWrite(ledPin5, HIGH);
 digitalWrite(ledPin6, HIGH);
 digitalWrite(ledPin7, HIGH);
 delay(1000);
 lcd.clear();
 }
 void Char_hH(void){
 //Alphabet "H" or "h"
lcd.print("h");                                              
Serial.println("h");
digitalWrite(ledPin2, LOW);
digitalWrite(ledPin3, LOW);
digitalWrite(ledPin6, LOW);
 delay(1000);
 digitalWrite(ledPin2, HIGH);
 digitalWrite(ledPin3, HIGH);
 digitalWrite(ledPin4, HIGH);
 digitalWrite(ledPin5, HIGH);
 digitalWrite(ledPin6, HIGH);
 digitalWrite(ledPin7, HIGH);
 delay(1000);
 lcd.clear();}
 void Char_iI(void){
  //Alphabet "I" or "i"
lcd.print("i");                                              
Serial.println("i");
digitalWrite(ledPin3, LOW);
digitalWrite(ledPin5, LOW);
 delay(1000);
 digitalWrite(ledPin2, HIGH);
 digitalWrite(ledPin3, HIGH);
 digitalWrite(ledPin4, HIGH);
 digitalWrite(ledPin5, HIGH);
 digitalWrite(ledPin6, HIGH);
 digitalWrite(ledPin7, HIGH);
 delay(1000);
 lcd.clear();
 }
 void Char_jJ(void){
  //Alphabet "J" or "j"
lcd.print("j");                                              
Serial.println("j");
digitalWrite(ledPin3, LOW);
digitalWrite(ledPin5, LOW);
digitalWrite(ledPin6, LOW);
 delay(1000);
 digitalWrite(ledPin2, HIGH);
 digitalWrite(ledPin3, HIGH);
 digitalWrite(ledPin4, HIGH);
 digitalWrite(ledPin5, HIGH);
 digitalWrite(ledPin6, HIGH);
 digitalWrite(ledPin7, HIGH);
 delay(1000);
 lcd.clear();
  }
 void Char_kK(void){
 //Alphabet "K" or "k"
lcd.print("k");                                              
Serial.println("k");
digitalWrite(ledPin2, LOW);
digitalWrite(ledPin4, LOW);
 delay(1000);
 digitalWrite(ledPin2, HIGH);
 digitalWrite(ledPin3, HIGH);
 digitalWrite(ledPin4, HIGH);
 digitalWrite(ledPin5, HIGH);
 digitalWrite(ledPin6, HIGH);
 digitalWrite(ledPin7, HIGH);
 delay(1000);
 lcd.clear();
 }
 void Char_lL(void){
 //Alphabet "L" or "l"
lcd.print("l");                                              
Serial.println("l");
digitalWrite(ledPin2, LOW);
digitalWrite(ledPin3, LOW);
digitalWrite(ledPin4, LOW);
 delay(1000);
 digitalWrite(ledPin2, HIGH);
 digitalWrite(ledPin3, HIGH);
 digitalWrite(ledPin4, HIGH);
 digitalWrite(ledPin5, HIGH);
 digitalWrite(ledPin6, HIGH);
 digitalWrite(ledPin7, HIGH);
 delay(1000);
 lcd.clear();
 }
 void Char_mM(void){
 //Alphabet "M" or "m"
lcd.print("m");                                              
Serial.println("m");
digitalWrite(ledPin2, LOW);
digitalWrite(ledPin4, LOW);
digitalWrite(ledPin5, LOW);
 delay(1000);
 digitalWrite(ledPin2, HIGH);
 digitalWrite(ledPin3, HIGH);
 digitalWrite(ledPin4, HIGH);
 digitalWrite(ledPin5, HIGH);
 digitalWrite(ledPin6, HIGH);
 digitalWrite(ledPin7, HIGH);
 delay(1000);
 lcd.clear();
 }
 void Char_nN(void){
 //Alphabet "N" or "n"
lcd.print("n");                                              
Serial.println("n");
digitalWrite(ledPin2, LOW);
digitalWrite(ledPin4, LOW);
digitalWrite(ledPin5, LOW);
digitalWrite(ledPin6, LOW);
 delay(1000);
 digitalWrite(ledPin2, HIGH);
 digitalWrite(ledPin3, HIGH);
 digitalWrite(ledPin4, HIGH);
 digitalWrite(ledPin5, HIGH);
 digitalWrite(ledPin6, HIGH);
 digitalWrite(ledPin7, HIGH);
 delay(1000);
 lcd.clear();
 }
 void Char_oO(void){
 //Alphabet "O" or "o"
lcd.print("o");                                              
Serial.println("o");
digitalWrite(ledPin2, LOW);
digitalWrite(ledPin4, LOW);
digitalWrite(ledPin6, LOW);
 delay(1000);
 digitalWrite(ledPin2, HIGH);
 digitalWrite(ledPin3, HIGH);
 digitalWrite(ledPin4, HIGH);
 digitalWrite(ledPin5, HIGH);
 digitalWrite(ledPin6, HIGH);
 digitalWrite(ledPin7, HIGH);
 delay(1000);
 lcd.clear();
 }
 void Char_pP(void){
  //Alphabet "P" or "p"
lcd.print("p");                                              
Serial.println("p");
digitalWrite(ledPin2, LOW);
digitalWrite(ledPin3, LOW);
digitalWrite(ledPin4, LOW);
digitalWrite(ledPin5, LOW);
 delay(1000);
 digitalWrite(ledPin2, HIGH);
 digitalWrite(ledPin3, HIGH);
 digitalWrite(ledPin4, HIGH);
 digitalWrite(ledPin5, HIGH);
 digitalWrite(ledPin6, HIGH);
 digitalWrite(ledPin7, HIGH);
 delay(1000);
 lcd.clear();
 }
 void Char_qQ(void){
 //Alphabet "Q" or "q"
lcd.print("q");                                              
Serial.println("q");
digitalWrite(ledPin2, LOW);
digitalWrite(ledPin3, LOW);
digitalWrite(ledPin4, LOW);
digitalWrite(ledPin5, LOW);
digitalWrite(ledPin6, LOW);
 delay(1000);
 digitalWrite(ledPin2, HIGH);
 digitalWrite(ledPin3, HIGH);
 digitalWrite(ledPin4, HIGH);
 digitalWrite(ledPin5, HIGH);
 digitalWrite(ledPin6, HIGH);
 digitalWrite(ledPin7, HIGH);
 delay(1000);
 lcd.clear();
 }
  void Char_rR(void){
  //Alphabet "R" or "r"
lcd.print("r");                                              
Serial.println("r");
digitalWrite(ledPin2, LOW);
digitalWrite(ledPin3, LOW);
digitalWrite(ledPin4, LOW);
digitalWrite(ledPin6, LOW);
 delay(1000);
 digitalWrite(ledPin2, HIGH);
 digitalWrite(ledPin3, HIGH);
 digitalWrite(ledPin4, HIGH);
 digitalWrite(ledPin5, HIGH);
 digitalWrite(ledPin6, HIGH);
 digitalWrite(ledPin7, HIGH);
 delay(1000);
 lcd.clear();
  }
 void Char_sS(void){
 //Alphabet "S" or "s"
lcd.print("s");                                              
Serial.println("s");
digitalWrite(ledPin3, LOW);
digitalWrite(ledPin4, LOW);
digitalWrite(ledPin5, LOW);
 delay(1000);
 digitalWrite(ledPin2, HIGH);
 digitalWrite(ledPin3, HIGH);
 digitalWrite(ledPin4, HIGH);
 digitalWrite(ledPin5, HIGH);
 digitalWrite(ledPin6, HIGH);
 digitalWrite(ledPin7, HIGH);
 delay(1000);
 lcd.clear();
 }
 void Char_tT(void){
 //Alphabet "T" or "t"
lcd.print("t");                                              
Serial.println("t");
digitalWrite(ledPin3, LOW);
digitalWrite(ledPin4, LOW);
digitalWrite(ledPin5, LOW);
digitalWrite(ledPin6, LOW);
 delay(1000);
 digitalWrite(ledPin2, HIGH);
 digitalWrite(ledPin3, HIGH);
 digitalWrite(ledPin4, HIGH);
 digitalWrite(ledPin5, HIGH);
 digitalWrite(ledPin6, HIGH);
 digitalWrite(ledPin7, HIGH);
 delay(1000);
 lcd.clear();
 }
 void Char_uU(void){
 //Alphabet "U" or "u"
lcd.print("u");                                              
Serial.println("u");
digitalWrite(ledPin2, LOW);
digitalWrite(ledPin4, LOW);
digitalWrite(ledPin7, LOW);
 delay(1000);
 digitalWrite(ledPin2, HIGH);
 digitalWrite(ledPin3, HIGH);
 digitalWrite(ledPin4, HIGH);
 digitalWrite(ledPin5, HIGH);
 digitalWrite(ledPin6, HIGH);
 digitalWrite(ledPin7, HIGH);
 delay(1000);
 lcd.clear();
 }
 void Char_vV(void){
 //Alphabet "V" or "v"
lcd.print("v");                                              
Serial.println("v");
digitalWrite(ledPin2, LOW);
digitalWrite(ledPin3, LOW);
digitalWrite(ledPin4, LOW);
digitalWrite(ledPin7, LOW);
 delay(1000);
 digitalWrite(ledPin2, HIGH);
 digitalWrite(ledPin3, HIGH);
 digitalWrite(ledPin4, HIGH);
 digitalWrite(ledPin5, HIGH);
 digitalWrite(ledPin6, HIGH);
 digitalWrite(ledPin7, HIGH);
 delay(1000);
 lcd.clear();
 }
void Char_wW(void){
 //Alphabet "W" or "w"
lcd.print("w");                                              
Serial.println("w");
digitalWrite(ledPin3, LOW);
digitalWrite(ledPin5, LOW);
digitalWrite(ledPin6, LOW);
digitalWrite(ledPin7, LOW);
 delay(1000);
 digitalWrite(ledPin2, HIGH);
 digitalWrite(ledPin3, HIGH);
 digitalWrite(ledPin4, HIGH);
 digitalWrite(ledPin5, HIGH);
 digitalWrite(ledPin6, HIGH);
 digitalWrite(ledPin7, HIGH);
 delay(1000);
 lcd.clear();
}
 void Char_xX(void){
 //Alphabet "X" or "x"
lcd.print("x");                                              
Serial.println("x");
digitalWrite(ledPin2, LOW);
digitalWrite(ledPin4, LOW);
digitalWrite(ledPin5, LOW);
digitalWrite(ledPin7, LOW);
 delay(1000);
 digitalWrite(ledPin2, HIGH);
 digitalWrite(ledPin3, HIGH);
 digitalWrite(ledPin4, HIGH);
 digitalWrite(ledPin5, HIGH);
 digitalWrite(ledPin6, HIGH);
 digitalWrite(ledPin7, HIGH);
 delay(1000);
 lcd.clear();
 }
 void Char_yY(void){
 //Alphabet "Y" or "y"
lcd.print("y");                                              
Serial.println("y");
digitalWrite(ledPin2, LOW);
digitalWrite(ledPin4, LOW);
digitalWrite(ledPin5, LOW);
digitalWrite(ledPin6, LOW);
digitalWrite(ledPin7, LOW);
 delay(1000);
 digitalWrite(ledPin2, HIGH);
 digitalWrite(ledPin3, HIGH);
 digitalWrite(ledPin4, HIGH);
 digitalWrite(ledPin5, HIGH);
 digitalWrite(ledPin6, HIGH);
 digitalWrite(ledPin7, HIGH);
 delay(1000);
 lcd.clear();
 }
 void Char_zZ(void){
 //Alphabet "Z" or "z"
lcd.print("z");                                              
Serial.println("z");
digitalWrite(ledPin2, LOW);
digitalWrite(ledPin4, LOW);
digitalWrite(ledPin6, LOW);
digitalWrite(ledPin7, LOW);
 delay(1000);
 digitalWrite(ledPin2, HIGH);
 digitalWrite(ledPin3, HIGH);
 digitalWrite(ledPin4, HIGH);
 digitalWrite(ledPin5, HIGH);
 digitalWrite(ledPin6, HIGH);
 digitalWrite(ledPin7, HIGH);
 delay(1000);
 lcd.clear();
 }
 return(0);
  }
 
void keypad_sense(void)
{
  lcd.print("key pressing");
  //lcd.clear();
buttonState = analogRead(b1);
 buttonState1 = analogRead(b2);
 buttonState2 = analogRead(b3);
  buttonState3 = analogRead(b4);
   buttonState4 = analogRead(b5);
    buttonState5 = analogRead(b6);
     Serial.println(buttonState);
  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:

   //if (buttonState == ==HIGH ) {
    if (buttonState==HIGH&& buttonState1== 0 && buttonState2== 0 && buttonState3== 0 && buttonState4== 0 && buttonState5 == 0) {
    // turn LED on:(A)
     digitalWrite(ledPin2, HIGH);
     delay(dval);
    digitalWrite(ledPin2, LOW);
    delay(dval);
     lcd.clear();
     lcd.print("a");
     Serial.print("a");
  }

  
  else  if (buttonState==HIGH && buttonState1==HIGH && buttonState2== LOW && buttonState3== LOW && buttonState4== LOW && buttonState5 == LOW) {
    // turn LED on:(B)
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    delay(dval);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    delay(dval);
     lcd.clear();
     lcd.print("b");
     Serial.print("b");
  }

 else  if (buttonState==HIGH && buttonState1== 0 && buttonState2== 0 && buttonState3==HIGH && buttonState4== 0 && buttonState5 == 0) {
    // turn LED on:(C)
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin5, HIGH);
    delay(dval);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin5, LOW);
    delay(dval);
     lcd.clear();
     lcd.print("c");
     Serial.print("c");
     
  }

   
 else  if (buttonState==HIGH && buttonState1== 0 && buttonState2== 0 && buttonState3==HIGH && buttonState4==HIGH && buttonState5 == 0 ) {
    // turn LED on:(D)
   digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin5, HIGH);
     digitalWrite(ledPin6, HIGH);
    delay(dval);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin5, LOW);
    digitalWrite(ledPin6, LOW);
    delay(dval);
     lcd.clear();
     lcd.print("d");
     Serial.print("d");
  } 
    else if (buttonState==HIGH && buttonState1== 0 && buttonState2== 0 && buttonState3== 0 && buttonState4==HIGH && buttonState5 == 0) {
    // turn LED on:(E)
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin6, HIGH);
    delay(dval);
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin2, LOW);
    delay(dval);
     lcd.clear();
     lcd.print("e");
     Serial.print("e");
  }
    else  if (buttonState==HIGH && buttonState1==HIGH && buttonState2== 0 && buttonState3==HIGH && buttonState4== 0 && buttonState5 == 0 ) {
      //(F)
     digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
     digitalWrite(ledPin5, HIGH);
    delay(dval);
    digitalWrite(ledPin5, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin2, LOW);
    delay(dval);
     lcd.clear();
    lcd.print("f");
    Serial.print("f");
  }
  else  if (buttonState==HIGH && buttonState1==HIGH && buttonState2== 0 && buttonState3==HIGH && buttonState4==HIGH && buttonState5 == 0 ) {
    //(G)
     digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
     digitalWrite(ledPin5, HIGH);
       digitalWrite(ledPin6, HIGH);
    delay(dval);
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin5, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin2, LOW);
    delay(dval);
     lcd.clear();
    lcd.print("g");
    Serial.print("g");
  }
   else  if (buttonState==HIGH && buttonState1==HIGH && buttonState2== 0 && buttonState3== 0 && buttonState4==HIGH && buttonState5 == 0 ) {
    //(H)
     digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
     digitalWrite(ledPin6, HIGH);
    delay(dval);
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin2, LOW);
    delay(dval);
     lcd.clear();
    lcd.print("h");
    Serial.print("h");
  }
   else if (buttonState == 0 && buttonState1==HIGH && buttonState2== 0 && buttonState3==HIGH && buttonState4== 0 && buttonState5 == 0) {
    // turn LED on:(I)
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin5, HIGH);
    delay(dval);
    digitalWrite(ledPin5, LOW);
    digitalWrite(ledPin3, LOW);
    delay(dval);
     lcd.clear();
    lcd.print("i");
    Serial.print("i");
  }
   else  if (buttonState == 0 && buttonState1==HIGH && buttonState2== 0 && buttonState3==HIGH && buttonState4==HIGH && buttonState5 == 0) {
    // turn LED on:(J)
   digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin5, HIGH);
     digitalWrite(ledPin6, HIGH);
    delay(dval);
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin5, LOW);
    digitalWrite(ledPin3, LOW);
    delay(dval);
     lcd.clear();
lcd.print("j");
Serial.print("j");
  } 
 //
    else if (buttonState==HIGH && buttonState1== 0 && buttonState2==HIGH && buttonState3== 0 && buttonState4== 0 && buttonState5 == 0) {
    // turn LED on:(K)
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin4, HIGH);
    delay(dval);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin2, LOW);
    delay(dval);
     lcd.clear();
    lcd.print("k");
    Serial.print("k");
  }
    else  if (buttonState==HIGH && buttonState1==HIGH && buttonState2==HIGH && buttonState3== 0 && buttonState4== 0 && buttonState5 == 0 ) {
    // turn LED on:(L)
   digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
     digitalWrite(ledPin4, HIGH);
    delay(dval);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin2, LOW);
    delay(dval);
     lcd.clear();
    lcd.print("l");
    Serial.print("l");
  } 
   else  if (buttonState==HIGH && buttonState1== 0 && buttonState2==HIGH && buttonState3==HIGH && buttonState4== 0 && buttonState5 == 0) {
    // turn LED on:(M)
   digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin4, HIGH);
     digitalWrite(ledPin5, HIGH);
    delay(dval);
    digitalWrite(ledPin5, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin2, LOW);
    delay(dval);
     lcd.clear();
    lcd.print("m");
Serial.print("m");
  } 
   else  if (buttonState==HIGH && buttonState1== 0 && buttonState2==HIGH && buttonState3==HIGH && buttonState4==HIGH && buttonState5 == 0 ) {
    //(N)
     digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin4, HIGH);
     digitalWrite(ledPin5, HIGH);
       digitalWrite(ledPin6, HIGH);
    delay(dval);
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin5, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin2, LOW);
    delay(dval);
     lcd.clear();
    lcd.print("n");
    Serial.println("n");
  }
  else  if (buttonState==HIGH && buttonState1== 0 && buttonState2==HIGH && buttonState3== 0 && buttonState4==HIGH && buttonState5 == 0 ) {
    // turn LED on:(O)
   digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin4, HIGH);
     digitalWrite(ledPin6, HIGH);
    delay(dval);
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin2, LOW);
    delay(dval);
     lcd.clear();
    lcd.print("o");
    Serial.println("o");
  }
   else  if (buttonState==HIGH && buttonState1==HIGH && buttonState2==HIGH && buttonState3==HIGH && buttonState4== 0 && buttonState5 == 0 ) {
    //(P)
     digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
     digitalWrite(ledPin4, HIGH);
       digitalWrite(ledPin5, HIGH);
    delay(dval);
    digitalWrite(ledPin5, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin2, LOW);
    delay(dval);
     lcd.clear();
    lcd.print("p");
    Serial.println("p");
  }
     else  if (buttonState==HIGH && buttonState1==HIGH && buttonState2==HIGH && buttonState3==HIGH && buttonState4==HIGH && buttonState5 == 0 ) {
    //(Q)
     digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
     digitalWrite(ledPin4, HIGH);
       digitalWrite(ledPin5, HIGH);
       digitalWrite(ledPin6, HIGH);
    delay(dval);
      digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin5, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin2, LOW);
    delay(dval);
     lcd.clear();
    lcd.print("q");
    Serial.println("q");
  }
   else  if (buttonState==HIGH && buttonState1==HIGH && buttonState2==HIGH && buttonState3== 0 && buttonState4==HIGH && buttonState5 == 0) {
    //(R)
     digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
     digitalWrite(ledPin4, HIGH);
       digitalWrite(ledPin6, HIGH);
    delay(dval);
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin2, LOW);
    delay(dval);
     lcd.clear();
    lcd.print("r");
    Serial.println("r");
  }
   else  if (buttonState == 0 && buttonState1==HIGH && buttonState2==HIGH && buttonState3==HIGH && buttonState4== 0 && buttonState5 == 0 ) {
    // turn LED on:(S)
         digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);
     digitalWrite(ledPin5, HIGH);
    delay(dval);
    digitalWrite(ledPin5, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin3, LOW);
    delay(dval);
     lcd.clear();
    lcd.print("s");
    Serial.println("s");
  }
  else  if (buttonState == 0 && buttonState1==HIGH && buttonState2==HIGH && buttonState3==HIGH && buttonState4==HIGH && buttonState5 == 0 ) {
    //(T)
     digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);
     digitalWrite(ledPin5, HIGH);
       digitalWrite(ledPin6, HIGH);
    delay(dval);
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin5, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin3, LOW);
    delay(dval);
     lcd.clear();
    lcd.print("t");
    Serial.println("t");
  }
     else  if (buttonState==HIGH && buttonState1== 0 && buttonState2==HIGH && buttonState3== 0 && buttonState4== 0 && buttonState5==HIGH ) {
    // turn LED on:(U)
   digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin4, HIGH);
     digitalWrite(ledPin7, HIGH);
    delay(dval);
    digitalWrite(ledPin7, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin2, LOW);
    delay(dval);
     lcd.clear();
    lcd.print("u");
    Serial.println("u");
  }
  else  if (buttonState==HIGH && buttonState1==HIGH && buttonState2==HIGH && buttonState3== 0 && buttonState4== 0 && buttonState5==HIGH ) {
    //(V)
     digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
     digitalWrite(ledPin4, HIGH);
       digitalWrite(ledPin7, HIGH);
    delay(dval);
    digitalWrite(ledPin7, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin2, LOW);
    delay(dval);
     lcd.clear();
    lcd.print("v");
    Serial.println("v");
  }
   else  if (buttonState == 0 && buttonState1==HIGH && buttonState2== 0 && buttonState3==HIGH && buttonState4==HIGH && buttonState5==HIGH ) {
    //(W)
     digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin5, HIGH);
     digitalWrite(ledPin6, HIGH);
       digitalWrite(ledPin7, HIGH);
    delay(dval);
    digitalWrite(ledPin7, LOW);
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin5, LOW);
    digitalWrite(ledPin3, LOW);
    delay(dval);
     lcd.clear();
    lcd.print("w");
    Serial.println("w");
  }
  else  if (buttonState==HIGH && buttonState1== 0 && buttonState2==HIGH && buttonState3==HIGH && buttonState4== 0 && buttonState5==HIGH ) {
    //(X)
     digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin4, HIGH);
     digitalWrite(ledPin5, HIGH);
       digitalWrite(ledPin7, HIGH);
    delay(dval);
    digitalWrite(ledPin7, LOW);
    digitalWrite(ledPin5, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin2, LOW);
    delay(dval);
     lcd.clear();
    lcd.print("x");
    Serial.println("x");
  }
   else  if (buttonState==HIGH&& buttonState1== 0 && buttonState2==HIGH && buttonState3==HIGH && buttonState4==HIGH && buttonState5 ==HIGH ) {
    //(Y)
     digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin4, HIGH);
     digitalWrite(ledPin5, HIGH);
       digitalWrite(ledPin6, HIGH);
       digitalWrite(ledPin7, HIGH);
    delay(dval);
      digitalWrite(ledPin7, LOW);
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin5, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin2, LOW);
    delay(dval);
     lcd.clear();
    lcd.print("y");
    Serial.println("y");
  }
   else  if (buttonState==HIGH && buttonState1== 0 && buttonState2==HIGH && buttonState3== 0 && buttonState4==HIGH && buttonState5==HIGH ) {
    //(Z)
     digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin4, HIGH);
     digitalWrite(ledPin6, HIGH);
       digitalWrite(ledPin7, HIGH);
    delay(dval);
    digitalWrite(ledPin7, LOW);
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin2, LOW);
    delay(dval);
     lcd.clear();
    lcd.print("z");
    Serial.println("z");
  }
  }
