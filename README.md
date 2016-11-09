# Netflix Switch
Em 13 de Fevereiro de 2016, n�s do BH Arduiners nos reunimos em um Meetup, com a inten��o de construir um Gadget anunciado pela empresa NetFlix, chamado [NetFlix Switch](http://makeit.netflix.com/the-switch), que utilizava diversas tecnologias. Entre elas o Ardu�no.
<p align="center">
<img class="alignnone size-full wp-image-3280" src="https://cezarantsouza.files.wordpress.com/2016/07/netflix-chill-button-01-1.jpg"          alt="netflix-chill-button-01-1" width="748" height="498" />
</p>
<br>
Por diversos motivos, o dispositivo n�o foi poss�vel de ser constru�do nos mesmos moldes propostos pela empresa. Por�m, com componentes mais simples, modifica��es no c�digo-fonte original e muita criatividade, conseguimos chegar a uma vers�o alternativa que al�m de atender aos requisitos propostos, tamb�m proporcionou bastante conhecimento para todos os envolvidos.  
<br> 
O projeto abrange 3 �reas de conhecimento para ser realizado: mec�nica/prototipagem, eletr�nica e programa��o mobile. 
Abaixo iremos listar os procedimentos utilizados em cada etapa e todo o c�digo fonte utilizado no Ardu�no e no projeto mobile pode ser encontrado neste reposit�rio atrav�s dos diret�rios : <b>Android_src</b> e <b>codigoFonteArduino</b>.

# Mec�nica/Prototipagem 
O primeiro prot�tipo do Gadget foi apresentado durante o [Arduino Day 2016](https://day.arduino.cc/#/) e verificamos que dada a quantidade de componentes utilizados, inseridos numa protoboard, abrigar todos numa caixa seria um dos grandes desafios do projeto.   
![alt text](https://cezarantsouza.files.wordpress.com/2016/06/componentes.jpg "Protoboard - Primeira vers�o")
Durante o evento, com diversas sugest�es da Designer [Katarine Inis](https://www.facebook.com/katarine.inis) fomos come�ando a desenvolver alternativas para abrigar os componentes de forma organizada e definindo algumas premissas pr�prias como: 

1. Deixar os componentes � vista no projeto, evid�nciando de forma l�dica a eletr�nica envolvida 
2. Utilizar pe�as e modelagem 3d para montagem do projeto  
3. N�o fazer uso de placas de circuito impresso (PCB), para n�o aumentar a complexidade ou fazer o mesmo se tornar menos acess�vel

Seguindo estas e outras premissas e baseado no modelo do Fritzen listado abaixo, o [Igor Carmo](https://www.facebook.com/igor.carmo.16) iniciou o desenvolvimento de uma caixa utilizando pe�as de acr�lico e uma protoboard de tamanho reduzido.
![alt text](https://cezarantsouza.files.wordpress.com/2016/06/protoboard.jpg "Fritzen")

Caixa de Acr�lico sendo desenvolvida. 
![alt text](https://cezarantsouza.files.wordpress.com/2016/06/img-20160605-wa0017.jpg "Vers�o final")

Depois de mais alguns Brainstorms durante a constru��o, no dia 25/06/2016 durante o primeiro Meetup do BH Arduiners no FabLab,finalmente foi apresentado a todos o resultado final do Gadget.   

Al�m do resultado do prot�tipo f�sico, foi gerado tamb�m um documento super completo, com detalhamento de Data Sheets, dimens�es do prot�tipo e todas as etapas de modelagem envolvidas. Este documento pode ser acessado [neste link ](https://cezarantsouza.files.wordpress.com/2016/06/relatc3b3rionetflix.pdf) e s� ajudou a enriquecer ainda mais o projeto. 
<br>
<br>
Apesar de todo o processo ter sido realizado em conjunto com a participa��o de todos, acredito que maiores informa��es t�cnicas a respeito desta parte envolvendo mec�nica e prototipagem podem ser retiradas com Igor e com a Katarina.

# Eletr�nica 

Na primeira reuni�o, come�amos a parte eletr�nica seguindo as orienta��es da NetFlix. Utilizamos uma placa ESP 8266 para realizar a comunica��o e a �nica altera��o prevista no projeto seria retirar o comunica��o com a pizzaria Domino's, presente na id�ia original. O App Android tamb�m seria simplificado para fazer uma Requisi��o Http na ESP 8266 e entrar em silencioso logo ap�s.  
![alt text](https://cezarantsouza.files.wordpress.com/2016/06/primeira.jpg "Primeira vers�o do projeto")
Por�m ap�s alguns brainstorms entre os envolvidos ([Matheus  Cavalieri](https://www.facebook.com/matheuscavalieribh), [C�zar Ant�nio](https://www.facebook.com/cezar.a.desouza), [Carla Queiroga Werkhaizer](https://www.facebook.com/carla.werkhaizer) e [J�lio C�sar Carneiro](https://www.facebook.com/jcca007) algumas coisas foram alteradas:

1.A ESP 8266 foi substitu�da por um HC-06  
2.Um relay foi inclu�do no projeto, substitu�ndo as lampadas [Philips Hue](http://www2.meethue.com/en-us/) sugeridas pelo projeto original

O c�digo-fonte do ardu�no ficou bastante enxuto e trabalha em conjunto com o aplicativo Android. Para carreg�-lo n�o � necess�rio nenhuma biblioteca que j� n�o esteja instalada no IDE padr�o do Ardu�no.

J� a montagem, pode ser feita com um Ardu�no Uno e segue um esquema parecido com o mostrado abaixo, com poucas varia��es.
![alt text](https://cezarantsouza.files.wordpress.com/2016/06/protoboard.jpg "Fritzen")

Pra nossa felicidade, tudo que diz respeito a programa��o Ardu�no no projeto acabou se tornando bastante acess�vel e intuitivo, seguindo as premissas do Hardware Aberto. 

# Desenvolvimento Android 

Para o desenvolvimento do App Android, foi utilizado o Android Studio. O que infelizmente, pela montagem de ambiente um pouco trabalhosa, pode exigir uma relativa curva de aprendizado na sua constru��o. Apesar disso, esta foi a parte que talvez, tenha sido aproveitada a maior quantidade do material original disponibilizado pela NetFlix. 
<br>
<br>
Para a comunica��o com o Gadget atrav�s do Bluetooth foram feitas algumas adapta��es do c�digo-fonte encontrado neste [reposit�rio](https://github.com/janosgyerik/bluetoothviewer).(Inclusive se algu�m tiver conhecimento de Licen�as e puder possa nos ajudar a esclarecer se isso viola alguma lei de CopyRight, nos ajudaria bastante)

Basicamente o funcionamento do app � bem simples.

<br>Primeiramente o usu�rio abre o aplicativo que j� requisita uma conex�o com o bluetooth.<br> 
![alt text](https://cezarantsouza.files.wordpress.com/2016/06/21.png "Inicial")
<br>Logo ap�s o usu�rio � orientado a cadastrar os bot�es da sua televis�o.<br>
![alt text](https://cezarantsouza.files.wordpress.com/2016/06/8.png  "Cadastro")
<br>Ap�s o cadastro de todos os bot�es o sistema est� pronto para realizar todas as opera��es.<br> 
![alt text](https://cezarantsouza.files.wordpress.com/2016/06/111.png "Pronto")
<br>Ap�s toda a opera��o, o Smarthphone � colocado em modo silencioso.<br> 
![alt text](https://cezarantsouza.files.wordpress.com/2016/06/13.png "Silencioso")

Apesar de ter tido a participa��o de todos, o [C�zar Ant�nio](http://github.com/cezarant) pode ajudar a esclarecer detalhes a respeito das modifica��es que foram feitas no c�digo-fonte Android original.

# Resumo de Links

1. [BH Arduiners](https://www.facebook.com/groups/meetuparduiners/)
2. [NetFlix Switch](http://makeit.netflix.com/the-switch) 
3. [Manual detalhado da constru��o das pe�as](https://cezarantsouza.files.wordpress.com/2016/06/relatc3b3rionetflix.pdf)
4. [Library Bluetooth Utilizada no Projeto Android](https://github.com/janosgyerik/bluetoothviewer)
5. [C�zar Ant�nio](http://github.com/cezarant)
6. [Matheus  Cavalieri](https://www.facebook.com/matheuscavalieribh)
7. [J�lio C�sar Carneiro](https://www.facebook.com/jcca007)
8. [Carla Queiroga Werkhaizer](https://www.facebook.com/carla.werkhaizer)
9. [Katarine Inis](https://www.facebook.com/katarine.inis)
10. [Igor Carmo](https://www.facebook.com/igor.carmo.16)

# Contribui��es 
H� algumas melhorias que podem ser implementadas e todas elas estar�o sugeridas na se��o <b>Issues</b> deste reposit�rio. 
<br>
Sinta-se a vontade tamb�m para entrar em contato conosco atrav�s do nosso [grupo do Facebook](https://www.facebook.com/groups/meetuparduiners/).

# Agradecimento
Agradecemos a participa��o de todos os participantes envolvidos e parceiros e ficamos na expectativa de enfrentar mais desafios tecnol�gicos t�o enriquecedores quanto este.
