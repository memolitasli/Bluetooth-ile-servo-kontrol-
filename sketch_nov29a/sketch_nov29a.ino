//bluetooth kullanarak servo kontrolü^
#include <Servo.h> // servo kütüphanesini include ettim
Servo servo1; //sağ kanat servo icin
Servo servo2;//sol kanat servo icin
Servo servo3; // kıç servosu için
int data; //bluetoothdan gelen bilgileri okutacağim data adindaki
//değişken



void setup() {
  Serial.begin(9600);
  servo1.attach(2); //servomun hangi pine bağlı oldugnu gösterdim
  servo2.attach(4);
  servo3.attach(7);

}

void loop() {
  if(Serial.available()>0)// bluetoothdan veri gelip gelmedigini kontrol ediyorum
  {
    data = Serial.read();
    Serial.println(data);

    
    
    servo1.write(data);
    }

}
