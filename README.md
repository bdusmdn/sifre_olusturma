# sifre_olusturma
girilen cümleyi pin koduna dönüştüren uygulama

günümüzde teknolojik aletler gelişmiş ve çeşitlenmiş bir durumdadır bilindiği üzere.
bu çeşitlilik farklı şifre gereksinimlerini meydana getirmiştir.
şifre konusunda ise farklı yöntemler bulunmaktadır.
pin kodu, kelime, gelişmiş şifre yöntemleri vb.
geliştirilen uygulama ise bu şifre gereksinimlerinden kaynaklı ortaya çıkmıştır.
elimizde bir anahtar kelime veyahut cümle olduğu vakit bunu pin koduna dönüştürmeyi sağlamaktadır.
bu sayede sadece bir kelime olan şifre; tahmin edilmesi zor ve deşifre etmeye çalışan kişiler için karmaşık bir hale gelirken sizin için sadece basit bir anahtar kelimedir.
anahtar kelime bir isim, yer, mekan vb. gibi basit bir şifreyken bu uygulama sayesinde karmaşık bir pin koduna dönüşmektedir.
eğer pin kodu olan şifreniz istenmeyen kişilerin eline geçmesi halinde bile sizin anahtar kelimeniz tam manasıyla deşifre olması imkansızdır.
bunun nedenini kodun çalışma mantığını anlattığımız zaman anlayacaksınız.

kod, girilen kelimenin/cümlenin tek tek tüm harflerinin alfabedeki sırasını ekrana bastırmaktadır.
örneğin "ana" anahtar kelimesi pin koduna dönüştürülürken önce "a" harfinin alfabede kaçıncı harf olduğu ekrana bastırılır ve arkasından boşluk bırakılmadan diğer harflerde aynı şekilde ekrana bastırılır.
yani sonuç olarak anahtar kelimemiz olan "ana"'nın pin kodu "1141"dir. 
bu şifre oluşturma yöntemi kısa kelimeler için ideal olsada cümle gibi uzun sifreler dönüştürülürken aşırı uzun bir şifre ortaya çıkmaktadır.
bu yöntem ise harflerin sırasını yan yana yazmaktansa toplamını vermektedir.
örneğin anahtar kelimemiz olan "ana"'nın ilk şifreleme metodu ile şifrelenmiş hali 1141 iken ikinci yöntemle şifrelenmiş hali "1+14+1" olan 16'dır.



kodun çalışma mantığı ise c proglamlama dilindeki ASCI kodlarıdır.
ASCI kodlarında "a" 97. harftir.
kod kullanıcıdan bir 
