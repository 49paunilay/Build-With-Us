int lamp = 11;
int fan = 12;
int light = 7;
int pc = 6;
// using four variables for four items .//

int received = 0;
//to store the output of bluetooth module we are using received variable//
int light_state = 0;
int fan_state =0;
int pc_state = 0;

//These tree variables store the state of items//

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(lamp,OUTPUT);
  pinMode(fan,OUTPUT);
  pinMode(light,OUTPUT);
  pinMode(pc,OUTPUT);
  //Starting Serial communication at 9600 bits and setting up the pin modes//
  

}

void loop() {
  // put your main code here, to run repeatedly:

  if(Serial.available()>0)
  {
    received = Serial.read();
  }

  if(light_state == 0 && received =='1')
  {
    digitalWrite(light,HIGH);
    light_state = 1;
    received = 0;
    
  }
  if(light_state == 1 && received =='1')
  {
    digitalWrite(light,LOW);
    light_state =0;
    received = 0;
  }
   if(fan_state == 0 && received =='a')
  {
    digitalWrite(light,HIGH);
    fan_state = 1;
    received = 0;
    
  }
  if(fan_state ==1 && received =='a')
  {
    digitalWrite(light,LOW);
    fan_state =0;
    received = 0;
  }
   if(pc_state == 0 && received =='2')
  {
    digitalWrite(light,HIGH);
    pc_state = 1;
    received = 0;
    
  }
  if(pc_state ==1 && received =='2')
  {
    digitalWrite(light,LOW);
    pc_state =0;
    received = 0;
  }
  if (received == '8')
  {
    digitalWrite(lamp,HIGH);
    
  }
  if(received =='9')
  {
    digitalWrite(lamp,LOW);
  }
}
