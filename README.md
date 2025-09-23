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
