import yaml

# Load data from a YAML file and display it in natural language
with open("C:\\Documentos\\helloworld\\projects_LP\\Atividades_LP\\atividades_8\\pessoa.yaml", "r") as file:
    dados = yaml.safe_load(file)

# Access the data and build an output in natural language
nome = dados.get("nome")
idade = dados.get("idade")
email = dados.get("email")
telefones = dados.get("telefones", [])

# Build the description in natural language
descricao = f"{nome}\n{idade} anos\ne-mail: {email}\n"

for tel in telefones:
    tipo = tel.get("tipo")
    numero = tel.get("numero")
    descricao += f"Telefone ({tipo}): {numero}\n"
    
print(descricao)
