#include <wiringPi.h>
#include <softPwm.h>
//usage:servo "pinNum" 1   or  servo "pinNum" 2
//if 1 servo will turn left; else servo will turn right.
int main(int argc,char*argv[])
{
  int pin=atoi(argv[1]);
  int level;
  int s;
  int t;
  int p=atoi(argv[2]);
  if(p==1){
    t=3;
  }
  else if(p==2){
    t=30;
  }
  s=t-3;
  wiringPiSetup();
  softPwmCreate(pin,0,100);
  for(level=s;level<t;level++)
  {
    softPwmWrite(pin,level);
    delay(10);
  }
}
