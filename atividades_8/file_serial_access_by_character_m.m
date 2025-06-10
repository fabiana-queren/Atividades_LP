
filename = 'C:\\Documentos\\helloworld\\projects_LP\\Atividades_LP\\atividades_8\\test_file.txt';

file = fopen(filename, 'r');

if file == -1
    disp('Erro ao abrir o arquivo.');
    return;
end

while ~feof(file)
    character = fread(file, 1, 'char'); 
    fprintf('%c\n', character);         
end

fclose(file);
