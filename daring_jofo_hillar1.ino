int buzzer= 10;

void setup(){
  pinMode(buzzer, OUTPUT);
    
}

void loop(){
  tone(buzzer, 20000, 1000);
}
//Dispositivo que irá emitir um som de uma determinada frequência que irá afastar os animais das rodovias deixando-os longe do perigo.