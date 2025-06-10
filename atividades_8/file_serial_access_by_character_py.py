filename = r"C:\Documentos\helloworld\projects_LP\Atividades_LP\atividades_8\test_file.txt"  
try:
    with open(filename, 'r', encoding='utf-8') as file:
        while True:
            character = file.read(1)
            if not character:
                break
            print(character)
except FileNotFoundError:
    print("Error opening the file.")
