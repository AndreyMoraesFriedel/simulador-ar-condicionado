<img width="400" height="150" alt="Logo_IFC_horizontal_Blumenau" src="https://github.com/user-attachments/assets/6c00f5f0-9c84-4567-82e7-5a6ba524b78f" />

## Instituto Federal Catarinense - Campus Blumenau

**Curso:** Bacharelado em Ciência da Computação (BCC)

**Disciplina:** Programação Orientada a Objetos II (POO2)

**Discente:** Andrey Moraes Friedel

Projeto desenvolvido utilizando conceitos de Programação Orientada a Objetos, ORM em C++ (ODB), banco de dados SQLite e interface gráfica em Qt para simular a necessidade de BTUs em ambientes climatizados.

---

# Sistema de Simulação e Análise de Necessidade de BTU

# Objetivo

O sistema realiza automaticamente:

- geração de cenários de teste;
- cálculo da necessidade de BTUs;
- armazenamento dos resultados em banco SQLite;
- leitura dos resultados utilizando ORM (ODB);
- visualização através de um mapa de calor animado.

O mapa de calor permite observar a influência da quantidade de pessoas e computadores sobre a necessidade de refrigeração do ambiente.

---

# Tecnologias Utilizadas

- C++
- Qt 6
- SQLite3
- ODB ORM
- CMake
- Git

---

# Estrutura do Projeto

```
ambiente/
calculos/
entrada/
equipamentos/
interface/
simulacao/

simulador.db
entrada.csv
```

---

# Compilação

Entre na pasta de build da interface:

```bash
cd interface/build
```

Configure o projeto:

```bash
cmake ..
```

Compile:

```bash
cmake --build .
```

---

# Execução

Execute o programa:

```bash
./SimuladorBTUQt
```

O sistema automaticamente:

1. gera o arquivo de entrada;
2. executa todas as simulações;
3. salva os resultados no banco SQLite;
4. abre a interface gráfica;
5. apresenta o mapa de calor animado.

---

# Banco de Dados

Caso seja necessário recriar o banco de dados:

Gerar os arquivos ORM:

```bash
odb -d sqlite ResultadoSimulacao.h
```

Gerar o schema SQL:

```bash
odb -d sqlite --generate-schema --schema-format sql ResultadoSimulacao.h
```

Criar o banco:

```bash
sqlite3 simulador.db < simulacao/ResultadoSimulacao.sql
```

---

# Estrutura da Simulação

Cada cenário considera:

- dimensões do ambiente;
- quantidade de pessoas;
- quantidade de computadores;
- quantidade de televisores;
- quantidade de celulares;
- incidência de sol direto;
- percepção térmica individual das pessoas.

Após o cálculo, o resultado é persistido no banco de dados.

---

# Mapa de Calor

O mapa de calor apresenta:

- eixo X → quantidade de computadores;
- eixo Y → quantidade de pessoas;
- cada célula representa um cenário;
- as cores representam automaticamente a intensidade da necessidade de BTUs.

A escala de cores é calculada dinamicamente utilizando os menores e maiores valores encontrados durante a simulação.

---

# Captura de Tela de uma das Simulações Realizadas
<img width="1916" height="1004" alt="resultado" src="https://github.com/user-attachments/assets/d9169902-309b-4ab0-97d8-8ec5b9292a73" />


# Vídeo de Demonstração

**YouTube**

> Veja a simulação na prática [aqui.](https://youtu.be/fdBkuh_gjbs)

