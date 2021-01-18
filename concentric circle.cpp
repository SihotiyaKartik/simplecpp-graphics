#include<simplecpp>

main_program{
//Write your code here
turtleSim();
/*
inner circle:- r = (360)/(pi)
outer circle:- r' = (360/pi) + 25
360*x = 2*pi*r'  => x=2.4362
*/
repeat(360){
forward(2);
left(1);
}
right(90);
penUp();
forward(25);
left(90);
penDown();
repeat(360){
forward(2.4362);
left(1);}
wait(900);
}
