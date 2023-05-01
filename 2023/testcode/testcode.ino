char a;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial2.begin(57600);
  Serial.println("HI");
  Serial2.println("co1=1");
  Serial2.println("co2=1");

}

void loop() {
  
  if(Serial.available()>0){
    a=Serial.read();
    switch(a){
    
      case 'w':
    
        Serial.println(a);
        Serial2.println("mvtc = 3,3");
        break;
    
      case 's':
        Serial.println(a);
        Serial2.println("mvtc = 0,0");
        break;

     case 'x':
    
        Serial.println(a);
        Serial2.println("mvtc = -3,-3");
        break;
    
     case 'a':
        Serial.println(a);
        Serial2.println("mvtc = -3,3");
        break;

     case 'd':
    
        Serial.println(a);
        Serial2.println("mvtc = 3,-3");
        break;
     
      default:
      
          {break;}
      
  }
  
 }
  delay(100);
}
