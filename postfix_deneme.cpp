Algoritma posfix_degerlendir (de�er ifade <string>)
�fade_boyutu=string boyutu
Yeni_Y���n=Y���n_Olu�tur();
�ndex=0;
Loop (index<�fade_Boyutu)
if (ifade[index] operand)
Yigina_Ekle(Yeni_Y���n,ifade[index]);
Else
operand2=Yigindan_Cikar(Yeni_Y���n);
operand1=Yigindan_Cikar(Yeni_Y���n);
operator=ifade[index];
de�er=hesapla(operand1,operator,operand2);
Y���na_Ekle(Yeni_Y���n,de�er);
End if;
index=index+1;
end loop;
sonu�=Y���ndan_��kar(Yeni_Y���n);
return sonu�;
end Algoritma;
