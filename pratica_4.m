clc
clear all
close all

% Definir a resolução da tela
screen_width = 1600;
screen_height = 900;

% Criar uma figura para monitorar as teclas pressionadas
figure;
global esc_pressed;

while true
    if strcmp(esc_pressed, 'escape') % Se a tecla ESC foi pressionada
     esc_pressed = true;
    end
    cursor_pos = get(0, 'PointerLocation');
    x = cursor_pos(1);
    y = cursor_pos(2);


    if x >= 0 && x < 800 && y >= 0 && y < 450
        quadrante = 1;
    elseif x >= 800 && x < 1600 && y >= 0 && y < 450
        quadrante = 2;
    elseif x >= 0 && x < 800 && y >= 450 && y < 900
        quadrante = 3;
    elseif x >= 800 && x < 1600 && y >= 450 && y < 900
        quadrante = 4;
    else
        quadrante = 0; % Fora da área da tela
    end

    fprintf('Mouse Position: x=%d, y=%d\n', x, y);
    switch quadrante
        case 1
            disp('Quadrante 1');
        case 2
            disp('Quadrante 2');
        case 3
            disp('Quadrante 3');
        case 4
            disp('Quadrante 4');
        case 0
            disp('Fora da área da tela');
    end

    pause(0.1);

    % Verificar se a tecla ESC foi pressionada
    if esc_pressed
        disp('Programa encerrado!');
        break;
    end
end
