#include <stdio.h>

int main() {
    double mean, riskFreeRate, stdDev, sharpeRatio;

    // Kullanýcýdan gerekli deðerleri al
    printf("Ortalama getiriyi girin (örnek: 0.08 = %%8): ");
    scanf("%lf", &mean);

    printf("Risksiz getiri oranýný girin (örnek: 0.02 = %%2): ");
    scanf("%lf", &riskFreeRate);

    printf("Standart sapmayý girin (örnek: 0.10 = %%10): ");
    scanf("%lf", &stdDev);

    // Sharpe oraný hesapla
    sharpeRatio = (mean - riskFreeRate) / stdDev;

    // Sonuçlarý göster
    printf("\n--- Sonuçlar ---\n");
    printf("Ortalama Getiri : %.4f\n", mean);
    printf("Risksiz Getiri  : %.4f\n", riskFreeRate);
    printf("Standart Sapma  : %.4f\n", stdDev);
    printf("Sharpe Oraný    : %.4f\n", sharpeRatio);

    // Yorumu yazdýr
    if (sharpeRatio < 0)
        printf("Yorum: Kötü performans (negatif Sharpe oraný)\n");
    else if (sharpeRatio < 1)
        printf("Yorum: Zayýf performans\n");
    else if (sharpeRatio < 2)
        printf("Yorum: Ýyi performans\n");
    else if (sharpeRatio < 3)
        printf("Yorum: Çok iyi performans\n");
    else
        printf("Yorum: Mükemmel performans!\n");

    return 0;
}
