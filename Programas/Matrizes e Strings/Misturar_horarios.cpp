/ *
Problema:
- Dada uma lista de reuniões independentes e não classificadas, retorna uma lista de reuniões mescladas.

Exemplo:
- Entrada: [] reunião {{1, 2}, {2, 3}, {4, 5}}
  Resultado: [] reunião {{1, 3}, {4, 5}}

- Entrada: [] reunião {{1, 5}, {2, 3}}
  Resultado: [] reunião {{1, 5}}

Aproximação:
- Classifique a lista em ordem crescente para que as reuniões que possam ser necessárias
  fundidos estão próximos um do outro.

- Pode mesclar duas reuniões se o horário de término da primeira for maior ou
  ou igual ao horário de início do segundo.

Solução:
- Classifique a lista em ordem crescente.
- Crie uma nova lista de reuniões mescladas e considere a primeira reunião no
  lista original para ser a última mesclada.
- Repita a lista original e verifique se a última reunião combinada
  a hora de término é maior ou igual à hora de início da reunião atual.
- Se for verdade, mescle-os usando a hora de início da última reunião mesclada
  e o tempo do fim do maior.

Custo:
- O (nlogn) tempo, O (n) espaço.
- Como classificamos todas as reuniões primeiro, o tempo de execução é O (nlogn). Nós criamos uma nova
  lista de horários de reunião mescladas, portanto, o custo de espaço é O (n).


  
* /

