#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char uf[2];
    printf("Informe a sigla de um estado do Brasil: ");
    gets(uf);
    switch (uf[0] + uf[1])
    {
        case 'M' + 'G':
            printf("Mineiro\n");
            break;
        case 'S' + 'P':
            printf("Paulista\n");
            break;
        case 'R' + 'J':
            printf("Carioca ou Fluminense\n");
            break;
        default:
            printf("Outros Estados\n");
            break;
    }
    printf("\n");
    system("pause");
    return 0;
}
/*
Adjetivos p�trios dos estados brasileiros
Acre � acriano
Alagoas � alagoano ou alagoense
Amap� � amapaense
Amazonas � amazonense
Bahia � baiano ou baiense
Cear� � cearense
Distrito Federal � brasiliense
Esp�rito Santo � esp�rito-santense ou capixaba
Goi�s � goiano
Maranh�o � maranhense ou maranh�o
Mato Grosso � mato-grossense
Mato Grosso do Sul � mato-grossense-do-sul ou sul-mato-grossense
Minas Gerais � mineiro ou geralista
Par� � paraense, paroara ou parauara
Para�ba � paraibano
Paran� � paranaense, paranista ou tingui
Pernambuco � pernambucano
Piau� � piauiense ou piauizeiro
Rio de Janeiro � fluminense
Rio Grande do Norte � rio-grandense-do-norte, norte-rio-grandense ou potiguar
Rio Grande do Sul � rio-grandense-do-sul, sul-rio-grandense ou ga�cho
Rond�nia � rondoniense ou rondoniano
Roraima � roraimense
Santa Catarina � catarinense, santa-catarinense, catarineta ou barriga-verde
S�o Paulo � paulista ou bandeirante
Sergipe � sergipano ou sergipense
Tocantins � tocantinense
Adjetivos p�trios das capitais brasileiras
Aracaju (Sergipe) � aracajuano ou aracajuense
Bel�m (Par�) � belenense
Belo Horizonte (Minas Gerais) � belo-horizontino
Boa Vista (Roraima) � boa-vistense
Bras�lia (Distrito Federal) � brasiliense ou candango
Campo Grande (Mato Grosso do Sul) � campo-grandense
Cuiab� (Mato Grosso) � cuiabano
Curitiba (Paran�) � curitibano
Florian�polis (Santa Catarina) � florianopolitano
Fortaleza (Cear�) � fortalezense
Goi�nia (Goi�s) � goianiense
Jo�o Pessoa (Para�ba) � pessoense
Macap� (Amap�) � macapaense
Macei� (Alagoas) � maceioense
Manaus (Amazonas) � manauense, manauara ou bar�
Natal (Rio Grande do Norte) � natalense ou papa-jerimum
Palmas (Tocantins) � palmense
Porto Alegre (Rio Grande do Sul) � porto-alegrense
Porto Velho (Rond�nia) � porto-velhense
Recife (Pernambuco) � recifense
Rio Branco (Acre) � rio-branquense
Rio de Janeiro (Rio de Janeiro) � carioca
Salvador (Bahia) � soteropolitano ou salvadorense
S�o Lu�s (Maranh�o) � s�o-luisense ou ludovicense
S�o Paulo (S�o Paulo) � paulistano
Teresina (Piau�) � teresinense
Vit�ria (Esp�rito Santo) � vitoriense */
