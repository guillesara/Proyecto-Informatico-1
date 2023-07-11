#define LedR 2
#define LedG 7
#define LedB 4

#define PotR A0
#define PotG A1
#define PotB A2

#define Button 8

bool apretado = false;

void setup()
{
  pinMode(LedR, OUTPUT);
  pinMode(LedG, OUTPUT);
  pinMode(LedB, OUTPUT);
  
  pinMode(PotR, INPUT);
  pinMode(PotG, INPUT);
  pinMode(PotB, INPUT);
  
  pinMode(Button, INPUT);
  
  Serial.begin(9600);
}

void loop()
{

  int valuePotR = map(analogRead(PotR), 0, 1023, 0, 255);
  //Serial.print("Value R: ");
  //Serial.println(valuePotR);
  
  int valuePotG = map(analogRead(PotG), 0, 1023, 0, 255);
  //Serial.print("Value G: ");
  //Serial.println(valuePotG);
  
  int valuePotB = map(analogRead(PotB), 0, 1023, 0, 255);
  //Serial.print("Value B: ");
  //Serial.println(valuePotB);
  
  
  int valueButton = digitalRead(Button);
  //Serial.print("Value Button: ");
  //Serial.println(valueButton);
  
  if (!valueButton)
  {
    analogWrite(LedR, valuePotR);
  	analogWrite(LedG, valuePotG);
  	analogWrite(LedB, valuePotB);
  }
  else
  {
    analogWrite(LedR, 0);
  	analogWrite(LedG, 0);
  	analogWrite(LedB, 0);
  }
  
  Serial.print("R: ");
  Serial.print(valuePotR);
  Serial.print("; G: ");
  Serial.print(valuePotG);
  Serial.print("; B: ");
  Serial.println(valuePotB);
}