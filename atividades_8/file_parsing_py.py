file_path = r"C:\Documentos\helloworld\projects_LP\Atividades_LP\atividades_8\test_file_2.txt"

try:
    with open(file_path, 'r', encoding='utf-8') as file:
        for line in file:
            tokens = line.strip().split(',')
            for token in tokens:
                print(token)
except FileNotFoundError:
    print("Error opening file")
