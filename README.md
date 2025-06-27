-> Instruções para Executar o código Trabalho final LP:

Instalar o Visual Studio Code (VS Code):
--- Baixe em: https://code.visualstudio.com/

Instalar a extensão PlatformIO:
--- No VS Code, vá em Extensões (Ctrl+Shift+X) e procure por PlatformIO IDE.
--- Instale a extensão oficial.

Criar ou abrir o projeto PlatformIO:
--- Criar um novo projeto, caso não tenha um projeto PlatformIO, ou abrir projeto existente.
--- Dentro da pasta do projeto, localizar o arquivo platformio.ini.

Configurar o arquivo platformio.ini:
--- Adicione ou substitua o conteúdo pelo seguinte trecho:
[env:uno]
platform = atmelavr
board = uno
framework = arduino
monitor_speed = 9600

Estrutura dos códigos:
--- Os códigos .cpp devem estar na pasta src
--- Os códigos .h na pasta include

Compilar e enviar o código para a placa:
--- Pressione Ctrl + Alt + B → Compila (Build)
--- Pressione Ctrl + Alt + U → Envia para o Arduino (Upload)

Visualizar dados da luz (Serial Monitor):
--- Clique no botão de Serial Monitor (ícone plug) no canto inferior ou Pressione Ctrl + Alt + S

Requisitos de Hardware:
---Placa Arduino Uno (ou compatível)
---Sensor LDR + resistor de 10kΩ
---LED + resistor de 220Ω
---Cabos jumper e protoboard

