/* 
 * Jonatan Polanco
 * Dic 2020
 * Ibagué
 * Colombia
 * jonapohit19@gmail.com
 */

//Note On (144, Nota, 127)
//Note Off (144, Nota, 0)
//Control Change CC (176, Num de Control, 0)
//Program Change PC (192, Num de Prog)

int Control1 = 0;
int ControlAnt1 = 0;
int pot1 = 0;

int push1 = LOW, push2 = LOW, push3 = LOW, push4 = LOW, push5 = LOW, push6 = LOW, push7 = LOW, push8 =LOW;
int edoant1 = LOW, edoant2 = LOW, edoant3 = LOW, edoant4 = LOW, edoant5 = LOW, edoant6 = LOW, edoant7 = LOW, edoant8 = LOW;
int edo1 = 0, edo2 = 0, edo3 = 0, edo4 = 0, edo5 = 0, edo6 = 0, edo7 = 0 , edo8 = 0;
int bandera1 =0, bandera2 =0, bandera3 =0, bandera4 =0, bandera5 =0, bandera6 =0;

void setup() {
 Serial.begin(115200);
 pinMode(2, INPUT);
 pinMode(3, INPUT);
 pinMode(4, INPUT);
 pinMode(5, INPUT);
 pinMode(6, INPUT);
 pinMode(7, INPUT);
 
 pinMode(8, OUTPUT);
 pinMode(9, OUTPUT);
 pinMode(10, OUTPUT);
 pinMode(11, OUTPUT);
 pinMode(12, OUTPUT);
 pinMode(13, OUTPUT);
}

void loop(){
 push1 = digitalRead(2);
 push2 = digitalRead(3);
 push3 = digitalRead(4);
 push4 = digitalRead(5);
 push5 = digitalRead(6);
 push6 = digitalRead(7);
 pot1 = analogRead(14);
 
 Control1 = map(pot1,0,1023,0,127);

//----------PEDAL DE EXP,WHA, ETC------------------------
 //if (Control1 != ControlAnt1) {
  //Serial.write(176);
  //Serial.write(14);
  //Serial.write(Control1);
  //ControlAnt1 = Control1;
//}
  
 //---------------BOTON 1---------------------------------
 
 
if (push1 == HIGH && bandera1 ==0) {
 Serial.write(176); // Mensaje sobre el Canal 1
 Serial.write(1); // Nota, CC, PC
 Serial.write(127); // Valor On 
 digitalWrite(8, HIGH);
 digitalWrite(9, LOW);
 digitalWrite(10, LOW);
 digitalWrite(11, LOW);
 bandera1 =1;
 }

 if (push1 == LOW && bandera1 ==1) {
 Serial.write(176); 
 Serial.write(1);
 Serial.write(127); // Valor Off
 digitalWrite(8, HIGH);
 digitalWrite(9, LOW);
 digitalWrite(10, LOW);
 digitalWrite(11, LOW);
 bandera1 =0;
 }



//----------------BOTON 2---------------------------------


if (push2 == HIGH && bandera2 ==0) {
 Serial.write(176); // Mensaje sobre el Canal 1
 Serial.write(2); // Nota, CC, PC
 Serial.write(127); // Valor On 
 digitalWrite(9, HIGH);
 digitalWrite(8, LOW);
 digitalWrite(10, LOW);
 digitalWrite(11, LOW);
 bandera2 =1;
 }

 if (push2 == LOW && bandera2 ==1) {
 Serial.write(176); 
 Serial.write(2);
 Serial.write(127); // Valor Off
 digitalWrite(9, HIGH);
 digitalWrite(8, LOW);
 digitalWrite(10, LOW);
 digitalWrite(11, LOW);
 bandera2 =0;
 }


//----------------BOTON 3---------------------------------

if (push3 == HIGH && bandera3 ==0) {
 Serial.write(176); // Mensaje sobre el Canal 1
 Serial.write(3); // Nota, CC, PC
 Serial.write(127); // Valor On 
 digitalWrite(10, HIGH);
 digitalWrite(9, LOW);
 digitalWrite(8, LOW);
 digitalWrite(11, LOW);
 bandera3 =1;
 }

 if (push3 == LOW && bandera3 ==1) {
 Serial.write(176); 
 Serial.write(3);
 Serial.write(127); // Valor Off
 digitalWrite(10, HIGH);
 digitalWrite(9, LOW);
 digitalWrite(8, LOW);
 digitalWrite(11, LOW);
 bandera3 =0;
 
 }
 //----------------BOTON 4---------------------------------

if (push4 == HIGH && bandera4 ==0) {
 Serial.write(176); // Mensaje sobre el Canal 1
 Serial.write(4); // Nota, CC, PC
 Serial.write(127); // Valor On 
 digitalWrite(11, HIGH);
 digitalWrite(10, LOW);
 digitalWrite(9, LOW);
 digitalWrite(8, LOW);
 bandera4 =1;
 }

 if (push4 == LOW && bandera4 ==1) {
 Serial.write(176); 
 Serial.write(4);
 Serial.write(127); // Valor Off
 digitalWrite(11, HIGH);
 digitalWrite(10, LOW);
 digitalWrite(9, LOW);
 digitalWrite(8, LOW);
 bandera4 =0;
 
 }

//----------------BOTON 5---------------------------------

if (push5 == HIGH && bandera5 ==0) {
 Serial.write(176); // Mensaje sobre el Canal 1
 Serial.write(5); // Nota, CC, PC
 Serial.write(127); // Valor On 
 bandera5 =1;
 }

 if (push5 == LOW && bandera5 ==1) {
 Serial.write(176); 
 Serial.write(5);
 Serial.write(127); // Valor Off
 bandera5 =0;
 }

 

//--------------BOTON 6-----------------------------------


if (push6 == HIGH && bandera6 ==0) {
 Serial.write(176); // Mensaje sobre el Canal 1
 Serial.write(6); // Nota, CC, PC
 Serial.write(127); // Valor On 
 digitalWrite(11, HIGH);
 digitalWrite(10, LOW);
 digitalWrite(9, LOW);
 digitalWrite(8, LOW);
 bandera6 =1;
 }

 if (push6 == LOW && bandera6 ==1) {
 Serial.write(176); 
 Serial.write(6);
 Serial.write(127); // Valor Off
 digitalWrite(11, HIGH);
 digitalWrite(10, LOW);
 digitalWrite(9, LOW);
 digitalWrite(8, LOW);
 bandera6 =0;
 }


//--------------BOTON 7-----------------------------------
//--------------BOTON 8-----------------------------------


 
}
