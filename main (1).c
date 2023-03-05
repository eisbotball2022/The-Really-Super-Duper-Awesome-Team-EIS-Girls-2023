#include <kipr/wombat.h>

int main()
{
    printf("Hello World\n");
    enable_servos();
    set_servo_position(0,2047);
    msleep(800);
    set_servo_position(0,1335);
    msleep(800);
    set_servo_position(0,1024);
    msleep(800);
    disable_servos();
    return 0;
}
