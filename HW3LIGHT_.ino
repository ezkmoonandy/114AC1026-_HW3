// 定義接腳 (根據你的電路圖：R接D3, G接D4, B接D5)
const int pinR = 3;   
const int pinG = 4;   
const int pinB = 5;   

void setup() {

  pinMode(pinR, OUTPUT);
  pinMode(pinG, OUTPUT);
  pinMode(pinB, OUTPUT);
  

  digitalWrite(pinR, LOW);
  digitalWrite(pinG, LOW);
  digitalWrite(pinB, LOW);
}

void loop() {
  digitalWrite(pinR, HIGH);
  digitalWrite(pinG, LOW);
  digitalWrite(pinB, LOW);
  delay(5000);

  // 2. 綠燈恆亮 5 秒
  digitalWrite(pinR, LOW);
  digitalWrite(pinG, HIGH);
  digitalWrite(pinB, LOW);
  delay(5000);

  // 3. 藍燈恆亮 5 秒
  digitalWrite(pinR, LOW);
  digitalWrite(pinG, LOW);
  digitalWrite(pinB, HIGH);
  delay(5000);

  // 4. 白色閃爍兩下 (紅、綠、藍全開為白光)
  for (int i = 0; i < 2; i++) {
    // 開燈 (白光)
    digitalWrite(pinR, HIGH);
    digitalWrite(pinG, HIGH);
    digitalWrite(pinB, HIGH);
    delay(300); // 亮 0.3 秒
    
    // 關燈
    digitalWrite(pinR, LOW);
    digitalWrite(pinG, LOW);
    digitalWrite(pinB, LOW);
    delay(300); // 暗 0.3 秒
  }
}