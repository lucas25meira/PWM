# PWM
Embarcatech: Unidade 4 - Microcontroladores / Capítulo 7 - PWM

## **Descrição**
  Este projeto foi desenvolvido como tarefa na capacitação promovida pela EmbarcaTech e demonstra o uso do módulo PWM (Pulse Width Modulation) aplicado ao microcontrolador RP2040 no ambiente de simulação Wokwi e no kit de desenvolvimento BitDogLab.

## **Funcionalidades do projeto**
- O projeto consiste em alterar a posição do 'braço' de um servomotor seguindo algumas características definidas a seguir:
- A frequência de PWM foi definida para aproximadamente 50Hz.
- O 1º ajuste do braço do servomotor é para a posição 180º com PWM em 2.400µs. Espera-se 5 segundos nesta posição.
- O 2º ajuste do braço do servomotor é para a posição 90º com PWM em 1.470µs. Espera-se 5 segundos nesta posição.
- O 3º ajuste do braço do servomotor é para a posição 0º com PWM em 500µs. Espera-se 5 segundos nesta posição.
- Por fim, o braço realizará uma movimentação periódica entre 0º e 180º, de forma suave, em virtude do ciclo ativo de ±5µs.
- De forma adicional, o mesmo codigo foi aplicado à placa BitDogLab para a visualização da variação do brilho no LED RGB Azul. (Foi necessário, portanto, modificar a GPIO 22 para a 12).

## **Requisitos pra instalação e execução**
- Ambiente de desenvolvimento VSCode configurado com Pico SDK.
- Simulador Wokwi integrado ao VSCode
- Kit de desenvolvimento BitDogLab.

## **Vídeo de demonstração**
https://photos.app.goo.gl/VUd6p4BDj5xSJnFu6
