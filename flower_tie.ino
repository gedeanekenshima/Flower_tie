int keyC=A0;
int keyD=A1;
int keyE=A2;
int keyF=A3;
int keyG=A4;
int keyB=A5;
int keyA=A6;

int piezo=8;
int toneC=523;
int toneD=587;
int toneE=659;
int toneF=698;
int toneG=783;
int toneB=880;
int toneA=987;

void setup(){
 pinMode(keyC,INPUT);
// digitalWrite(keyC,HIGH);
 pinMode(keyD,INPUT);
// digitalWrite(keyD,HIGH);
 pinMode(keyE,INPUT);
 digitalWrite(keyE,HIGH);
 pinMode(keyF,INPUT);
 digitalWrite(keyF,HIGH);
 pinMode(keyG,INPUT);
 digitalWrite(keyG,HIGH);
 pinMode(keyB,INPUT);
 digitalWrite(keyB,HIGH);
 pinMode(keyA,INPUT);
 digitalWrite(keyA,HIGH);
 digitalWrite(piezo,OUTPUT);
}
void loop(){

 noTone(piezo);

 while(digitalRead(keyC)==LOW){
 tone(piezo, toneC);
 }

 while(digitalRead(keyD)==LOW){
 tone(piezo, toneD);
 }

 while(digitalRead(keyE)==LOW){
 tone(piezo, toneE);
 }

 while(digitalRead(keyF)==LOW){
 tone(piezo, toneF);
 }

 while(digitalRead(keyG)==LOW){
 tone(piezo, toneG);
 }

 while(digitalRead(keyA)==LOW){
 tone(piezo, toneA);
 }

 while (digitalRead(keyB)==LOW){
 tone(piezo, toneB);
 }

} 
