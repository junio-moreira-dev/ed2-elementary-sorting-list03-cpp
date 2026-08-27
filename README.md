# ED2 — Sorting — Lista 03

Exercícios de fixação de **Estrutura de Dados II** — Algoritmos de ordenação (Bubble Sort, Selection Sort, Insertion Sort) e suas variações.

> Instituto Federal do Triângulo Mineiro — Campus Patrocínio
> Curso: Tecnologia em Análise e Desenvolvimento de Sistemas — 4º Período
> Professor: Júnio Moreira
> Data: 26/08/2026 · **Entrega: 09/09/2026**

---

## 📁 Estrutura do Projeto

```
ed2-sorting-list03-cpp/
└── src/
│   ├── Exer01_BubbleSortCountSwaps.cpp
│   ├── Exer02_SelectionSortKSmallest.cpp
│   ├── Exer03_InsertionSortKSortedCountComparisons.cpp
│   ├── Exer04_BubbleSortParitySort.cpp
│   └── Exer05_InsertionSortCountInversions.cpp
├── .gitignore
├── CMakeLists.txt
├── main.cpp
└── README.md
```

Cada arquivo `.cpp` é **autônomo** (tem sua própria `main()`) e é compilado como um executável independente. Todos seguem o mesmo padrão de três blocos:

| Bloco | Responsabilidade |
|---|---|
| **Lógica pura** | Implementa o algoritmo em si, usando STL (`vector`, `string`, etc). Não faz `cin`/`cout`. |
| `onlineJudge()` | Adaptador: lê a entrada com `cin`, chama a lógica pura, imprime com `cout`. |
| `runExer...()` | Roda os exemplos do enunciado localmente e compara com o gabarito (`[PASSOU]` / `[FALHOU]`). |

---

## 📝 Exercícios

| # | Arquivo | Problema | Técnica | Complexidade |
|---|---|---|---|---|
| 1 | `Exer01_BubbleSortCountSwaps.cpp` | Ordenar vetor crescente e contar o total de trocas | Bubble Sort (instrumentado) | O(n²) |
| 2 | `Exer02_SelectionSortKSmallest.cpp` | Selecionar os k menores elementos via k iterações do laço externo | Selection Sort (simulação parcial) | O(k·n) |
| 3 | `Exer03_InsertionSortKSortedCountComparisons.cpp` | Ordenar vetor k-ordenado e contar comparações do `while` | Insertion Sort (k-sorted, instrumentado) | O(n·k) |
| 4 | `Exer04_BubbleSortParitySort.cpp` | Pares crescentes antes de ímpares decrescentes | Bubble Sort (comparador customizado) | O(n²) |
| 5 | `Exer05_InsertionSortCountInversions.cpp` | Contar inversões via deslocamentos do Insertion Sort | Insertion Sort (contagem de inversões) | O(n²) |

<details>
<summary><strong>Detalhes de cada exercício (entrada, saída e exemplo)</strong></summary>

### 1. Contagem de Trocas no Bubble Sort
**Entrada:** N (1 ≤ N ≤ 10⁴) e o vetor `A` de N inteiros.
**Saída:** primeira linha com o vetor ordenado crescente; segunda linha com o **total de trocas** (swaps) realizadas durante todo o processo do Bubble Sort tradicional.

```
Entrada          Saída
5                1 2 3 4 5
4 3 2 1 5        6
```

### 2. Seleção dos k-Menores Elementos via Selection Sort
**Entrada:** N, k (1 ≤ k ≤ N) e o vetor `A`.
**Saída:** os **k menores elementos**, em ordem crescente, após executar **estritamente as primeiras k iterações** do laço externo do Selection Sort (usa a invariante de que, após k iterações, os k menores já estão posicionados nos índices 0..k-1).

```
Entrada              Saída
6 3                  10 13 14
29 10 14 37 13 42
```

### 3. Ordenação de Vetor Quase-Ordenado (k-Sorted) com Insertion Sort
**Entrada:** N, k (0 ≤ k ≤ N, distância máxima de cada elemento à sua posição final) e o vetor k-ordenado `A`.
**Saída:** primeira linha com o vetor totalmente ordenado crescente; segunda linha com o **total de comparações** realizadas no `while` interno do Insertion Sort.

```
Entrada              Saída
6 2                  1 2 3 4 5 6
3 2 1 5 4 6          8
```

### 4. Ordenação Paridade-Bifásica com Bubble Sort
**Entrada:** N e o vetor `A`.
**Saída:** uma única linha com o vetor reorganizado segundo o critério composto: (1) pares antes de ímpares; (2) pares em ordem **crescente** entre si; (3) ímpares em ordem **decrescente** entre si. **Deve adaptar o critério de comparação do Bubble Sort**, não usar `sort` com comparador pronto.

```
Entrada                  Saída
8                        2 4 6 8 9 5 3 1
5 2 9 8 1 6 3 4
```

### 5. Contagem de Inversões via Simulação do Insertion Sort
**Entrada:** N e o vetor `A` de inteiros positivos **distintos**.
**Saída:** um único número inteiro com a quantidade total de inversões (pares i < j com A[i] > A[j]), equivalente ao total de deslocamentos à direita executados pelo Insertion Sort.

```
Entrada          Saída
5                3
2 4 1 3 5
```

</details>

---

## 🚀 Como Executar no CLion

1. Abra o projeto e recarregue o CMake (**Reload CMake Project**, ícone de sincronizar que aparece ao editar o `CMakeLists.txt`).
2. No seletor de alvos de execução (topo da janela), escolha o exercício desejado.
3. Clique em **Run** (▶) ou **Debug** (🐞).

> **Dica:** cada arquivo alterna entre dois modos dentro do `int main()`:
> - **Modo teste local** (padrão): roda `runExer...()` com os exemplos do enunciado.
> - **Modo juiz online**: comente a chamada de `runExer...()` e descomente `onlineJudge()` antes de submeter no juiz.

```cpp
int main() {
    runExer01BubbleSortCountSwaps();  // <- modo teste local (ativo)
    // onlineJudge();                 // <- modo juiz online (comentado)
    return 0;
}
```

---

## 💻 Como Executar pelo Terminal (sem CLion)

Caso prefira compilar manualmente com `g++`:

```bash
g++ -std=c++17 -Wall -Wextra -o exer01 src/Exer01_BubbleSortCountSwaps.cpp
./exer01
```

Para testar o modo juiz online via terminal, redirecione um arquivo de entrada:

```bash
echo "5
4 3 2 1 5" | ./exer01
```

---

## ⚠️ Atenção ao enunciado

- **Questão 1** exige o Bubble Sort tradicional — conte **apenas** as trocas (swaps) entre elementos adjacentes, não confunda com número de comparações.
- **Questão 2** pede o estado após **exatamente k iterações** do laço externo do Selection Sort — não rode o algoritmo completo, apenas retorne os k primeiros elementos já posicionados.
- **Questão 3** exige contar **comparações** (não deslocamentos) feitas dentro do `while` do Insertion Sort; a propriedade k-ordenado é apenas contexto de eficiência, não precisa ser validada explicitamente.
- **Questão 4** exige adaptar a lógica de comparação do Bubble Sort para o critério de paridade composto (pares crescentes < ímpares decrescentes) — implemente a comparação manualmente, não separe em duas listas ordenadas por `sort`.
- **Questão 5** conta inversões via simulação do Insertion Sort — o vetor tem elementos **distintos**, o que simplifica a lógica de comparação (sem empates).

---

## ✅ Pré-requisitos

- Compilador C++17 ou superior (GCC, Clang ou MSVC)
- CMake ≥ 3.20
- CLion (recomendado) ou qualquer IDE/editor de sua preferência

---

## 📚 Referência

Lista de exercícios original: *Exercícios de Fixação — Estrutura de Dados II* (26/08/2026 · entrega 09/09/2026).
