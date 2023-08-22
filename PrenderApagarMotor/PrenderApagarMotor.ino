int estado = 0;
//MOTOR
int motor_dir_1 = 6;
int motor_dir_2 = 5;

//Botones
int boton = 2;

void setup() {
  Serial.begin(9600);
  pinMode(boton, INPUT);
  
  pinMode(motor_dir_1, OUTPUT);
  pinMode(motor_dir_2, OUTPUT);
}

void loop() {
  estado = digitalRead(boton);

  if(estado == 1){
    digitalWrite(motor_dir_1, HIGH); 
    digitalWrite(motor_dir_2, LOW); 
    Serial.println("Prendido");
  }
  else{
    digitalWrite(motor_dir_1, LOW); 
    digitalWrite(motor_dir_2, LOW); 
  }

}
