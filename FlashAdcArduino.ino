


int yellowpin = 9;
int redpin = 3;
int inputpin1 = A1;


void setup() {
  Serial.begin(9600);
  pinMode (redpin,OUTPUT);
  pinMode (yellowpin,OUTPUT);
  pinMode (inputpin1,INPUT);
  // put your setup code here, to run once:

}
void loop() {
  int Svalue = analogRead(A1);
  Serial.println(Svalue);
  delay(100);
  int Outputvalue = map (Svalue,0,1023,0,255);
  //analogWrite(inputpin1, Outputvalue);
  
  
 if ( Svalue<256){
  digitalWrite (redpin,LOW);
  digitalWrite (yellowpin,LOW);
 }
 if (Svalue>=256 && Svalue<512){
  digitalWrite (redpin,HIGH);
  digitalWrite (yellowpin,LOW);  
 }
 if (Svalue>=512 && Svalue<768){
  digitalWrite (redpin,LOW);
  digitalWrite (yellowpin,HIGH);
 }
 if (Svalue>=768 && Svalue<1024){
  digitalWrite (redpin,HIGH);
  digitalWrite (yellowpin,HIGH);
  
 }

 /*int R1 = analogRead(A1);
 int R2 = analogRead(A2);
 int R3 = analogRead(A3);
 int R4 = analogRead(A4);*/
 /*  
  *   
  *   if ( Svalue<R1){
  digitalWrite (redpin,LOW);
  digitalWrite (yellowpin,LOW);
 }
 if (Svalue>=R1 && Svalue<R2){
  digitalWrite (redpin,HIGH);
  digitalWrite (yellowpin,LOW);  
 }
 if (Svalue>=R2 && Svalue<R3){
  digitalWrite (redpin,LOW);
  digitalWrite (yellowpin,HIGH);
 }
 if (Svalue>=R3 && Svalue<R4){
  digitalWrite (redpin,HIGH);
  digitalWrite (yellowpin,HIGH);
  
 }
  
  // put your main code here, to run repeatedly:*/

}
