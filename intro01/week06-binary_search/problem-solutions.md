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
