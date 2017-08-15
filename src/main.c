/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 * 
 * Nome: Thomás Portugal
 * RA: 187646
 */

#include <stdio.h>

int main() {

  char c1, c2;
  int i=0;

  c1 = 1;

  while (c1 != '\n') {
    c2=c1;
    scanf("%c", &c1);
    if(c1>=48&&c1<=57)
    {
      while(c1!=' ')
      {
	scanf("%c", &c1);
	if(c1==' ')
	{
	  i++;
	}
	if(((c2>=65&&c2<=90)||(c2>=97&&c2<=122))&&c1==' ')
	{
	  i++;
	}
	c2=c1;
      }
    }
    
    if(c1==' '||c1=='\n'||c1=='.'||c1==','||c1=='?'||c1=='!'||c1=='-')
    {
        if ((c2>=65&&c2<=90)||(c2>=97&&c2<=122)||(c2>=48&&c2<=57)||c2==':')
        {
            i++;
        }
    }
  }

  printf("%d",i);
  return 0;
}