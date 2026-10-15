#include <stdio.h>

float kar_zarar(float a, float b, int c);
void vergi_ve_net_hesapla(float brut_tutar);

int main()
{
    float alis, satis, bkz;
    int lot;
    
    printf("Stopajı hesaplamak için sırayla alış fiyatını, satış fiyatını ve lot sayısını giriniz: ");
    scanf("%f%f%d", &alis, &satis, &lot);
    
    bkz = kar_zarar(alis, satis, lot);

    vergi_ve_net_hesapla(bkz);
    
    return 0;
}

float kar_zarar(float a, float b, int c){
    return (b - a) * c;
}

void vergi_ve_net_hesapla(float brut_tutar){
    float net_kar, vergi = 0.0;
    int yuvarlanmis_net;

    if(brut_tutar >= 10000){
        vergi = brut_tutar / 10.0;
        net_kar = brut_tutar - vergi;
        
        yuvarlanmis_net = (int)(net_kar + 0.5);
        
        printf("Satış sonrası brüt kar: %.2f TL\n", brut_tutar);
        printf("Kesilen vergi: %.2f TL\n", vergi);
        printf("Yuvarlanmış Net Kar: %d TL\n", yuvarlanmis_net);
    }
    
    else{
        net_kar = brut_tutar;
        yuvarlanmis_net = (int)(net_kar + 0.5);
        
        printf("Net kar/zarar (Vergi Yok): %d TL\n", yuvarlanmis_net);
    }
}
