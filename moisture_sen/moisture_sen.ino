int moist= A1;

void setup() 
{
  pinMode(moist, INPUT); 
  Serial.begin(9600);
}

void loop()
{
  int val = analogRead(moist);

  Serial.print("moisture sensor ");
  Serial.println(val);
  delay(500);
  
}
