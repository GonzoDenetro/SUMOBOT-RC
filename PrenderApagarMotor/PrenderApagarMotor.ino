//Variables
int adelante = 0;
int atras = 0;

//MOTOR
int motor_dir_1 = 6;
int motor_dir_2 = 5;

int motor_2_dir_1 = 9;
int motor_2_dir_2 = 10;

//Botones
int adelante_btn = 2;
int atras_btn = 3;

void setup() {
  Serial.begin(9600);
  pinMode(adelante_btn, INPUT);
  pinMode(adelante_btn, INPUT);
  
  pinMode(motor_dir_1, OUTPUT);
  pinMode(motor_dir_2, OUTPUT);
  pinMode(motor_2_dir_1, OUTPUT);
  pinMode(motor_2_dir_2, OUTPUT);
}

void loop() {
  adelante = digitalRead(adelante_btn);
  atras = digitalRead(atras_btn);

  if(adelante and atras == 0){
    digitalWrite(motor_dir_1, HIGH); 
    digitalWrite(motor_dir_2, LOW); 
    digitalWrite(motor_2_dir_1, HIGH); 
    digitalWrite(motor_2_dir_2, LOW); 
    Serial.println("Adelante");
  }
  else if (adelante == 0 and atras == 1){
    digitalWrite(motor_dir_1, LOW); 
    digitalWrite(motor_dir_2, HIGH); 
    digitalWrite(motor_2_dir_1, LOW); 
    digitalWrite(motor_2_dir_2, HIGH); 
    Serial.println("Atras");
  }
  else{
    digitalWrite(motor_dir_1, LOW); 
    digitalWrite(motor_dir_2, LOW); 
    digitalWrite(motor_2_dir_1, LOW); 
    digitalWrite(motor_2_dir_2, LOW); 
    Serial.println("Apagado");
  }
  
}
