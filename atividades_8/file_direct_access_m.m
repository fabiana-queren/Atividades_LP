% Define as datas
d1.d = 7;
d1.m = 9;
d1.a = 1999;

d2.d = 12;
d2.m = 5;
d2.a = 2024;


filename = input('Enter filename: ', 's');

% Escreve os dados no arquivo em modo binário
file = fopen(filename, 'w');  % 'w' = write
if file == -1
    error('Error! Unable to open file for writing!');
end

fwrite(file, [d1.d, d1.m, d1.a], 'int32');
fwrite(file, [d2.d, d2.m, d2.a], 'int32');
fclose(file);


file = fopen(filename, 'r');  % 'r' = read
if file == -1
    error('Error! Unable to open file for reading!');
end

data = fread(file, 6, 'int32');  % Lê 6 inteiros (2 estruturas)
fclose(file);

% Constrói as estruturas lidas
e1.a = data(3);
e1.m = data(2);
e1.d = data(1);

e2.a = data(6);
e2.m = data(5);
e2.d = data(4);

fprintf('First Date: %d/%d/%d\n', e1.a, e1.m, e1.d);
fprintf('Second Date: %d/%d/%d\n', e2.a, e2.m, e2.d);
