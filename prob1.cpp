int sum = 0;
int counter = 0;


void loop(){
if(counter<1000){
if(counter % 3 == 0 || counter % 5 == 0){
sum = counter + sum;
}
counter = counter + 1;
}
