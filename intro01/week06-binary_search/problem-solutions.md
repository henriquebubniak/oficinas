**cfgym102961u:**
Faça uma função para verificar se é possível fabricar t produtos em x segundos e use busca binária na resposta

**cf978c:**
Basicamente é necessário realizar um Prefix Sum em O(n) do vetor inteiro, depois realizar uma busca binária de cada val

**cf812C:**
Esse problema já é de nível médio e exige uma busca binária sobre as respostas.
Inicialmente, temos um vetor [c_1, c_2, ..., c_n], deve-se calcular como será o vetor de custos para cada i itens (i=1, i=2, ... i=k).
Assim, nossos vetores com os valores reais (considerando a fórmula passada no exercício) será:
r' = [r'_1, r'_2, ..., r'_n] para i=1.
r'' = [r''_1, r''_2, ..., r''_n] para i=2... 
E assim até chegar em i=k

Depois, para cada vetor atualizado, devemos achar qual é a soma dos k itens (poderia usar prefix sum tb), já que são os valores atualizados, devemos somar e ver qual é o menor valor possível.
Para isso, ordena-se cada vetor r, depois calcula a soma acumulada até o valor k e retorna:
sum(k) = r'_1 + r'_2 + ... + r'_k => Depois retorna sum(k)

Assim, agora vamos analisar se para aquele valor de k que escolhemos, sum(k) é MAIOR ou MENOR que nosso orçamento S. Aí entra a busca binária por uma razão específica:
Monotonicidade, isto é, se ele consegue levar k=5 itens, então significa que obviamente consegue levar k=4 itens. Porém, se não consegue levar k=9 itens, então não consegue levar k=10 itens.

Portanto, basta aplicar uma busca binária nesse vetor até achar o k ideal, note que se sum(k) < Orçamento (s), podemos salvar o valor dessa quantidade de itens, e quanto r < l, esse valor será o melhor.
**cf817c**
Se x é really big number, x+1 também é, pois a soma dos dígitos pode crescer no máximo 1. Assim, basta usar busca binária para encontrar o primeiro really big number.

**cf1742e**
Encontra o primeiro degrau que ele não pode subir usando máximo de prefixos e busca binária, e então a altura total usando soma de prefixos.

**cf1915c:**
Estamos interessados apenas na possibilidade de "montar" um quadrado a partir dos quadrados dados. 
Para isso basta realizar a soma de todos os quadrados diretamente (pois cada um tem lado 1) e avaliar se
essa soma de todos os quadrados "squares" forma um quadrado perfeito.
Para avaliar se um dado número é um quadrado perfeito, basta realizar uma busca binária. 

**cf1873e:**
A ideia é usar a busca binária para calcular se, para uma dada altura h, a água necessária é menor ou igual a x. 
Para compararmos a água necessária, basta percorrer o array de colunas de forma sequencial. 
Com isso o algoritmo terá complexidade O(nlogn) e consegue passar nos testes.
