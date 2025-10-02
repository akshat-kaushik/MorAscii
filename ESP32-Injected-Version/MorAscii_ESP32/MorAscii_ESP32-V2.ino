void char_checker(char character);
void morse_code(char* morseChar);
void dot_morse();
void dash_morse();

#define dot dot_morse()
#define dash dash_morse()

void setup() {
  pinMode(2 , OUTPUT);
  Serial.begin(9600);
  char msg[512] = "Hello World";
  int i = 0;
  
  while(msg[i] != '\0')
  {
    char_checker(msg[i]);
    i++;
  }
}

void loop() {}

void char_checker(char character) {
  if((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z')) {
    morse_code(&character);
  }
  else {
    digitalWrite(2 , LOW);
    Serial.print("|  ");
    delay(1400);
  }
}

void morse_code(char* morseChar) {
  if(*morseChar == 'A' || *morseChar == 'a')
    {
        dot;
        dash;
        Serial.print("   ");
        delay(300);
    }
    else if(*morseChar == 'B' || *morseChar == 'b')
    {
        dash;
        dot;
        dot;
        dot;
        Serial.print("   ");
        delay(300);
    }
    else if(*morseChar == 'C' || *morseChar == 'c')
    {
        dash;
        dot;
        dash;
        dot;
        Serial.print("   ");
        delay(300);
    }
    else if(*morseChar == 'D' || *morseChar == 'd')
    {
        dash;
        dot;
        dot;
        Serial.print("   ");
        delay(300);
    }
    else if(*morseChar == 'E' || *morseChar == 'e')
    {
        dot;
        Serial.print("   ");
        delay(300);
    }
    else if(*morseChar == 'F' || *morseChar == 'f')
    {
        dot;
        dot;
        dash;
        dot;
        Serial.print("   ");
        delay(300);
    }
    else if(*morseChar == 'G' || *morseChar == 'g')
    {
        dash;
        dash;
        dot;
        Serial.print("   ");
        delay(300);
    }
    else if(*morseChar == 'H' || *morseChar == 'h')
    {
        dot;
        dot;
        dot;
        dot;
        Serial.print("   ");
        delay(300);
    }
    else if(*morseChar == 'I' || *morseChar == 'i')
    {
        dot;
        dot;
        Serial.print("   ");
        delay(300);
    }
    else if(*morseChar == 'J' || *morseChar == 'j')
    {
        dot;
        dash;
        dash;
        dash;
        Serial.print("   ");
        delay(300);
    }
    else if(*morseChar == 'K' || *morseChar == 'k')
    {
        dash;
        dot;
        dash;
        Serial.print("   ");
        delay(300);
    }
    else if(*morseChar == 'L' || *morseChar == 'l')
    {
        dot;
        dash;
        dot;
        dot;
        Serial.print("   ");
        delay(300);
    }
    else if(*morseChar == 'M' || *morseChar == 'm')
    {
        dash;
        dash;
        Serial.print("   ");
        delay(300);
    }
    else if(*morseChar == 'N' || *morseChar == 'n')
    {
        dash;
        dot;
        Serial.print("   ");
        delay(300);
    }
    else if(*morseChar == 'O' || *morseChar == 'o')
    {
        dash;
        dash;
        dash;
        Serial.print("   ");
        delay(300);
    }
    else if(*morseChar == 'P' || *morseChar == 'p')
    {
        dot;
        dash;
        dash;
        dot;
        Serial.print("   ");
        delay(300);
    }
    else if(*morseChar == 'Q' || *morseChar == 'q')
    {
        dash;
        dash;
        dot;
        dash;
        Serial.print("   ");
        delay(300);
    }
    else if(*morseChar == 'R' || *morseChar == 'r')
    {
        dot;
        dash;
        dot;
        Serial.print("   ");
        delay(300);
    }
    else if(*morseChar == 'S' || *morseChar == 's')
    {
        dot;
        dot;
        dot;
        Serial.print("   ");
        delay(300);
    }
    else if(*morseChar == 'T' || *morseChar == 't')
    {
        dash;
        Serial.print("   ");
        delay(300);
    }
    else if(*morseChar == 'U' || *morseChar == 'u')
    {
        dot;
        dot;
        dash;
        Serial.print("   ");
        delay(300);
    }
    else if(*morseChar == 'V' || *morseChar == 'v')
    {
        dot;
        dot;
        dot;
        dash;
        Serial.print("   ");
        delay(300);
    }
    else if(*morseChar == 'W' || *morseChar == 'w')
    {
        dot;
        dash;
        dash;
        Serial.print("   ");
        delay(300);
    }
    else if(*morseChar == 'X' || *morseChar == 'x')
    {
        dash;
        dot;
        dot;
        dash;
        Serial.print("   ");
        delay(300);
    }
    else if(*morseChar == 'Y' || *morseChar == 'y')
    {
        dash;
        dot;
        dash;
        dash;
        Serial.print("   ");
        delay(300);
    }
    else if(*morseChar == 'Z' || *morseChar == 'z')
    {
        dash;
        dash;
        dot;
        dot;
        Serial.print("   ");
        delay(300);
    }
}

void dot_morse()
{
    digitalWrite(2 , HIGH);
    delay(200);
    Serial.print(". ");
    digitalWrite(2 , LOW);
    delay(300);
}

void dash_morse()
{
    digitalWrite(2 , HIGH);
    delay(600);
    Serial.print("_ ");
    digitalWrite(2 , LOW);
    delay(300);
}