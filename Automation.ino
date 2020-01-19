int lamp = 11;
int vent = 12;
int light = 7;
int pc = 6;

int received = 0;
int light_state = 0;
int vent_state =0;
int pc_state = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(lamp,OUTPUT);
  pinMode(vent,OUTPUT);
  pinMode(light,OUTPUT);
  pinMode(pc,OUTPUT);
  

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
   if(vent_state == 0 && received =='a')
  {
    digitalWrite(light,HIGH);
    vent_state = 1;
    received = 0;
    
  }
  if(vent_state ==1 && received =='a')
  {
    digitalWrite(light,LOW);
    vent_state =0;
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
