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
Adjetivos pátrios dos estados brasileiros
Acre – acriano
Alagoas – alagoano ou alagoense
Amapá – amapaense
Amazonas – amazonense
Bahia – baiano ou baiense
Ceará – cearense
Distrito Federal – brasiliense
Espírito Santo – espírito-santense ou capixaba
Goiás – goiano
Maranhão – maranhense ou maranhão
Mato Grosso – mato-grossense
Mato Grosso do Sul – mato-grossense-do-sul ou sul-mato-grossense
Minas Gerais – mineiro ou geralista
Pará – paraense, paroara ou parauara
Paraíba – paraibano
Paraná – paranaense, paranista ou tingui
Pernambuco – pernambucano
Piauí – piauiense ou piauizeiro
Rio de Janeiro – fluminense
Rio Grande do Norte – rio-grandense-do-norte, norte-rio-grandense ou potiguar
Rio Grande do Sul – rio-grandense-do-sul, sul-rio-grandense ou gaúcho
Rondônia – rondoniense ou rondoniano
Roraima – roraimense
Santa Catarina – catarinense, santa-catarinense, catarineta ou barriga-verde
São Paulo – paulista ou bandeirante
Sergipe – sergipano ou sergipense
Tocantins – tocantinense
Adjetivos pátrios das capitais brasileiras
Aracaju (Sergipe) – aracajuano ou aracajuense
Belém (Pará) – belenense
Belo Horizonte (Minas Gerais) – belo-horizontino
Boa Vista (Roraima) – boa-vistense
Brasília (Distrito Federal) – brasiliense ou candango
Campo Grande (Mato Grosso do Sul) – campo-grandense
Cuiabá (Mato Grosso) – cuiabano
Curitiba (Paraná) – curitibano
Florianópolis (Santa Catarina) – florianopolitano
Fortaleza (Ceará) – fortalezense
Goiânia (Goiás) – goianiense
João Pessoa (Paraíba) – pessoense
Macapá (Amapá) – macapaense
Maceió (Alagoas) – maceioense
Manaus (Amazonas) – manauense, manauara ou baré
Natal (Rio Grande do Norte) – natalense ou papa-jerimum
Palmas (Tocantins) – palmense
Porto Alegre (Rio Grande do Sul) – porto-alegrense
Porto Velho (Rondônia) – porto-velhense
Recife (Pernambuco) – recifense
Rio Branco (Acre) – rio-branquense
Rio de Janeiro (Rio de Janeiro) – carioca
Salvador (Bahia) – soteropolitano ou salvadorense
São Luís (Maranhão) – são-luisense ou ludovicense
São Paulo (São Paulo) – paulistano
Teresina (Piauí) – teresinense
Vitória (Espírito Santo) – vitoriense */
