PI = 3.14  

def calcular_circulo(raio):
    comprimento = 2 * PI * raio
    area = PI * raio ** 2
    return comprimento, area

def calcular_retangulo(lado1, lado2):
    comprimento = 2 * (lado1 + lado2)
    area = lado1 * lado2
    return comprimento, area
    
print("Escolha uma opcao:")
print("1 - Calcular a area e o comprimento de um circulo")
print("2 - Calcular a area e o perimetro de um retangulo")

opcao = input("Digite o numero da opcao desejada: ")

if opcao == "1":
    print("\nCalculando a area e o comprimento de um circulo")
    raio = float(input("Informe o valor do raio: "))
    comprimento, area = calcular_circulo(raio)
    print(f"Comprimento: {comprimento:.2f}")
    print(f"Area: {area:.2f}")

elif opcao == "2":
    print("\nCalculando a area e o perimetro de um retangulo")
    lado1, lado2 = map(float, input("Digite os lados do retangulo (Lado1, Lado2): ").split(','))
    perimetro, area = calcular_retangulo(lado1, lado2)
    print(f"O perimetro do retangulo e: {perimetro:.2f}")
    print(f"A area do retangulo e: {area:.2f}")

else:
    print("Opcao invalida. Escolha 1 ou 2.")