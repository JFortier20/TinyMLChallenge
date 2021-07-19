
// Jared Fortier
// July 2021
// Public Domain
#include<Wire.h>
#define TCAADDR 0x70

void tcaselect(uint8_t i)
{
if (i > 7) return;
Wire.beginTransmission(TCAADDR);
Wire.write(1 << i);
Wire.endTransmission();
}

//Example for Port 0 out of 8 available ports (0 to 7)
const int MPU_addr=0x68; // I2C address of the MPU-6050
int16_t accelX,accelY,accelZ,accelX2,accelY2,accelZ2,accelX3,accelY3,accelZ3;
void setup(){
Serial.begin(115200);
Wire.begin();
tcaselect(1);
Wire.beginTransmission(MPU_addr);
Wire.write(0x6B); // PWR_MGMT_1 register
Wire.write(0); // set to zero (wakes up the MPU-6050)
Wire.endTransmission(true);

tcaselect(4;
Wire.beginTransmission(MPU_addr);
Wire.write(0x6B); // PWR_MGMT_1 register
Wire.write(0); // set to zero (wakes up the MPU-6050)
Wire.endTransmission(true);

tcaselect(1);
Wire.beginTransmission(MPU_addr);
Wire.write(0x6B); // PWR_MGMT_1 register
Wire.write(0); // set to zero (wakes up the MPU-6050)
Wire.endTransmission(true);

tcaselect(0);
Wire.beginTransmission(MPU_addr);
Wire.write(0x6B); // PWR_MGMT_1 register
Wire.write(0); // set to zero (wakes up the MPU-6050)
Wire.endTransmission(true);

tcaselect(7);
Wire.beginTransmission(MPU_addr);
Wire.write(0x6B); // PWR_MGMT_1 register
Wire.write(0); // set to zero (wakes up the MPU-6050)
Wire.endTransmission(true);
}


//----------------------------------------------------------------------------------
void loop(){
tcaselect(1);
Wire.beginTransmission(MPU_addr); 
Wire.write(0x3B);
Wire.endTransmission(false); 
Wire.requestFrom(MPU_addr,6,true);

    
accelX = Wire.read()<<8|Wire.read(); 
accelY = Wire.read()<<8|Wire.read(); 
accelZ = Wire.read()<<8|Wire.read();
   //Serial.print("Device 1: ");
   Serial.print(accelX);
   Serial.print(",");
   Serial.print(accelY);
   Serial.print(",");
   Serial.print(accelZ);
   Serial.print('\t');
   //Serial.println("");
//-----------------------------------------------------------
  // delay(10);
tcaselect(2);
Wire.beginTransmission(MPU_addr); 
Wire.write(0x3B);
Wire.endTransmission(false); 
Wire.requestFrom(MPU_addr,6,true);

    
accelX2 = Wire.read()<<8|Wire.read(); 
accelY2 = Wire.read()<<8|Wire.read(); 
accelZ2 = Wire.read()<<8|Wire.read();
   //Serial.print("Device 2: ");
   Serial.print(accelX2);
   Serial.print(",");
   Serial.print(accelY2);
   Serial.print(",");
   Serial.print(accelZ2);
   Serial.print('\t');
//---------------------------------------------------------
tcaselect(4);
Wire.beginTransmission(MPU_addr); 
Wire.write(0x3B);
Wire.endTransmission(false); 
Wire.requestFrom(MPU_addr,6,true);

    
accelX3 = Wire.read()<<8|Wire.read(); 
accelY3 = Wire.read()<<8|Wire.read(); 
accelZ3 = Wire.read()<<8|Wire.read();
   //Serial.print("Device 2: ");
   Serial.print(accelX3);
   Serial.print(",");
   Serial.print(accelY3);
   Serial.print(",");
   Serial.print(accelZ3);
   Serial.print('\t');
//--------------------------------------------------------
   tcaselect(6);
Wire.beginTransmission(MPU_addr); 
Wire.write(0x3B);
Wire.endTransmission(false); 
Wire.requestFrom(MPU_addr,6,true);

    
accelX2 = Wire.read()<<8|Wire.read(); 
accelY2 = Wire.read()<<8|Wire.read(); 
accelZ2 = Wire.read()<<8|Wire.read();
   //Serial.print("Device 2: ");
   Serial.print(accelX2);
   Serial.print(",");
   Serial.print(accelY2);
   Serial.print(",");
   Serial.print(accelZ2);
   Serial.print('\t');


//=-------------------------------------------------
   tcaselect(0);
Wire.beginTransmission(MPU_addr); 
Wire.write(0x3B);
Wire.endTransmission(false); 
Wire.requestFrom(MPU_addr,6,true);

    
accelX2 = Wire.read()<<8|Wire.read(); 
accelY2 = Wire.read()<<8|Wire.read(); 
accelZ2 = Wire.read()<<8|Wire.read();
   //Serial.print("Device 2: ");
   Serial.print(accelX2);
   Serial.print(",");
   Serial.print(accelY2);
   Serial.print(",");
   Serial.println(accelZ2);
   
//delay(10);
}
