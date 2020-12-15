int I[8] = {2, 3, 4, 5, 6, 7, 8, 9};
int L[2] = {10,11};
int D[100];
float ampli_t;
float ampli_s;
int x = 'e';
int y = 0;
int w = 0;

int w2 = 0;// By Mr
int w3 = 0;
float w4;

int i = 0;
int i_ramp = 0;
int j = 0;
int a = 0;
int n=0;
int b,m;
int g1=0;
int c=0;
int r4=0;
int r5='e';
int r1;
float r2;
float o1;
float w1,p;
float t[10];
unsigned long k1;
unsigned long k2;
unsigned long kt;
unsigned long k3;
unsigned long k4;
unsigned long kk;
void setup() {
 Serial.begin(250000);
  pinMode(I[0], OUTPUT);
  pinMode(I[1], OUTPUT);
  pinMode(I[2], OUTPUT);
  pinMode(I[3], OUTPUT);
  pinMode(I[4], OUTPUT);
  pinMode(I[5], OUTPUT);
  pinMode(I[6], OUTPUT);
  pinMode(I[7], OUTPUT);
  pinMode(L[0], OUTPUT);
  pinMode(L[1], OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  digitalWrite(I[0], HIGH);
  digitalWrite(I[1], LOW);
  digitalWrite(I[2], LOW);
  digitalWrite(I[3], LOW);
  digitalWrite(I[4], LOW);
  digitalWrite(I[5], LOW);
  digitalWrite(I[6], LOW);
  digitalWrite(I[7], LOW);
  digitalWrite(L[0], LOW);
  digitalWrite(L[1], LOW);
  digitalWrite(13,LOW);
}
void loop() {
  digitalWrite(12,LOW);
  if(w!=0){
    switch(x){
      case 't' :{
        for(i=0;i<r1;i++){
		  //if(g1!=0){
			  Serial.print("p");Serial.print(" "); 
			  Serial.print(r1);
			  Serial.print("\n"); 
          //for(i=0;i<r1+5;i++){
                ampli_t=(((float)g1)*(sin(i/r2*2*3.14159))+128.0); 
				t[0]=(float)ampli_t;
          
                if (i==m) {
					y = analogRead(1);
					Serial.println(y);
					o1=((float)y)/1000.0*5.0/220.0*1580.0/(((float)g1)*0.016);
					Serial.println(o1);
						if (y >363) {
						digitalWrite(12, HIGH);
						x = 'e';
                }
                else {
                    digitalWrite(12, LOW);
                }
          }
           digitalWrite(L[0], HIGH);
           digitalWrite(L[1], HIGH);
           b=i;
            for (a = 0; a < 8; a++) {       /*转换二进制*/
                t[a + 1] = t[a] / 2;
                j = ((int)t[a]) % 2;
                if (j == 0) {
                   digitalWrite(I[7 - a], LOW);
                }
               else {
                   digitalWrite(I[7 - a], HIGH);
               }
            }
            i = b;
            digitalWrite(L[0], LOW);
            digitalWrite(L[1], LOW);
		  }
        
		  //}
        if(x!='e'){
          x=Serial.read();
          if(x=='e'){
          }
          else{
            x='t';
          }
        }
		
/*          digitalWrite(I[0], HIGH);
         digitalWrite(I[1], LOW);
         digitalWrite(I[2], LOW);
         digitalWrite(I[3], LOW);
         digitalWrite(I[4], LOW);
         digitalWrite(I[5], LOW);
         digitalWrite(I[6], LOW);
         digitalWrite(I[7], LOW);
         digitalWrite(L[0], LOW);
         digitalWrite(L[1], LOW);*/
		 Serial.print("break?");
          break; 
           
         
      }
      case's' :{
              c=c+1;
                for(i = 0;i < r1; i++) {
                   p=((float)i)/((float)r1);
				   if (g1 != 0){
				   ampli_s = (int)(((float)g1)*(sin(i/r2*2*3.14159))+128.0);
				   t[0] = p*(((float)D[i])-128.0)+128.0;
				   
                  
                   if(i==m){
                        y=analogRead(1);
                        if(y >360){
                           digitalWrite(13,LOW);
                           x='e';
                           r4=r4+1;
                        }
                        else{
                          digitalWrite(13,HIGH);
                        }
                   }
                   digitalWrite(L[0], HIGH);
                   digitalWrite(L[1], HIGH);
                   b=i;
                   for (a = 0; a < 8; a++) {
                        t[a + 1] = t[a] / 2;
                        j = ((int)t[a]) % 2;
                        if (j == 0) {
                             digitalWrite(I[7 - a], LOW);
                        }
                        else {
                            digitalWrite(I[7 - a], HIGH);
                        }
                  }
                   i=b;
                   digitalWrite(L[0], LOW);
                   digitalWrite(L[1], LOW);
				   }
                 }
                 for(n=0;n<4;n++){
                 for(i = 0;i < r1; i++) {
                   t[0] = ((float)D[i]);
                   if(i==m){
                        y=analogRead(1);
                        if(y >354){
                           digitalWrite(13,LOW);
                           x='e';
                        }
                        else{
                           digitalWrite(13,HIGH);
                        }
                   }
                   digitalWrite(L[0], HIGH);
                   digitalWrite(L[1], HIGH);
                   b=i;
                   for (a = 0; a < 8; a++) {
                        t[a + 1] = t[a] / 2;
                        j = ((int)t[a]) % 2;
                        if (j == 0) {
                             digitalWrite(I[7 - a], LOW);
                        }
                        else {
                            digitalWrite(I[7 - a], HIGH);
                        }
                  }
                   i=b;
                   digitalWrite(L[0], LOW);
                   digitalWrite(L[1], LOW);
                 }
                 }
                    x='e';
                    digitalWrite(I[0], HIGH);
                    digitalWrite(I[1], LOW);
                    digitalWrite(I[2], LOW);
                    digitalWrite(I[3], LOW);
                    digitalWrite(I[4], LOW);
                    digitalWrite(I[5], LOW);
                    digitalWrite(I[6], LOW);
                    digitalWrite(I[7], LOW);
                    digitalWrite(L[0], LOW);
                    digitalWrite(L[1], LOW);
				break;
				
      }
      case 'h':{
             c=c+1;
             for  (i=0; i<r1+1; i++) {
                    t[0] = ((float)D[i]);
                    if (i==m) {
                       y = analogRead(1);
                       if (y > 354) {
                          digitalWrite(13, LOW);
                          x = 'e';
                          r4=r4+1;
                       }
                       else {
                         digitalWrite(13, HIGH);
                      }
                    }
                    digitalWrite(L[0], HIGH);
                    digitalWrite(L[1], HIGH);
                    b=i;
                   for (a = 0; a < 8; a++) {
                      t[a + 1] = (t[a] / 2);
                      j = ((int)t[a]) % 2;
                      if (j == 0) {
                         digitalWrite(I[7 - a], LOW);
                     }
                     else {
                         digitalWrite(I[7 - a], HIGH);
                    }
                   }
                   i=b;
                digitalWrite(L[0], LOW);
                digitalWrite(L[1], LOW);
                }
                digitalWrite(I[0], HIGH);
                digitalWrite(I[1], LOW);
                digitalWrite(I[2], LOW);
                digitalWrite(I[3], LOW);
                digitalWrite(I[4], LOW);
                digitalWrite(I[5], LOW);
                digitalWrite(I[6], LOW);
                digitalWrite(I[7], LOW);
                digitalWrite(L[0], LOW);
                digitalWrite(L[1], LOW);
                x = 'e'; 
                break;
      }
      case'v':{
        Serial.println(c);
        c=0;  
        x='e';
        break;
      } 
      case'z':{
         Serial.println(r4);
         r4=0;;
         x='e';
        break;
      }
      case'g':{
         if(g1==0){
          g1=Serial.parseInt();
          delay(100);
		  Serial.print("ass");
		  Serial.print(" ");
		  Serial.print(g1);
         }
          if(x!='e'){
                x=Serial.read();
                if(x=='e'){
                }
                else{
                x='g';
               }
        }
         digitalWrite(I[0], HIGH);
         digitalWrite(I[1], LOW);
         digitalWrite(I[2], LOW);
         digitalWrite(I[3], LOW);
         digitalWrite(I[4], LOW);
         digitalWrite(I[5], LOW);
         digitalWrite(I[6], LOW);
         digitalWrite(I[7], LOW);
         digitalWrite(L[0], LOW);
         digitalWrite(L[1], LOW);
        break;
      }
      case'f':{
        c=c+1;
        for(i_ramp = 0;i_ramp < w3;i_ramp++){
          for(i = 0;i < r1; i++) {
                   p=(((float)i)+((float)r1) * (float)i_ramp)/(((float)r1)*w3);
				   
                  t[0] = p*(((float)D[i])-128.0)+128.0;
                   if(i==m){
                        y=analogRead(1);
                        if(y >354){
                           digitalWrite(13,LOW);
                           x='e';
                           r4=r4+1;
                        }
                        else{
                          digitalWrite(13,HIGH);
                        }
                   }
                   digitalWrite(L[0], HIGH);
                   digitalWrite(L[1], HIGH);
                   b=i;
                   for (a = 0; a < 8; a++) {
                        t[a + 1] = t[a] / 2;
                        j = ((int)t[a]) % 2;
                        if (j == 0) {
                             digitalWrite(I[7 - a], LOW);
                        }
                        else {
                            digitalWrite(I[7 - a], HIGH);
                        }
                  }
                   i=b;
                   digitalWrite(L[0], LOW);
                   digitalWrite(L[1], LOW);
                 }
        }
                 for(n=0;n < w2 - w3;n++){
                  for(i = 0;i < r1; i++) {
                     t[0] = (float)D[i];
                   if(i==m){
                        y=analogRead(1);
                        if(y >354){
                           digitalWrite(13,LOW);
                           x='e';
                           r4=r4+1;
                        }
                        else{
                          digitalWrite(13,HIGH);
                        }
                   }
                   digitalWrite(L[0], HIGH);
                   digitalWrite(L[1], HIGH);
                   b=i;
                   for (a = 0; a < 8; a++) {
                        t[a + 1] = t[a] / 2;
                        j = ((int)t[a]) % 2;
                        if (j == 0) {
                             digitalWrite(I[7 - a], LOW);
                        }
                        else {
                            digitalWrite(I[7 - a], HIGH);
                        }
                  }
                   i=b;
                   digitalWrite(L[0], LOW);
                   digitalWrite(L[1], LOW);
                 }
               }
               for(i_ramp = 0;i_ramp < w3;i_ramp++){
          for(i = 0;i < r1; i++) {
                   p=(-((float)i)+((float)r1) * (float)(w3 - i_ramp))/(((float)r1)*w3);
                  t[0] = p*(((float)D[i])-128.0)+128.0;
                   if(i==m){
                        y=analogRead(1);
                        if(y >354){
                           digitalWrite(13,LOW);
                           x='e';
                           r4=r4+1;
                        }
                        else{
                          digitalWrite(13,HIGH);
                        }
                   }
                   digitalWrite(L[0], HIGH);
                   digitalWrite(L[1], HIGH);
                   b=i;
                   for (a = 0; a < 8; a++) {
                        t[a + 1] = t[a] / 2;
                        j = ((int)t[a]) % 2;
                        if (j == 0) {
                             digitalWrite(I[7 - a], LOW);
                        }
                        else {
                            digitalWrite(I[7 - a], HIGH);
                        }
                  }
                   i=b;
                   digitalWrite(L[0], LOW);
                   digitalWrite(L[1], LOW);
                 }
        }
                 digitalWrite(I[0], HIGH);
                 digitalWrite(I[1], LOW);
                 digitalWrite(I[2], LOW);
                 digitalWrite(I[3], LOW);
                 digitalWrite(I[4], LOW);
                 digitalWrite(I[5], LOW);
                 digitalWrite(I[6], LOW);
                 digitalWrite(I[7], LOW);
                 digitalWrite(L[0], LOW);
                 digitalWrite(L[1], LOW);
                 x='e';
                 break;
      }
      case'k':{
        c=c+1;
        for(i = 0;i < r1+5;i++){
          D[i] = 256 - D[i];
        }
        for(i_ramp = 0;i_ramp < w3;i_ramp++){
          for(i = 0;i < r1; i++) {
                   p=(((float)i)+((float)r1) * (float)i_ramp)/(((float)r1)*w3);
                  t[0] = p*(((float)D[i])-128.0)+128.0;
                   if(i==m){
                        y=analogRead(1);
                        if(y >354){
                           digitalWrite(13,LOW);
                           x='e';
                           r4=r4+1;
                        }
                        else{
                          digitalWrite(13,HIGH);
                        }
                   }
                   digitalWrite(L[0], HIGH);
                   digitalWrite(L[1], HIGH);
                   b=i;
                   for (a = 0; a < 8; a++) {
                        t[a + 1] = t[a] / 2;
                        j = ((int)t[a]) % 2;
                        if (j == 0) {
                             digitalWrite(I[7 - a], LOW);
                        }
                        else {
                            digitalWrite(I[7 - a], HIGH);
                        }
                  }
                   i=b;
                   digitalWrite(L[0], LOW);
                   digitalWrite(L[1], LOW);
                 }
        }
                 for(n=0;n < w2 - w3;n++){
                  for(i = 0;i < r1; i++) {
                     t[0] = (float)D[i];
                   if(i==m){
                        y=analogRead(1);
                        if(y >354){
                           digitalWrite(13,LOW);
                           x='e';
                           r4=r4+1;
                        }
                        else{
                          digitalWrite(13,HIGH);
                        }
                   }
                   digitalWrite(L[0], HIGH);
                   digitalWrite(L[1], HIGH);
                   b=i;
                   for (a = 0; a < 8; a++) {
                        t[a + 1] = t[a] / 2;
                        j = ((int)t[a]) % 2;
                        if (j == 0) {
                             digitalWrite(I[7 - a], LOW);
                        }
                        else {
                            digitalWrite(I[7 - a], HIGH);
                        }
                  }
                   i=b;
                   digitalWrite(L[0], LOW);
                   digitalWrite(L[1], LOW);
                 }
               }
               for(i_ramp = 0;i_ramp < w3;i_ramp++){
          for(i = 0;i < r1; i++) {
                   p=(-((float)i)+((float)r1) * (float)(w3 - i_ramp))/(((float)r1)*w3);
                  t[0] = p*(((float)D[i])-128.0)+128.0;
                   if(i==m){
                        y=analogRead(1);
                        if(y >354){
                           digitalWrite(13,LOW);
                           x='e';
                           r4=r4+1;
                        }
                        else{
                          digitalWrite(13,HIGH);
                        }
                   }
                   digitalWrite(L[0], HIGH);
                   digitalWrite(L[1], HIGH);
                   b=i;
                   for (a = 0; a < 8; a++) {
                        t[a + 1] = t[a] / 2;
                        j = ((int)t[a]) % 2;
                        if (j == 0) {
                             digitalWrite(I[7 - a], LOW);
                        }
                        else {
                            digitalWrite(I[7 - a], HIGH);
                        }
                  }
                   i=b;
                   digitalWrite(L[0], LOW);
                   digitalWrite(L[1], LOW);
                 }
        }
                 digitalWrite(I[0], HIGH);
                 digitalWrite(I[1], LOW);
                 digitalWrite(I[2], LOW);
                 digitalWrite(I[3], LOW);
                 digitalWrite(I[4], LOW);
                 digitalWrite(I[5], LOW);
                 digitalWrite(I[6], LOW);
                 digitalWrite(I[7], LOW);
                 digitalWrite(L[0], LOW);
                 digitalWrite(L[1], LOW);
                  for(i = 0;i < r1+5;i++){
                   D[i] = 256 - D[i];
                  } 
                 x='e';
                 break;
      }
      case'x':{
        x=x+1;
          for(i = 0;i < r1; i++) {
                   p=((float)i)/(((float)r1)*5.0);
                  t[0] = p*(((float)D[i])-128.0)+128.0;
                   if(i==m){
                        y=analogRead(1);
                        if(y >354){
                           digitalWrite(13,LOW);
                           x='e';
                           r4=r4+1;
                        }
                        else{
                          digitalWrite(13,HIGH);
                        }
                   }
                   digitalWrite(L[0], HIGH);
                   digitalWrite(L[1], HIGH);
                   b=i;
                   for (a = 0; a < 8; a++) {
                        t[a + 1] = t[a] / 2;
                        j = ((int)t[a]) % 2;
                        if (j == 0) {
                             digitalWrite(I[7 - a], LOW);
                        }
                        else {
                            digitalWrite(I[7 - a], HIGH);
                        }
                  }
                   i=b;
                   digitalWrite(L[0], LOW);
                   digitalWrite(L[1], LOW);
                 }
                 for(i = 0;i < r1; i++) {
                   p=(((float)i)+((float)r1))/(((float)r1)*5.0);
                  t[0] = p*(((float)D[i])-128.0)+128.0;
                   if(i==m){
                        y=analogRead(1);
                        if(y >354){
                           digitalWrite(13,LOW);
                           x='e';
                           r4=r4+1;
                        }
                        else{
                          digitalWrite(13,HIGH);
                        }
                   }
                   digitalWrite(L[0], HIGH);
                   digitalWrite(L[1], HIGH);
                   b=i;
                   for (a = 0; a < 8; a++) {
                        t[a + 1] = t[a] / 2;
                        j = ((int)t[a]) % 2;
                        if (j == 0) {
                             digitalWrite(I[7 - a], LOW);
                        }
                        else {
                            digitalWrite(I[7 - a], HIGH);
                        }
                  }
                   i=b;
                   digitalWrite(L[0], LOW);
                   digitalWrite(L[1], LOW);
                 }
                 for(i = 0;i < r1; i++) {
                   p=(((float)i)+((float)r1)*2.0)/(((float)r1)*5.0);
                  t[0] = p*(((float)D[i])-128.0)+128.0;
                   if(i==m){
                        y=analogRead(1);
                        if(y >354){
                           digitalWrite(13,LOW);
                           x='e';
                           r4=r4+1;
                        }
                        else{
                          digitalWrite(13,HIGH);
                        }
                   }
                   digitalWrite(L[0], HIGH);
                   digitalWrite(L[1], HIGH);
                   b=i;
                   for (a = 0; a < 8; a++) {
                        t[a + 1] = t[a] / 2;
                        j = ((int)t[a]) % 2;
                        if (j == 0) {
                             digitalWrite(I[7 - a], LOW);
                        }
                        else {
                            digitalWrite(I[7 - a], HIGH);
                        }
                  }
                   i=b;
                   digitalWrite(L[0], LOW);
                   digitalWrite(L[1], LOW);
                 }
                 for(i = 0;i < r1; i++) {
                   p=(((float)i)+((float)r1)*3.0)/(((float)r1)*5.0);
                  t[0] = p*(((float)D[i])-128.0)+128.0;
                   if(i==m){
                        y=analogRead(1);
                        if(y >354){
                           digitalWrite(13,LOW);
                           x='e';
                           r4=r4+1;
                        }
                        else{
                          digitalWrite(13,HIGH);
                        }
                   }
                   digitalWrite(L[0], HIGH);
                   digitalWrite(L[1], HIGH);
                   b=i;
                   for (a = 0; a < 8; a++) {
                        t[a + 1] = t[a] / 2;
                        j = ((int)t[a]) % 2;
                        if (j == 0) {
                             digitalWrite(I[7 - a], LOW);
                        }
                        else {
                            digitalWrite(I[7 - a], HIGH);
                        }
                  }
                   i=b;
                   digitalWrite(L[0], LOW);
                   digitalWrite(L[1], LOW);
                 }
                 for(i = 0;i < r1; i++) {
                   p=(((float)i)+((float)r1)*4.0)/(((float)r1)*5.0);
                  t[0] = p*(((float)D[i])-128.0)+128.0;
                   if(i==m){
                        y=analogRead(1);
                        if(y >354){
                           digitalWrite(13,LOW);
                           x='e';
                           r4=r4+1;
                        }
                        else{
                          digitalWrite(13,HIGH);
                        }
                   }
                   digitalWrite(L[0], HIGH);
                   digitalWrite(L[1], HIGH);
                   b=i;
                   for (a = 0; a < 8; a++) {
                        t[a + 1] = t[a] / 2;
                        j = ((int)t[a]) % 2;
                        if (j == 0) {
                             digitalWrite(I[7 - a], LOW);
                        }
                        else {
                            digitalWrite(I[7 - a], HIGH);
                        }
                  }
                   i=b;
                   digitalWrite(L[0], LOW);
                   digitalWrite(L[1], LOW);
                 }
                 digitalWrite(I[0], HIGH);
                 digitalWrite(I[1], LOW);
                digitalWrite(I[2], LOW);
                digitalWrite(I[3], LOW);
                digitalWrite(I[4], LOW);
                digitalWrite(I[5], LOW);
                digitalWrite(I[6], LOW);
                digitalWrite(I[7], LOW);
                digitalWrite(L[0], LOW);
                digitalWrite(L[1], LOW);
                  x = 'e';
                break;
                 
      }
      
      default : x=Serial.read();
    }
  }
  else{
    w=Serial.parseInt();
    Serial.println(w);
    if(w!=0){
      w1=((float)w)/100.0;
      // By Mr,1s刺激
      w4 = 0.957*w1 + 0.0682; //1s的周期数
      w4 = 0.8 * w4;//0.8s的周期数
      //w3 = w1 * 0.25;
      if(w4 - floor(w4) < 0.5){
        w2 = floor(w4);
      }
      else{
        w2 = ceil(w4);
      }  //w2是真正的周期数（因为w4可能不是整数，但周期是整数）
      w3 = 0;
      /*if(w3 - floor(w3) < 0.5){
        w3 = floor(w3);
      }
      else{
        w3 = ceil(w3);
      }*/
      
      r1=(int)(3024.0/w1);
      r2=3024.0/w1;
       m=r1/4;
    }
  }
}