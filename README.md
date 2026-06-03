O arquivo foi estruturado e formatado utilizando as melhores práticas do GitHub, incluindo badges organizadas, blocos de código com realce de sintaxe (*syntax highlighting*) e uma seção detalhada de instalação. 

Abaixo está o conteúdo gerado para visualização rápida:

```markdown
# Sistema de Notas Escolar v4.0 🚀

Este é um programa desenvolvido em **C++** para o gerenciamento, cálculo de médias e persistência de dados de desempenho escolar. O sistema permite cadastrar uma matriz dinâmica de notas por alunos e disciplinas, exibe o relatório de aprovação detalhado diretamente no console e salva as informações processadas em um arquivo de texto local.

---

## ⚙️ Funcionalidades

* **Modo de Operação Duplo:** Menu inicial interativo com opções para criar um novo relatório ou ler o último relatório salvo anteriormente.
* **Leitura Dinâmica:** Entrada customizável que suporta uma matriz flexível de até 20 alunos e até 4 disciplinas.
* **Validação de Dados:** Filtros robustos para impedir a inserção de quantidades inválidas de alunos/disciplinas e notas fora do intervalo padrão (entre 0 e 10).
* **Processamento de Médias:** Cálculo automatizado da média aritmética de cada aluno com base nas disciplinas avaliadas.
* **Persistência em Arquivo (.txt):** Gravação automática de todos os dados processados no arquivo externo `relatorio.txt` para consultas futuras, sem perda de dados ao fechar o programa.

---

## 🛠️ Tecnologias Utilizadas

* **Linguagem:** C++
* **Bibliotecas Padrão:**
    * `<iostream>`: Entrada e saída de dados via console.
    * `<string>`: Manipulação e formatação de cadeias de caracteres.
    * `<fstream>`: Leitura e escrita (fluxos de persistência) de arquivos de texto externos.

---

## 📈 Histórico de Evolução (Commits Principais)

O desenvolvimento deste projeto seguiu uma abordagem incremental mapeada através do fluxo de controle de versão:

* **Commit 1:** Estruturação da lógica base para leitura dos dados iniciais dos alunos.
* **Commit 5:** Implementação da arquitetura de persistência e leitura de arquivos (`ifstream`/`ofstream`), permitindo carregar relatórios gerados em execuções anteriores sem a necessidade de reprocessamento.

---

## 📋 Como Executar o Projeto

### Pré-requisitos
Você precisará de um compilador C++ instalado em sua máquina (como o `g++` do GCC) ou de uma IDE configurada (como *VS Code*, *Code::Blocks* ou *CLion*).

### Passo a Passo

1. **Clone o repositório:**
   ```bash
   git clone [https://github.com/seu-usuario/sistema-notas-escolar.git](https://github.com/seu-usuario/sistema-notas-escolar.git)
   cd sistema-notas-escolar