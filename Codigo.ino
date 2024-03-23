
#define pino_sinal_analogico A0

int PinoSolenoide = 10;
int valor_analogico;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
    pinMode(pino_sinal_analogico, INPUT);
    pinMode(PinoLamp,OUTPUT);               // Inicializa pino solenoide como output
    digitalWrite(PinoLamp, HIGH); // seta o pino com nivel logico baixo
}

void loop() {
  // put your main code here, to run repeatedly:
  //Le o valor do pino A0 do sensor
  valor_analogico = analogRead(pino_sinal_analogico);
 
  //Mostra o valor da porta analogica no serial monitor
  Serial.print("Porta analogica: ");
  Serial.print(valor_analogico);

    if (valor_analogico > 0 && valor_analogico < 400) {
        digitalWrite(PinoSolenoide, LOW);
    } else {
            digitalWrite(PinoSolenoide, LOW); 
            } 
    delay(900);   
}
