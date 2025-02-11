/* Programa de capacitação EMBARCATECH
 * Unidade 4 - Microcontroladores 
 * Capítulo 7 - PWM
 * Tarefa 2 - Aula Síncrona 06/02/2025
 *
 * Programa desenvolvido por:
 *      - Lucas Meira de Souza Leite
 * 
 * Objetivos: 
 *      - Uso do módulo PWM (Pulse Width Modulation)
 */

#include "pico/stdlib.h"
#include <stdio.h>
#include "hardware/pwm.h"

#define GPIO_SERVO 22
#define WRAP 24999   // (125.000.000Hz / (100 * 50Hz)) - 1 = 24999

void main() {
    stdio_init_all();
    
    gpio_set_function(GPIO_SERVO, GPIO_FUNC_PWM);
    uint slice_num = pwm_gpio_to_slice_num(GPIO_SERVO);
    uint channel = pwm_gpio_to_channel(GPIO_SERVO);

    pwm_config config = pwm_get_default_config();
    pwm_config_set_clkdiv(&config, 100.0f); //Divisão do clock em 100
    pwm_config_set_wrap(&config, WRAP);
    pwm_init(slice_num, &config, true);

    // Inicial
    sleep_ms(200);
    pwm_set_chan_level(slice_num, channel, 3000); // 2400 * 1.25 = 3000
    sleep_ms(5000);
        
    // Metade
    pwm_set_chan_level(slice_num, channel, 1838); // 1470 * 1.25 = 1838
    sleep_ms(5000);
        
    // Final
    pwm_set_chan_level(slice_num, channel, 625);  // 500 * 1.25 = 625
    sleep_ms(5000);

    while(true){
        for (uint32_t i = 625; i <= 3000; i+=5) {
            pwm_set_chan_level(slice_num, channel, i);
            sleep_ms(10);
        }
        for (uint32_t i = 3000; i >= 625; i-=5) {
            pwm_set_chan_level(slice_num, channel, i);
            sleep_ms(10);
        }              
    }
}