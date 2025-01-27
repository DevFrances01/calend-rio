# Calendário em C++

Este é um programa simples em C++ que implementa um calendário interativo no terminal. Ele permite que o usuário visualize o calendário de um mês específico e navegue entre os meses. O código foi desenvolvido para ser compilado e executado a partir do terminal **leia mais**:

### Observações
- O programa foi **desenvolvido e testado no Windows**.
- **No macOS e Linux, o programa não foi testado**, e a execução pode variar dependendo das configurações do sistema. Caso ocorram erros nesses sistemas, eles não foram previstos, pois não há garantia de compatibilidade completa.
- **Falsos positivos** podem ocorrer devido à execução via terminal, especialmente se a configuração do ambiente não estiver correta.

## Requisitos

### 1. Windows

- **Sistema operacional**: O programa foi desenvolvido e testado no Windows.
- **Compilador**: Para compilar e executar o programa, você pode usar o Visual Studio Code (VSCode) ou qualquer outro compilador C++ que suporte o MinGW no Windows.
- **MinGW**: É necessário ter o MinGW instalado para compilar o programa corretamente no Windows. Você pode instalar o MinGW a partir do site oficial ou via gerenciadores de pacotes como o MSYS2.
  
  **Instruções para instalar o MinGW no Windows**:
  1. Baixe o MinGW do site oficial.
 2. Após a instalação, adicione o caminho do MinGW (ex: `C:\MinGW\bin`) à variável de ambiente `PATH` do sistema.

### 2. macOS

- **Sistema operacional**: O programa pode ser executado no macOS, desde que o ambiente de compilação esteja configurado corretamente.
- **Compilador**: Para compilar e executar o programa no macOS, você pode usar:
  - **clang++** (geralmente já instalado no macOS)
  
  **Instruções para instalar o compilador no macOS**:
  1 Se necessário, instale o `clang++` via Xcode ou Homebrew.
  2. Para instalar o Xcode Command Line Tools, use:
     ```bash
     xcode-select --install
     ```
  3. Se preferir usar o Homebrew, instale o `gcc` (que inclui o `clang++`) com o seguinte comando:
     ```bash
     brew install gcc
     ```

### 3. Linux

- **Sistema operacional**: O programa pode ser executado no Linux, desde que o ambiente de compilação esteja configurado corretamente.
- **Compilador**: Para compilar e executar o programa no Linux, você pode usar:
  - **g++** (geralmente já instalado em muitas distribuições Linux).
  
  **Instruções para instalar o compilador no Linux**:
  1. Caso o `g++` não esteja instalado, use o seguinte comando para instalá-lo em distribuições baseadas no Debian (como Ubuntu):
     ```bash
     sudo apt update
     sudo apt install g++
     ```

## Como executar
1.No **windows**(Usando MinGW):
```bash
g++ -o calendario calendario.cpp
````
2.No **macOS**(Usando clang++):
```bash
clang++ -o calendario calendario.cpp
````
3.No **linux**(Usando g++):
```bash
g++ -o calendario calendario.cpp
````

###  Clonar o repositório

Clone o repositório do GitHub para o seu computador local com o seguinte comando:

```bash
git clone https://github.com/DevFrances01/calendario.git
````
-------------------------------------------------------




<div align="center">
  <img src="https://media2.giphy.com/media/v1.Y2lkPTc5MGI3NjExZnRycDh0Y3E4Z2FiMmkydjBwczIybDRicWZzemUwenFuYzQ1NmMwMiZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9cw/Sh1iCtJZEdx4PFYy4q/giphy.gif" alt="GIF" width="100" />
</div>


