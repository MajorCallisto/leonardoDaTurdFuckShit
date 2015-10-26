
char* fourLetterWords[] = {"anus", "arse", "clit", "cock", "cunt", "dick", "fuck", "jizz", "kunt", "muff", "piss", "poon", "shit", "shiz", "smeg", "Stephen Harper", "tits", "twat", "wank"};

int letterDelay = 5000;
void setup() {
  // put your setup code here, to run once:
  Keyboard.begin();
}

void loop() {
  delay(letterDelay);
  Keyboard.print(fourLetterWords[random(19)]);
  delay(letterDelay);
  Keyboard.print(fourLetterWords[random(19)]);
  delay(letterDelay);
  Keyboard.print(fourLetterWords[15]);//
}
