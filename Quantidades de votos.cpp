#include <iostream>

main()

{
float pessoaA, pessoaB, pessoaC, nulo, branco, x, voto, porcN, porcB, inv, somav;

pessoaA=0; pessoaB=0; pessoaC=0; nulo=0; branco=0; somav=0; voto=0;


printf("\n1 pessoa A ");
printf("\n2 pessoa B");
printf("\n3 pessoa C");
printf("\n4 Nulo");
printf("\n5 Branco");
printf("\n0 Encerrar");
do
{
	printf("\n\nDigite sue voto: ");
	scanf("%f", &voto);
	
	if(voto==1)
	{
	pessoaA = pessoaA + 1;
	}
	
	else
	
	if(voto==2)
	{
	pessoaB = pessoaB + 1;
	}
	
	else
	
	if(voto==3)
	{
	pessoaC = pessoaC + 1;
	}
	
	else
	
	if(voto==4)
	{
	nulo = nulo + 1;
	}
	
	else
	
	if(voto==5)
	{
	branco = branco + 1;
	}
	
	else
	
	if(voto==6)
	{
	branco = branco + 1;
	}
	
	else
	
	if(voto==7)
	{
	branco = branco + 1;
	}
	
	else
	if(voto>7)
	{
	printf("\nVOTO INVALIDO!");
	inv = inv + 1;
	}
}
while(voto!=0);

somav = pessoaA + pessoaB + pessoaC + nulo + branco;

porcN=100*nulo/somav;
porcB=100*branco/somav;

printf("\nQuantidade de votos validos:%4.0f", somav);
printf("\nVotos da pessoa A: %4.0f", pessoaA);
printf("\nVotos da pessoa B: %4.0f", pessoaB);
printf("\nVotos da pessoa C: %4.0f", pessoaC);
printf("\nPorcentagem Brancos: %3.2f", porcB);
printf("\nPorcentagem nulos: %3.2f", porcN);
printf("\nVotos Invalido: %4.0f", inv);

}
