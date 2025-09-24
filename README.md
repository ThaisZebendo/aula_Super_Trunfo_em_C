# Super Trunfo em C 🃏

Este projeto é uma versão simplificada do jogo **Super Trunfo**, implementada em linguagem **C**.  
O objetivo é comparar atributos de duas cartas de países para decidir qual vence em determinada categoria.

---

## 🚀 Como compilar e executar

1. Certifique-se de ter o compilador `gcc` instalado.
2. Clone este repositório ou baixe os arquivos.
3. No terminal, execute:

```bash
gcc super_trunfo.c -o super_trunfo
./super_trunfo

📖 Como jogar

Cadastre as duas cartas fornecendo os atributos:

Estado

Código

Cidade

População

Área (Km²)

PIB (em bilhões de reais)

Pontos turísticos

Após o cadastro, será exibido um menu interativo:

Escolha o atributo para comparar:
1 - População
2 - Área
3 - PIB
4 - Pontos Turísticos
5 - Densidade Demográfica (menor vence)
6 - PIB per capita
7 - Super Poder


Digite o número da opção e pressione Enter.

O programa exibirá:

O nome dos dois países

Os valores dos atributos escolhidos

O resultado da comparação (quem venceu ou se houve empate)

🏆 Regras de comparação

População, Área, PIB, Pontos Turísticos, PIB per capita, Super Poder
→ vence o maior valor.

Densidade demográfica
→ vence o menor valor.

Valores iguais resultam em empate.

🛠️ Tecnologias usadas

Linguagem C

Estruturas de controle: if-else, switch-case

Entrada e saída padrão (scanf / printf)

✍️ Autor

Projeto desenvolvido como exercício acadêmico para prática de programação em C.

Novo recurso — Comparação por Dois Atributos
Foi adicionada uma opção de jogo onde o jogador escolhe dois atributos diferentes para comparar as cartas.
Como funciona
- O programa exibe um menu com sete atributos numerados.
- O jogador insere a primeira escolha (atributo 1) e em seguida a segunda escolha (atributo 2).
- O sistema valida para que atributo1 ≠ atributo2 e mostra mensagem de erro quando são iguais.
- Cada atributo é comparado individualmente com a regra já existente (densidade demográfica: menor vence; demais: maior vence).
- Depois das comparações individuais, o programa soma os valores dos dois atributos para cada carta.
- A carta com a maior soma vence a rodada; somas iguais resultam em Empate.
O que é exibido ao final
- Nome das duas cidades (cartas).
- Nomes dos dois atributos escolhidos.
- Valores de cada atributo para cada carta.
- Resultado de cada comparação individual (vencedor ou empate).
- Soma dos dois atributos para cada carta.
- Resultado final pela soma (vencedor ou empate)

