#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "led.h"
#include "lcd.h"
#include "lcd12864.h"
u8 dis1[]="Z小旋";
int main()
{

        delay_init(168);
        lcd_GPIO_init();
				Lcd_Init();
        while(1)
        {
					/*图片显示*/
							//LCD_Display_Picture( );  //这里需要自己放入图片编码数组
							//delay_ms(2000);     //这个延时必须要有
					/*汉字显示*/
					    LCD_Display_Words(0,0,"清时明月汉时关");
              LCD_Display_Words(1,0,"万里长征人未还");
              LCD_Display_Words(2,0,"但使龙城飞将在");
              LCD_Display_Words(3,0,"不教胡马度阴山");

        }
}
