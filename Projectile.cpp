#include<simplecpp>

main_program{
//Write your code here
initCanvas("Projectile",500,500);
int start = getClick();
Circle c1(start/65536,start%65536,10);
double vx=1,vy=-1,g=0.01;
repeat(500){
c1.move(vx,vy);
vy=vy+0.01;
wait(0.01);
}
getClick();


}
