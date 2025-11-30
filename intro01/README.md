# Manual das Oficinas Introdutórias do Clube de Programação

## O que são as Oficinas Introdutórias
As Oficinas Introdutórias são aulas ministradas pelo Clube de Programação com o
objetivo de introduzir iniciantes à Programação Esportiva. Cada semana, dois
integrantes da equipe de oficinas preparam uma aula de 50 minutos, e são selecionados
de 5 a 8 problemas relacionados ao tópico da aula para compor a lista de exercícios que
será feita pelos alunos, com o acompanhamento dos extensionistas do Clube de
Programação.

Na primeira edição, as aulas acontecem às sextas-feiras das 17:50 às 20:00.

Este repositório tem o objetivo de concentrar os materiais usados na aula, bem como os
problemas selecionados para cada semana. Nas reuniões gerais do CDP, são selecionados
os alunos que ofertarão as aulas da semana seguinte e os alunos que selecionarão os
problemas para aquela semana. O prazo de publicação da prévia do conteúdo da aula é 9
dias antes da aula, e o prazo para a seleção dos problemas é 2 dias antes da aula. No
dia da oficina introdutória, o líder da equipe de oficinas deve criar o contest no
codeforces com os problemas selecionados.

Para selecionar um problema, o integrante da equipe de oficinas deve criar um Pull Request neste repositório com:
1. O código do problema com o link no arquivo problem-codes.md da respectiva semana
2. Uma solução Accepted do problema no diretório solutions/. O nome do arquivo deve
estar no formato **[código_do_problema]-[nome_de_quem_resolveu].cpp** (veja a seção abaixo para mais detalhes)
3. Uma explicação escrita da solução no arquivo problem-solutions.md

Então, o link do PR deve ser enviado no grupo de whatsapp de decisões da equipe de
oficinas para que os demais integrantes revisem e aceitem o problema. Uma vez aceito, o PR será mergeado.

A seguir, será explicado como o repositório está organizado.

## Diretório da Oficina Introdutória 01
Os diretórios dessa seção deverão ser da seguinte forma:

**./week[número]-[título]**

em que
- **[número]** é um número inteiro que indica o índice da semana da oficina, sempre com dois dígitos
- **[título]** é o título da aula da semana, com palavras separadas por underscore

**Exemplo:** ./week03-complexity_and_brute_force

Existirá também o arquivo $good-problems.md$ onde poderemos salvar problemas que não se encaixam exatamente em alguma semana, mas poderão ser úteis para outras semanas futuras.
Os problemas devem ser salvos da seguinte forma:

**\*\*[código_do_problema]:\*\* [link_do_problema] - [tags_simples_de_conteúdo]** \

As tags de conteúdo são poucas palavras descrevendo o tipo de algoritmo utilizado na solução. Alguns exemplos de tags são *bruteforce, grafos, muf/dsu, segtree*.

## Dentro do diretório de cada semana

Todos os diretórios de contests terão os seguintes arquivos:

### problem-codes.md
Arquivo onde terão todos os problemas do contest, escritos em linhas diferentes, sempre indentando com alinhamento dos links e em sequência esperada para o contest real, da seguinte forma:

**\*\*[código_do_problema]:\*\* [link_do_problema]** \

Apenas para a última linha, o símbolo \\ não será escrito. Lembrar de deixar uma linha vazia ao final do arquivo.

**Exemplo:** \*\*cf1950a:\*\* https://codeforces.com/contest/1950/problem/A \

para esse arquivo, deve-se separar os problemas que serão apresentados na aula da seguinte forma:

```
[problemas_da_semana]

AULA \
[problemas_para_apresentar]
```

### problem-solutions.md
Arquivo onde terão as soluções escritas dos problemas do arquivo *problem-codes.md*. Os problemas devem estar em mesma ordem do outro arquivo e devem ter a seguinte forma:

```
\*\*[código_do_problema]\*\*

[solução_escrita]
```

A separação dos problemas segue igual aqui.

```
[problemas_da_semana]

AULA \
[problemas_para_apresentar]
```

### Diretório: solutions
Esse diretório é destinado para conter uma a duas soluções por problema da oficina.

Os arquivos de solução devem ter a seguinte nomenclatura:

**[código_do_problema]-[nome_de_quem_resolveu].cpp**

Lembremos de adequar as soluções para o nível do contest, ou seja, se o contest for introdutório, não utilizar soluções avançadas.

Lembrar de deixar uma linha vazia ao final do arquivo.

### Diretório: contents
Esse diretório é destinado para conter os materiais que serão apresentados durante a oficina e os materiais de apoio.

Pode conter um arquivo *external.md* onde contêm links para materiais externos também, mas recomenda-se que todo o material esteja incluso dentro do repositório para utilização posterior.

## Código dos problemas
Aqui descreveremos como é escrito o código dos problemas.

Para problemas do *codeforces*, o código é da forma:

**cf[número_do_link][letra_do_problema]**

**Exemplo:**
para o problema *https://codeforces.com/contest/1950/problem/A*, o código é **cf1950a**.
