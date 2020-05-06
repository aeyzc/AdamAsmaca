#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	char alfabe[29]={'a','b','c','ç','d','e','f','g','ð','h','ý','i','j','k','l','m','n','o','ö','p','r','s','þ','t','u','ü','v','y','z'};
	char kelime2[250];
	char soru[20];
	char kategori[20],kelime[115],tire[115],a;
	int boyut=0,f=0,j=0,k,o=0,x,i,deneme=0,kontrol=0,h=0;//x kategori seçme//o virgül sayma//
	srand(time(NULL));
	
	printf("KATEGORI SECINIZ!\n1-Futbolcular\n2-Ulkeler\n3-Futbol Takimlari\n4-Baskentler\n5-Bilim Adamlari\n6-Yabanci Diziler\n7-Yerli Diziler\n8-Hayvanlar\n");
	scanf("%d",&x);
	

	if(x==1) char kelime2[250]="hakan balta,serdar aziz,emre akbaba,gareth bale,lionel messi,alex de souza,karim benzema,sabri sarioglu,wesley sneijder,cristiano ronaldo,";
	
	if(x==2) char kelime2[250]="cin,gine,iran,rusya,isvec,italya,fransa,almanya,turkiye,brezilya,bosna hersek,";

	if(x==3) char kelime2[250]="porto,celtic,napoli,chelsea,sevilla,juventus,besiktas,la galaxy,fenerbahce,galatasaray,borussia dortmund";

	if(x==4) char kelime2[250]="roma,paris,lizbon,kahire,berlin,londra,moskova,ankara,new york,budapeste,amsterdam,";

    if(x==5) char kelime2[250]="farabi,harezmi,ibni sina,marie curie,nikola tesla,isaac newton,louis pasteur,stephen hawking,albert einstein,galileo galilei,michael faraday,";

	if(x==6) char kelime2[250]="lost,vikings,mr robot,castle rock,breaking bad,prison break,stranger things,game of thrones,the walking dead,person of interest,orange is the new black,"; 	 

	if(x==7) char kelime2[250]="ezel,masum,adanali,suskunlar,aski memnu,bes kardes,kardes payi,isler gucler,ekmek teknesi,hakan muhafiz,cocuklar duymasin,";

	if(x==8) char kelime2[250]="at,kedi,kurt,kopek,zurafa,yarasa,jaguar,flamingo,su aygiri,kopek baligi,";

	if(x>8 || x<1){
		printf("HATALI GIRIS!");
		goto ali;
	}
	
	
	while(1){
		k=rand()%11+1;
		if(k!=0) break;	
	}
	
	for(i=0;i<200;i++){
		if(kelime2[i]!=',') soru[j]=kelime2[i];
		
		j++;
	  	if(kelime2[i]==','){
		 j=0;
		 o++;
	  }
	  	if(k==o){
		  break;
}
	}
	for(i=0;soru[i]!='\0';i++) boyut++;
	
	for(i=0;i<boyut;i++){
		kelime[i]=soru[i];
	}
	
	system("color 0");
	printf("ADAM ASMACA\n");
	
	for(i=0;i<boyut;i++){
		if(kelime[i]==' ') tire[i]=' ';
		
		else tire[i]='-';
	}
		
	for(i=0;kontrol!=1;i++){
		printf("(lutfen turkce karakter kullanmayiniz ve kucuk harfler giriniz)\n---------------------------------------------------------------\n\n");
		printf("ADAM ASMACA\n\n");
		if(x==1) printf("kategori:futbolcular");
	if(x==2) printf("kategori:ulkeler");
	if(x==3) printf("kategori:futbol takimlari");
	if(x==4) printf("kategori:baskentler");
	if(x==5) printf("kategori:bilim adamlari");
	if(x==6) printf("kategori:yabanci diziler");
	if(x==7) printf("kategori:yerli diziler");
	if(x==8) printf("kategori:hayvanlar");
		printf("\n%s",tire);
       	printf("\nharf girin:");
		scanf("%c",&a);
		deneme++;

		for(j=0;j<boyut;j++){
				if(soru[j]==a) tire[j]=a;
			    }
		
		for(j=0;j<boyut;j++){
			if(tire[j]!='-') f++;
		}
		if(f==boyut) kontrol=1;
		
		printf("\n%s",tire);
		f=0;
        system("CLS");		
	}
	
	for(i=0;i<29;i++){
		for(j=0;j<boyut;j++){
		if(alfabe[i]==tire[j]){
			h++;
			break;
			}
		
	}
	}
	printf("(lutfen turkce karakter kullanmayiniz ve kucuk harfler giriniz)\n---------------------------------------------------------------\n\n");
	printf("ADAM ASMACA\n\n");
	if(x==1) printf("kategori:futbolcular");
	if(x==2) printf("kategori:ulkeler");
	if(x==3) printf("kategori:futbol takimlari");
	if(x==4) printf("kategori:baskentler");
	if(x==5) printf("kategori:bilim adamlari");
	if(x==6) printf("kategori:yabanci diziler");
	if(x==7) printf("kategori:yerli diziler");
	if(x==8) printf("kategori:hayvanlar");
	printf("\ncevap--->%s\n\n",tire);
	printf("%d hata ile bildiniz.Tebrikler!",(((deneme-1)/2)+1)-h);
	

	
	ali:
	getch();
	return 0;
	
	
}
