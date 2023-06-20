//Sertakan library Servo
#include <Servo.h>
Servo myservo;


int trig = 11;           // membuat varibel trig yang di set ke-pin 3
int echo = 12;           // membuat variabel echo yang di set ke-pin 2
long durasi, jarak;     // membuat variabel durasi dan jarak

void setup() {
  myservo.attach(9);  // servo terhubung pin 9
  
  pinMode(trig, OUTPUT);    // set pin trig menjadi OUTPUT
  pinMode(echo, INPUT);     // set pin echo menjadi INPUT
  Serial.begin(9600);       // digunakan untuk komunikasi Serial dengan komputer
}

void loop() {

  // program dibawah ini agar trigger memancarakan suara ultrasonic
  digitalWrite(trig, LOW);
  delayMicroseconds(8);
  digitalWrite(trig, HIGH);
  delayMicroseconds(8);
  digitalWrite(trig, LOW);
  delayMicroseconds(8);

  durasi = pulseIn(echo, HIGH); // menerima suara ultrasonic
  jarak = (durasi / 2) / 29.1;  // mengubah durasi menjadi jarak (cm)
  Serial.println(jarak);        // menampilkan jarak pada Serial Monitor


if(jarak <= 15)
{
  myservo.write(0);
  myservo.write(120); 
  delay(2000);
}

else{
  
  myservo.write(120); 
  myservo.write(0);
  delay(1000);  
  
}

}
