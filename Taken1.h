/*Biblioteca c++
Autor: Edson blind
data:16/05/2024
*/

//---------------------------------------------------------------------------------------------------------------
//função par ou impar
int parImpar (int num)
{
	if(num%2==0)
	    return(0);
	else
	    return(1);
}
//----------------------------------------------------------------------------------------------------------------
//função positivo negativo
int positivoNegativo (int num)
{
	if(num>=0)
	    return(0);
	else
	    return(1);
}
//----------------------------------------------------------------------------------------------------------------
//função para testar vogais
int vogal (int letra)
{
	if ((letra=='A')||(letra=='E')||(letra=='I')||(letra=='O')||(letra=='U'))
	    return(0);
	else
	    return(1);
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//função de multiplicação
float mult(float num1, float num2)
{
	return(num1*num2);
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//função de subtração
float sub(float num1, float num2)
{
	return(num1-num2);
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//função de adição
float soma(float num1, float num2)
{
	return(num1+num2);
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//função de divisão
float divi(float num1, float num2)
{
	return(num1/num2);
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//função para mandar o sinal da operação para a função
float calculo(float num1, float num2, char sinal)
{
    switch(sinal)
	{
	    case '+':
	    return (soma(num1,num2));
        break;
        
	    case '-':
        return (sub(num1,num2));
	    break;
	    
	    case '*':
        return (mult(num1,num2));
        break;
 
	    case '/':
        return (divi(num1,num2));
        break;
    }
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//função para calcular média
float calcularMedia(float nota1, float nota2, float nota3)
{
	float media;
	media=(nota1+nota2+nota3)/3;
	return(media);
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Função recursiva fatorial
int fat(int num)
{
    if(num==1)
        return 1;
    else
        return num*fat(num-1);
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Função recursiva Fibonacci
int fibo(int num)
{
    if(num==1) // se o número for igual a 1 ele vai retornar 0
        return 0;
    else
        if(num==2)// se o número for igual a 2 ele vai retornar 1
            return 1;     
        else
            return fibo(num-1)+fibo(num-2);/*caso o número seja maior que 2 ele vai pegar os 2 números antecessores ao número que o usuario escolher e somar
			                                  Exemplo: Coloque 8 no termo, então o programa irá pegar o número 7 e o número 6 e somar e então o programa irá
											  me retornar essa soma.*/
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Função recursiva Somatorio
int sum(int num)
{
    if(num==1)// se o número for 1 ele vai retornar 1
        return 1;
    else
        return num+sum(num-1);/*o programa vai somar o número dado pelo usuario ao mesmo que decrementa o mesmo numero a cada nova soma.
		                        Exemplo: o usuario deu o numero 5 então o programa vai pegar esse numero 5 e somar com 4 depois vai pegar esse resultado
								e somar com 3, e assim sucessivamente até 0*/
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//função recursiva Potencia
int potencia(int base, int expoente) 
{
    if (expoente == 0) /*se o expoente dado pelo usuário for igual a 0 o programa retorna 1*/
	    return 1;
    else 
	    return base * potencia(base, expoente - 1);/*Se o expoente for maior que 1 o programa vai multiplicar a base pelo expoente até o expoente chegar ao valor de 0.
		                                             depois disso ele vai retornar o resultado.*/
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



