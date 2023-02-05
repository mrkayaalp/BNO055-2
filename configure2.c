#include<stdio.h>
#include<stdint.h>

void print_bit(int sonuc){
    printf("0b");
    for(int i = 7; i>=0; i--){
        if(sonuc & (1<<i))
            printf("1");
        else    
            printf("0");
    }
    printf("\n");
}
void paketle(int paket1, int paket2, int paket3,int ACC_Config){
    ACC_Config = paket1 + (paket2 << 2) + (paket3 << 5);
     print_bit(ACC_Config);
};
enum accel_G_range {
    accel_2G,
    accel_4G,
    accel_8G,
    accel_16G,
};
enum accel_Bandwitdth{
    accel_7_81Hz,
    accel_15_63Hz,
    accel_31_25Hz,
    accel_62_5Hz,
    accel_125Hz,
    accel_250Hz,
    accel_500Hz,
    accel_1000Hz,
};
enum accel_Operation_Mode{
    accel_normal,
    accel_suspend,
    accel_low_power_1,
    accel_standby,
    accel_low_power_2,
    accel_deep_suspend,
};


int main(){
    uint8_t ACC_Config;
    uint8_t accel_G_range;
    uint8_t accel_Operation_Mode;
    uint8_t accel_Bandwitdth;
    
    accel_G_range = accel_8G    ;
    accel_Bandwitdth = accel_500Hz     ;
    accel_Operation_Mode =  accel_normal ;
    
    paketle(accel_G_range, accel_Bandwitdth, accel_Operation_Mode, ACC_Config);
  
}