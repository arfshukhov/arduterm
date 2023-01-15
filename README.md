<h2>Это небольшой проект, посвещенный созданию термометра на базе ардуино.</h2>
<p></p>
<p>Изображение выводится на жидкокристаллический экран <span style="text-decoration: underline;"><em>LCD 2004.</em></span><span style="text-decoration: underline;"><em></em></span></p>
<p>Подключите все контакты как показано на изображении.<img src="https://iarduino.ru/img/upload/ec1b127e9972f382e70c63734c2d44b2.jpg" alt="" width="627" height="350" /></p>
<p>Для подключения пина VO вам понадобится потенциометр. Тот, что идет в большинсвте наборов вполне сгодится.</p>
<p><img src="https://arduinomaster.ru/wp-content/uploads/2017/09/2_20_11-300x289.jpg" width="300" height="289" style="border-style: outset;" alt="" /></p>
<p>А0 подключаем к контакту VO.&nbsp;</p>
<p>В своем проекте я подключил цифровые пины начиная с <span style="text-decoration: underline;"><em>0</em></span>, а не со <span style="text-decoration: underline;"><em>2</em></span>, как показано на изображении. Обратите на это внимание. Т.е. для подключения экрана я использую пины <span style="text-decoration: underline;"><em>(0-5)</em></span>. 6-ой цифровой пин используется для подключения датчика температуры и влажности. Его точночть не идеальна, но для комнатного термометра достаточна.</p>
<p><img src="https://github.com/arfshukhov/arduterm/blob/main/photos/photo_2023-01-15_19-26-53.jpg?raw=true" alt="" width="278" height="493" style="border-style: outset;" /><img src="https://github.com/arfshukhov/arduterm/blob/main/photos/photo_2023-01-15_19-26-55.jpg?raw=true" alt="" width="278" height="494" style="border-style: outset;" /><img src="https://github.com/arfshukhov/arduterm/blob/main/photos/photo_2023-01-15_19-26-50.jpg?raw=true" alt="" width="562" height="316" style="border-style: outset;" /></p>
<p>Подключаем датчик температуры и влажности DHT11 согласно схеме на изображении.<img src="https://arduinoplus.ru/wp-content/uploads/2018/04/raspinovka-dht11.jpg.webp" alt="" style="border-style: outset;" width="600" height="476" /></p>
<p>Смотрим на правое изображение, контакт Dаta подключаем к контакту&nbsp; цифровой пин, у меня это пин 6. Vcc и Ground&nbsp;&mdash; это 5V и GND соответственно.</p>
<p>Кстати, если данные на дисплее отображаются некорректно, покрутите потенциометр.</p>
<p>Для работы датчика температуры и влажности DHT11 поднадобится библиотека, скачать ее можно отсюда&nbsp;<a href="https://drive.google.com/file/d/131vhl3eJOa_6Fvbp3SMCez-BnVBkMQFg/view">DHT.h</a>&nbsp;разорхивировать в путь библиотек Arduino IDE. Она может находиться в разных местах в зависимости от версии, поэтому воспользуйтесь гуглом или поищите в файлах.<a href="https://drive.google.com/file/d/131vhl3eJOa_6Fvbp3SMCez-BnVBkMQFg/view"></a></p>
<p>Ларионов В.В.</p>
<p></p>
