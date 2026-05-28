#include <stdio.h>
#include <ctype.h>
int main()
{

	char c;
	int cont_masc=0, cont_min=0, cont_num=0, cont_tam=0, cont_spec=0;

	while(scanf("%c",&c)!=EOF) {

		if(c=='\n') {
			if( cont_tam >= 6 && cont_tam <= 32 && cont_masc > 0 && cont_min > 0 && cont_num >0 && cont_spec == 0) {
				printf("Senha valida.\n");
			} else {
				printf("Senha invalida.\n");
			}
			cont_masc= cont_min= cont_num= cont_tam= cont_spec=0;
			continue;
		}

		else if(isupper(c))
		{
			cont_masc ++;

		}
		else if(islower(c)) {
			cont_min ++;
		}
		else if(isdigit(c)) {
			cont_num ++;
		} else {
			cont_spec ++;
		}

		cont_tam++;

	}

	if (cont_tam > 0) {
		if( cont_tam >= 6 && cont_tam <= 32 && cont_masc > 0 && cont_min > 0 && cont_num >0 && cont_spec == 0) {
			printf("Senha valida.\n");
		} else {
			printf("Senha invalida.\n");
		}
	}

	return 0;
}
