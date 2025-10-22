#include <stdio.h>

int main() {
    double mean, riskFreeRate, stdDev, sharpeRatio;

    // Kullan�c�dan gerekli de�erleri al
    printf("Ortalama getiriyi girin (�rnek: 0.08 = %%8): ");
    scanf("%lf", &mean);

    printf("Risksiz getiri oran�n� girin (�rnek: 0.02 = %%2): ");
    scanf("%lf", &riskFreeRate);

    printf("Standart sapmay� girin (�rnek: 0.10 = %%10): ");
    scanf("%lf", &stdDev);

    // Sharpe oran� hesapla
    sharpeRatio = (mean - riskFreeRate) / stdDev;

    // Sonu�lar� g�ster
    printf("\n--- Sonu�lar ---\n");
    printf("Ortalama Getiri : %.4f\n", mean);
    printf("Risksiz Getiri  : %.4f\n", riskFreeRate);
    printf("Standart Sapma  : %.4f\n", stdDev);
    printf("Sharpe Oran�    : %.4f\n", sharpeRatio);

    // Yorumu yazd�r
    if (sharpeRatio < 0)
        printf("Yorum: K�t� performans (negatif Sharpe oran�)\n");
    else if (sharpeRatio < 1)
        printf("Yorum: Zay�f performans\n");
    else if (sharpeRatio < 2)
        printf("Yorum: �yi performans\n");
    else if (sharpeRatio < 3)
        printf("Yorum: �ok iyi performans\n");
    else
        printf("Yorum: M�kemmel performans!\n");

    return 0;
}
