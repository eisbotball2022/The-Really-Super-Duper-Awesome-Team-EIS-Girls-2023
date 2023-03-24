#include <kipr/wombat.h>
​
int main()
{
    printf("Hello World\n");
   enable_servos();
    set_servo_position(1,0);
    msleep(800);
    set_servo_position(1, 2000);
    msleep(800);
    return 0;
}
