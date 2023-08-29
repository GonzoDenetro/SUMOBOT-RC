//Variables
int estado = 0;
int prendido = 0;
int apagado = 0;

//MOTOR
int motor_dir_1 = 6;
int motor_dir_2 = 5;

//Botones
int boton_encendido = 2;
int boton_apagado = 3;

void setup() {
  Serial.begin(9600);
  pinMode(boton_encendido, INPUT);
  pinMode(boton_apagado, INPUT);
  
  pinMode(motor_dir_1, OUTPUT);
  pinMode(motor_dir_2, OUTPUT);
}

void loop() {
  prendido = digitalRead(boton_encendido);
  apagado = digitalRead(boton_apagado);

  if(prendido and apagado == 0){
    estado = 1;
  }
  else if (prendido == 0 and apagado == 1){
    estado = 0;
  }

  if(estado){
    digitalWrite(motor_dir_1, HIGH); 
    digitalWrite(motor_dir_2, LOW); 
    Serial.println("Prendido");
  }
  else {
    digitalWrite(motor_dir_1, LOW); 
    digitalWrite(motor_dir_2, LOW); 
  }
  

}
