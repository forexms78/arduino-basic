int LED =3 ;//LED를 3번핀에 연결합니다.
void setup ()
{
  pinMode(LED,OUTPUT);//3번핀에 연결된 LED를 출력으로 설정합니다.
}
void loop()
{
  int analogInput = analogRead(A0);//가변저항을 아날로그 0번핀에 연결하고 이를 입력으로 설정합니다.
  int brightness = analogInput /4;// 가변저항의 입력값(0-1023사이의 값)을 LED의밝기값(0-255)의 값으로 변경해줍니다.
  analogWrite(LED, brightness);//가변저항의 값을 LED로 보내 출력합니다.
}
