#define A 3
#define B 5
#define C 6
#define D 7
#define E 8
#define F 9
#define G 10

int pines[]     = {A, B, C, D, E, F, G};

int numCERO[]   = {0, 0, 0, 0, 0, 0, 1};
int numUNO[]    = {1, 0, 0, 1, 1, 1, 1};
int numDOS[]    = {0, 0, 1, 0, 0, 1, 0};
int numTRES[]   = {0, 0, 0, 0, 1, 1, 0};
int numCUATRO[] = {1, 0, 0, 1, 1, 0, 0};
int numCINCO[]  = {0, 1, 0, 0, 1, 0, 0};
int numSEIS[]   = {0, 1, 0, 0, 0, 0, 0};
int numSIETE[]  = {0, 0, 0, 1, 1, 1, 1};
int numOCHO[]   = {0, 0, 0, 0, 0, 0, 0};
int numNUEVE[]  = {0, 0, 0, 0, 1, 0, 0};

int numA[]      = {0, 0, 0, 1, 0, 0, 0};
int numC[]      = {0, 1, 1, 0, 0, 0, 1};
int numE[]      = {0, 1, 1, 0, 0, 0, 0};
int numF[]      = {0, 1, 1, 1, 0, 0, 0};
int numH[]      = {1, 0, 0, 1, 0, 0, 0};
int numJ[]      = {1, 0, 0, 0, 0, 1, 1};

void setup()
{
  for (int i = 0; i < (sizeof(pines)/sizeof(int)); i++)
  {
	pinMode(pines[i], OUTPUT);
  }
  
  Serial.begin(9600);
}

void loop()
{
  for (int i = 0; i < (sizeof(pines)/sizeof(int)); i++)
  {
    digitalWrite(pines[i], numCERO[i]);     
  }
  
  delay(1000);
  
  for (int i = 0; i < (sizeof(pines)/sizeof(int)); i++)
  {
    digitalWrite(pines[i], numUNO[i]);     
  }
  
  delay(1000);
  
  for (int i = 0; i < (sizeof(pines)/sizeof(int)); i++)
  {
    digitalWrite(pines[i], numDOS[i]);     
  }
  
  delay(1000);
  
  for (int i = 0; i < (sizeof(pines)/sizeof(int)); i++)
  {
    digitalWrite(pines[i], numTRES[i]);     
  }
  
  delay(1000);
  
  for (int i = 0; i < (sizeof(pines)/sizeof(int)); i++)
  {
    digitalWrite(pines[i], numCUATRO[i]);     
  }
  
  delay(1000);
  
  for (int i = 0; i < (sizeof(pines)/sizeof(int)); i++)
  {
    digitalWrite(pines[i], numCINCO[i]);     
  }
  
  delay(1000);
  
  for (int i = 0; i < (sizeof(pines)/sizeof(int)); i++)
  {
    digitalWrite(pines[i], numSEIS[i]);     
  }
  
  delay(1000);
  
  for (int i = 0; i < (sizeof(pines)/sizeof(int)); i++)
  {
    digitalWrite(pines[i], numSIETE[i]);     
  }
  
  delay(1000);
  
  for (int i = 0; i < (sizeof(pines)/sizeof(int)); i++)
  {
    digitalWrite(pines[i], numOCHO[i]);     
  }
  
  delay(1000);
  
  for (int i = 0; i < (sizeof(pines)/sizeof(int)); i++)
  {
    digitalWrite(pines[i], numNUEVE[i]);     
  }
  
  delay(1000);
  
  for (int i = 0; i < (sizeof(pines)/sizeof(int)); i++)
  {
    digitalWrite(pines[i], numA[i]);     
  }
  
  delay(1000);
  
  for (int i = 0; i < (sizeof(pines)/sizeof(int)); i++)
  {
    digitalWrite(pines[i], numC[i]);     
  }
  
  delay(1000);
  
  for (int i = 0; i < (sizeof(pines)/sizeof(int)); i++)
  {
    digitalWrite(pines[i], numE[i]);     
  }
  
  delay(1000);
  
  for (int i = 0; i < (sizeof(pines)/sizeof(int)); i++)
  {
    digitalWrite(pines[i], numF[i]);     
  }
  
  delay(1000);
  
  for (int i = 0; i < (sizeof(pines)/sizeof(int)); i++)
  {
    digitalWrite(pines[i], numH[i]);     
  }
  
  delay(1000);
  
  for (int i = 0; i < (sizeof(pines)/sizeof(int)); i++)
  {
    digitalWrite(pines[i], numJ[i]);     
  }
  
  delay(1000);
}