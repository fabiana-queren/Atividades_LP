
filename = 'C:\\Documentos\\helloworld\\projects_LP\\Atividades_LP\\atividades_8\\test_file_2.txt';

fileID = fopen(filename, 'r');

if fileID == -1
    error('Erro ao abrir o arquivo.');
end

% Lê o arquivo linha por linha
while ~feof(fileID)
    line = fgetl(fileID); % Lê uma linha como string
    if ischar(line)  % Verifica se não chegou no fim
        tokens = strsplit(line, ','); 
        for i = 1:length(tokens)
            disp(strtrim(tokens{i})); % Exibe cada item, removendo espaços
        end
    end
end

fclose(fileID);
