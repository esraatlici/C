Algoritma posfix_degerlendir (deðer ifade <string>)
Ýfade_boyutu=string boyutu
Yeni_Yýðýn=Yýðýn_Oluþtur();
Ýndex=0;
Loop (index<Ýfade_Boyutu)
if (ifade[index] operand)
Yigina_Ekle(Yeni_Yýðýn,ifade[index]);
Else
operand2=Yigindan_Cikar(Yeni_Yýðýn);
operand1=Yigindan_Cikar(Yeni_Yýðýn);
operator=ifade[index];
deðer=hesapla(operand1,operator,operand2);
Yýðýna_Ekle(Yeni_Yýðýn,deðer);
End if;
index=index+1;
end loop;
sonuç=Yýðýndan_Çýkar(Yeni_Yýðýn);
return sonuç;
end Algoritma;
