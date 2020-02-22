const byte DIR = 2;
const byte PUL = 3;

const int velocidad = 300;
const int PPR = 200; //pulsos por revolucion

void girar_derecha();
void girar_izquierda();

void setup()
{
    pinMode(DIR, OUTPUT);
    pinMode(PUL, OUTPUT);
    
}
void loop()
{
    girar_derecha(); 
    delay(1000);
    girar_izquierda();
    delay(1000);
}

void girar_derecha()
{
    digitalWrite(DIR, LOW);
    for (int i = 0; i < PPR; i++)
    {
        digitalWrite(PUL, HIGH);
        delayMicroseconds(velocidad);
        digitalWrite(PUL, LOW);
        delayMicroseconds(velocidad);
    }
}

void girar_izquierda()
{
    digitalWrite(DIR, HIGH);
    for (int i = 0; i < PPR; i++)
    {
        digitalWrite(PUL, HIGH);
        delayMicroseconds(velocidad);
        digitalWrite(PUL, LOW);
        delayMicroseconds(velocidad);
    }
}