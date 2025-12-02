# Automação Residencial 8 Canais com ESP32 (Serial)

![ESP32](https://img.shields.io/badge/ESP32-000000?style=for-the-badge&logo=espressif)
![Status](https://img.shields.io/badge/Status-Funcionando%20100%25-00ff88?style=for-the-badge)

Projeto inicial de automação com **8 relés** controlados pelo Serial Monitor.  
Próximos passos já planejados: interface web + app Android.

## Demonstração em vídeo / Wokwi + foto
https://wokwi.com/projects/449183118725826561
<img width="951" height="645" alt="image" src="https://github.com/user-attachments/assets/388a1654-e1d2-4a0c-a3da-4f4e7b8f6532" />

## Como usar (super simples)
1. Abra o Serial Monitor (115200 baud)
2. Digite on - off e o número do canal (1 a 8) e aperte Enter
3. O relé liga/desliga e aparece a confirmação

## Componentes
- ESP32 qualquer modelo
- 8× módulo relé 5V (ativo em LOW)
- Fonte externa 5V para os relés

## Pinagem
| Canal | GPIO |
|-------|------|
| 1     | 4    |
| 2     | 5    |
| 3     | 18   |
| 4     | 19   |
| 5     | 21   |
| 6     | 22   |
| 7     | 23   |
| 8     | 25   |

## Próximas evoluções (já em desenvolvimento)
- [ ] Interface web bonita (já tenho o código pronto pra subir)
- [ ] Controle por aplicativo Android (MIT App Inventor)
- [ ] Integração com Alexa/Google Home

Feito por **Adam**  
Técnico em Eletrônica │ 16 anos │ Brasil  
Contato para estágio/jovem aprendiz: adamfogaca1112@gmail.com
