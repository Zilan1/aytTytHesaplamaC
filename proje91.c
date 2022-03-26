#include <stdlib.h>
#define TYTpuanT 1.32
#define TYTpuanM 1.32
#define TYTpuanS 1.36
#define TYTpuanF 1.36
#define AYTSayisalpuanM 3 
#define AYTSayisalpuanF 2.85
#define AYTSayisalpuanK 3.07
#define AYTSayisalpuanB 3.07
#define AYTEsitpuanM 3
#define AYTEsitpuanE 3
#define AYTEsitpuanT1 2.8
#define AYTEsitpuanC1 3.33
#define AYTSozelpuanE 3
#define AYTSozelpuanT1 2.8
#define AYTSozelpuanC1 3.33
#define AYTSozelpuanT2 2.91
#define AYTSozelpuanC2 2.91
#define AYTSozelpuanF 3
#define AYTSozelpuanDi 3.33
#define AYTDilpuan 3


int main() {
    
	printf("**** TYT AYT Hesaplama ******\n\n");
 
    char kelime,secim,secim2;
 
    int OSYM=100,OBP;
 
    float Turkce,MatematikTYT,SosyalBilimler,FenBilimleri,DiplomaPuani,TYTPuan;
	float MatematikAYT,Fizik,Kimya,Biyoloji;
    float Edebiyat,Tarih1,Cografya1,Tarih2,Cografya2,Felsefe,DIKAB;
    float Dil;
    float toplam,TYT,AYT;
 
    printf("Ogrenmek Istediginiz Puan Turunu Seciniz\n1-TYT\n2-Ayt\n3-Toplam\n");
    scanf("%d",&secim);
 
 
    switch(secim)
    {
    case 1:
    
	printf("Turkce Netiniz: ",Turkce);
    scanf("%f",&Turkce);
   
    printf("Matematik Netiniz: ",MatematikTYT);
    scanf("%f",&MatematikTYT);
   
    printf("Sosyal Bilimler Netiniz: ",SosyalBilimler);
    scanf("%f",&SosyalBilimler);
   
    printf("Fen Bilimleri Netiniz: ",FenBilimleri);
    scanf("%f",&FenBilimleri);
   
    TYTPuan=(Turkce*TYTpuanT)+(MatematikTYT*TYTpuanM)+(FenBilimleri*TYTpuanF)+(SosyalBilimler*TYTpuanS);
            
	printf("TYT Puaniniz: %f",TYTPuan);
	break;
     
     
    case 2:
    
	printf("\n1-Sayisal");
    printf("\n2-Esit Agirlik");
    printf("\n3-Sozel");
    printf("\n4-Dil: ");
    printf("\nSecim Yapmak Istediginiz Bolumun Kodunu Tuslayin: ");
    scanf("%d",&secim2);
        
    switch(secim2)
    {
        case 1:
        
		printf("Matematik Netiniz: ",MatematikAYT);
        scanf("%f",&MatematikAYT);
   
        printf("Fizik Netiniz: ",Fizik);
        scanf("%f",&Fizik);
   
        printf("Kimya Netiniz: ",Kimya);
        scanf("%f",&Kimya);
   
        printf("Biyoloji Netiniz: ",Biyoloji);
        scanf("%f",&Biyoloji);
             
        toplam=(MatematikAYT*AYTSayisalpuanM)+(Fizik*AYTSayisalpuanF)+(Kimya*AYTSayisalpuanK)+(Biyoloji*AYTSayisalpuanB);
        
		printf("AYT Sayisal Puaniniz: %f",toplam);break;
       
        case 2:
             
        printf("Matematik Netiniz: ",MatematikAYT);
        scanf("%f",&MatematikAYT);
   
        printf("Edebiyat Netiniz: ",Edebiyat);
        scanf("%f",&Edebiyat);
   
        printf("Tarih-1 Netiniz: ",Tarih1);
        scanf("%f",&Tarih1);
   
        printf("Cografya-1 Netiniz: ",Cografya1);
        scanf("%f",&Cografya1);
            
        toplam=(MatematikAYT*AYTEsitpuanM)+(Edebiyat*AYTEsitpuanE)+(Tarih1*AYTEsitpuanT1)+(AYTEsitpuanC1*Cografya1);
        
		printf("\nAYT Esit Agirlik Netiniz: %f",toplam);
		break;
       
        case 3:
            
        printf("Edebiyat Netiniz: ",Edebiyat);
        scanf("%f",&Edebiyat);
   
        printf("Cografya-1 Netiniz: ",Cografya1);
        scanf("%f",&Cografya1);
   
        printf("Cografya-2 Netiniz: ",Cografya2);
        scanf("%f",&Cografya2);
   
        printf("Tarih-1 Netiniz: ",Tarih1);
        scanf("%f",&Tarih1);
       
       printf("Tarih-2 Netiniz: ",Tarih2);
       scanf("%f",&Tarih2);
       
       printf("Felsefe Netiniz: ",Felsefe);
       scanf("%f",&Felsefe);
       
       printf("DIKAB Netiniz: ",DIKAB);
       scanf("%f",&DIKAB);         
   
       toplam=(Edebiyat*AYTSozelpuanE)+(Cografya1*AYTSozelpuanC1)+(Cografya2*AYTSozelpuanC2)+(Tarih1*AYTSozelpuanT1)+(Tarih2*AYTSozelpuanT2)+(Felsefe*AYTSozelpuanF)+(DIKAB*AYTSozelpuanDi);
       printf("Sozel Netiniz: %f",toplam);
	   break;
   
       case 4: 
             
       printf("Dil Netiniz: ",Dil);
       scanf("%f",&Dil);
             
        toplam=Dil*AYTDilpuan;
        
		printf("Dil Bolumu Olarak Netiniz: %f",toplam);
		break;
   }
            printf("");
			break;
            
    case 3:
         
        printf("TYT Puaninizi Giriniz: ",TYT);
        scanf("%f",&TYT);
         
        printf("AYT Puaninizi Giriniz: ",AYT);
        scanf("%f",&AYT);
         
        printf("Diploma Puaniniz: ",DiplomaPuani);
        scanf("%f",&DiplomaPuani);
   
        OBP=DiplomaPuani*0.6;
           
        toplam=TYT+AYT+OBP+OSYM;
        
		printf("Toplam Puaniniz: %f",toplam);
		break;
  }
  
 
 return 0;
}
