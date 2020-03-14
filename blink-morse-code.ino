// ------------------------------------
// Blink words on an LED in Morse Code
// ------------------------------------

// Constant for Morse Unit length/duration
#define morseUnit 500

// Variables
int led1 = D6; // Wire a red LED to this pin as in the Argon examples
int led2 = D7; // This one is the little blue in-built LED on the Argon board next to the USB jack. Use this one for the Morse Code blinks

//Morse Code variables
// If the duration of a dot is taken to be one unit then that of a dash is three units.
//int morseUnit = 500;

int dot = 1 * morseUnit;
int dash = 3 * morseUnit;

int compSpace = 1 * morseUnit; // The space between the components of one character is one unit
int charSpace = 3 * morseUnit;  // The space between characters is three units
int wordSpace = 7 * morseUnit;  // The space between words is seven units

// Input string to blink repeatedly in Morse Code
char MorseString[] = "Brigette"; // My first name

// The setup program
void setup() {
    
   // pin configuration
   pinMode(led1, OUTPUT);
   pinMode(led2, OUTPUT);

   // make sure both LEDs are off when we start:
   digitalWrite(led1, LOW);
   digitalWrite(led2, LOW);

}

// The main program
void loop() {
  
   // for now just blink one of the leds, blink the red led on D6
    char strChar;
   
    for (int i = 0; i < arraySize(MorseString); i++ ) {
        
          strChar = MorseString[i];
          blinkChar(strChar);
          
          if ( i < arraySize(MorseString) ) {
            delay(charSpace);
          }
          else {
            delay(wordSpace);
          }
       }
   
}

// Function for a Dash 'Blink'
void blink(int dotdash) {
   // turn on
   digitalWrite(led2, HIGH);
   // keep on for a dash
   delay(dotdash);
   // turn off
   digitalWrite(led2, LOW);
   // keep off for a component space
}

/* 
   Function to blink a certain passed in letter. Char doesn't use the string function so make sure == Uppper or == Lower
   if the MorseString char passed to the function is not a defined Morse letter/char then a Morse charSpace is 'blinked'
*/
void blinkChar(char strChar) {
    
    if (strChar == 'A' or strChar == 'a') {
        blink(dot);
        delay(compSpace);        
        blink(dash);        
    }
    else if (strChar == 'B' or strChar == 'b') {
        blink(dash); 
        delay(compSpace);
        blink(dot);
        delay(compSpace);
        blink(dot);
        delay(compSpace);
        blink(dot);      
    }
    else if (strChar == 'C' or strChar == 'c') {
        blink(dash); 
        delay(compSpace);
        blink(dot);
        delay(compSpace);
        blink(dash);
        delay(compSpace);
        blink(dot);
    }
    else if (strChar == 'D' or strChar == 'd') {
        blink(dash);
        delay(compSpace);
        blink(dot);
        delay(compSpace);
        blink(dot);
    }
    else if (strChar == 'E' or strChar == 'e') {
        blink(dot);
    }
    else if (strChar == 'F' or strChar == 'f') {
        blink(dot);
        delay(compSpace);
        blink(dot);
        delay(compSpace);
        blink(dash);
        delay(compSpace);
        blink(dot);
    }
    else if (strChar == 'G' or strChar == 'g') {
        blink(dash);
        delay(compSpace);
        blink(dash);
        delay(compSpace);
        blink(dot);
    }
    else if (strChar == 'H' or strChar == 'h') {
        blink(dot);
        delay(compSpace);
        blink(dot);
        delay(compSpace);
        blink(dot);
        delay(compSpace);
        blink(dot);
    }
    else if (strChar == 'I' or strChar == 'i') {
        blink(dot);
        delay(compSpace);
        blink(dot);
    } 
    else if (strChar == 'J' or strChar == 'j') {
        blink(dot);
        delay(compSpace);
        blink(dash);
        delay(compSpace);
        blink(dash);
        delay(compSpace);
        blink(dash);
    }
    else if (strChar == 'J' or strChar == 'j') {
        blink(dot);
        delay(compSpace);
        blink(dash);
        delay(compSpace);
        blink(dash);
        delay(compSpace);
        blink(dash);
    } 
    else if (strChar == 'L' or strChar == 'l') {
        blink(dot);
        delay(compSpace);
        blink(dash);
        delay(compSpace);
        blink(dot);
        delay(compSpace);
        blink(dot);
    } 
    else if (strChar == 'M' or strChar == 'm') {
        blink(dash);
        delay(compSpace);
        blink(dash);
    } 
    else if (strChar == 'N' or strChar == 'n') {
        blink(dash);
        delay(compSpace);
        blink(dot);
    } 
    else if (strChar == 'O' or strChar == 'o') {
        blink(dash);
        delay(compSpace);
        blink(dash);
        delay(compSpace);
        blink(dash);
    } 
    else if (strChar == 'P' or strChar == 'p') {
        blink(dot);
        delay(compSpace);
        blink(dash);
        delay(compSpace);
        blink(dash);
        delay(compSpace);
        blink(dot);
    } 
    else if (strChar == 'Q' or strChar == 'q') {
        blink(dash);
        delay(compSpace);
        blink(dash);
        delay(compSpace);
        blink(dot);
        delay(compSpace);
        blink(dash);
    } 
    else if (strChar == 'R' or strChar == 'r') {
        blink(dot);
        delay(compSpace);
        blink(dash);
        delay(compSpace);
        blink(dot);        
    }
    else if (strChar == 'S' or strChar == 's') {
        blink(dot); 
        delay(compSpace);
        blink(dot);  
        delay(compSpace);
        blink(dot);
    }
    else if (strChar == 'T' or strChar == 't') {
        blink(dash);
    }
    else if (strChar == 'U' or strChar == 'u') {
        blink(dot); 
        delay(compSpace);
        blink(dot); 
        delay(compSpace);
        blink(dash);
    } 
    else if (strChar == 'V' or strChar == 'v') {
        blink(dot);
        delay(compSpace);
        blink(dot);
        delay(compSpace);
        blink(dot);
        delay(compSpace);
        blink(dash);        
    } 
    else if (strChar == 'W' or strChar == 'w') {
        blink(dot);
        delay(compSpace);
        blink(dash);
        delay(compSpace);
        blink(dash);
    } 
    else if (strChar == 'X' or strChar == 'x') {
        blink(dash);
        delay(compSpace);
        blink(dot); 
        delay(compSpace);
        blink(dot);
        delay(compSpace);
        blink(dash);
    } 
    else if (strChar == 'Y' or strChar == 'y') {
        blink(dash);
        delay(compSpace);
        blink(dot); 
        delay(compSpace);
        blink(dash);
        delay(compSpace);
        blink(dash);
    } 
    else if (strChar == 'Z' or strChar == 'z') {
        blink(dash);
        delay(compSpace);
        blink(dash);
        delay(compSpace);
        blink(dot); 
        delay(compSpace);
        blink(dot);
    } 
    else {
        delay(charSpace);
    }
}

