Implemente uma função para calcular a distância média entre três pontos num único plano,
onde as coordenadas destes pontos são: (x1, y1), (x2, y2), (x3, y2);

Ex:

x1 = 1;
y1 = 2;

x2 = 3;
y2 = 4;

x3 = 5;
y3 = 6; 

Resultado = 3,77

Resolução: 
É utilizado a formula de distância entre dois pontos

D = raiz( ((xb - xa) ^ 2) + ((yb - a) ^ 2) )

Primeiro calcular a distância de X1 a X2.
D = raiz(((x2 - x1) ^ 2) + ((y2 - y1) ^ 2)) = 2,8

Depois de X2 a X3
D = raiz(((x3 - x2) ^ 2) + ((y3 - y2) ^ 2)) = 2,8

Depois faz a distância de x1 a x3
D = raiz(((x3 - x1) ^ 2) + ((y3 - y1) ^ 2)) = 5,6

Depois faz a soma das três distância e divide por 3, por 3 porque são 3 pontos e quer a media entre eles.
DM = (2,8 + 2,8 + 5,6) / 3

Dm = 3,7