#include <stdio.h>
#include <math.h>

void umGrau()
{
    int a, b;                               
    float result;
    printf("\n=== Resolucao passo-a-passo: Equacao de Primeiro Grau ===\n");

    printf("Forma: ax + b = 0\n");
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    while (a <= 0)
    {
        printf("\nA nao pode ser menos que zero\n");
        printf("Digite o valor de a: ");
        scanf("%d", &a);
    }
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("\nEquacao Informada: %dx + %d = 0\n\n", a, b);

    printf("Passos:\n");
    printf("1) Escreva a equacao: (%d) x + (%d) = 0\n", a, b);
    printf("2) Isolar o termo com x: (%d) x = - (%d)\n", a, -b);
    printf("ou: %dx = %d\n", a, -b);

    printf("3) Dividir ambos os lados por a: x = (%d) / (%d)\n", -b, a);
    result = (float)-b/a;
    printf("\nSoulucao: x = %f\n", result);
}

void segGrau()
{
    int a, b, c, delta;
    float x1, x2, raiz;
    printf("\n=== Resolucao passo-a-passo: Equacao de Segundo Grau ===\n");

    printf("Forma: ax2 + bx + C = 0\n");
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);
    printf("\nEquacao Informada: %dx^2 + %dx + %d = 0\n\n", a, b, c);

    printf("Passos:\n");
    printf("1) Calcular o discriminante: Delta = b^2 - 4 *a*c\n");
    printf("- b^2 = (%d)^2 = %d\n", b, b*b);
    printf("- 4*a*c = 4 * (%d) * (%d) = %d\n", a, c, 4*a*c);
    delta = (b*b) - 4*a*c;
    printf("=> Delta = %d - %d = %d\n", b*b, 4*a*c, delta);
    if (delta < 0)
    {
        printf("\nDelta não pertence aos reais ou é 0\n");
    }
    else
    {
        printf("\n2) Como delta > 0, existem duas raizes reais.\n");

        raiz = sqrt((float)delta);
        printf("- sqrt(Delta) = %.0lf\n", raiz);
        printf("- Denominador 2a = 2 * (%d) = %0.lf\n\n", a, 2.0*a);

        printf("3) Calculo x1:\n");

        printf("x1 = (-%d + sqrt(%d)) / (2*%d)\n", b, delta, a);
        printf("= (%d + %.0lf / %.0lf)\n", -b, raiz, 2.0*a);
        x1 = (-b + raiz) / (2.0 * a);
        printf("= %.0lf / %.0lf = %.0lf\n\n", -b+raiz, 2.0*a, x1);

        printf("4) Calculo x2\n");

        printf("x2 = (-%d - sqrt(%d)) / (2*%d)\n", b, delta, a);
        printf("= (%d - %.0lf / %.0lf)\n", -b, raiz, 2.0*a);
        x2 = (-b - raiz) / (2.0 * a);
        printf("= %.0lf / %.0lf = %.0lf\n\n", -b-raiz, 2.0*a, x2);

        printf("Solucoes reais x1 = %.0lf ; x2 = %.0lf\n", x1, x2);
    }

}

void sobre()
{
    printf("\nEste programa foi feito para responder equacaoes de primeiro e segundo grau mostrando os passo\n");
    printf("Programa desenvolvido por Arthur Jefferson, para o trabalho da N1\n");
}

int main()
{
    printf("======== MENU PRINCIPAL ========\n");
    int esc; // escolha
    do {
        printf("\n1- Resolver equacao de primeiro grau (mostrar passos)\n");
        printf("2 - Resolver equacao de segundo grau (mostrar passos)\n");
        printf("3 - Sobre o programa\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &esc);
        switch (esc)
        {
        case 1:
            umGrau();
            break;
        case 2:
            segGrau();
            break;
        case 3:
            sobre();
            break;
        case 0:
            printf("\nAdeus!\n");
            return 1;
        }
    } while (esc != 4);
    return 0;
}
