Int 
out1= 
2; int 
out2= 
3; int 
out3= 
4; int 
out4= 
5; 
int MOSFET=7; 
int 
val; 
void 
setup() 
{ 
Serial.begin(9600); 
pinMode(out1,OUTPUT); 
pinMode(out2,OUTPUT); 
pinMode(out3,OUTPUT); 
pinMode(out4,OUTPUT); 
pinMode(MOSFET,OUTPUT) 
; 
digitalWrite(out1,LOW); 
digitalWrite(out2,LOW); 
digitalWrite(out3,LOW); 
digitalWrite(out4,LOW); 
digitalWrite(MOSFET,LOW 
);
} 
void loop() 
{ 
if (Serial.available()) 
{ 
val = 
Serial.read();if 
(val == 'F') 
{ 
fwd(); 
} 
else if (val == 'B') 
{ 
bwk(); 
} 
else if (val == 'L') 
{ 
lft(); 
} 
else if (val == 'R') 
{ 
rgt(); 
}
else if (val == 'S') 
{ 
stp(); 
} 
else if(val=='M') 
{ 
if(digitalRead(MOSFET)==LOW 
)digitalWrite(MOSFET,HIGH); 
else 
digitalWrite(MOSFET,LOW); 
} 
else 
{ 
stp(); 
} 
} 
} 
void fwd() 
{ 
digitalWrite(out1,HIGH); 
digitalWrite(out2,LOW); 
digitalWrite(out3,HIGH); 
digitalWrite(out4,LOW); 
} 
void bwk()
{ digitalWrite(out1,LOW); 
digitalWrite(out2,HIGH 
); 
digitalWrite(out3,LOW) 
; 
digitalWrite(out4,HIGH 
); 
} 
void lft() 
{ digitalWrite(out1,LOW); 
digitalWrite(out2,LOW) 
; 
digitalWrite(out3,HIGH 
); 
digitalWrite(out4,LOW) 
; 
} 
void rgt() 
{ 
digitalWrite(out1,HIGH); 
} 
digitalWrite(out2,LOW); 
digitalWrite(out3,LOW); 
digitalWrite(out4,LOW); 
} 
void stp() 
{ 
digitalWrite(out1,LOW); 
digitalWrite(out2,LOW); 
digitalWrite(out3,LOW); 
digitalWrite(out4,LOW); 
}
