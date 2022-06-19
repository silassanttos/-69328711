<div id="js-media-player" class="media-player" data-lesson-progress="{&quot;id&quot;:61496591,&quot;progress&quot;:100.0,&quot;completed&quot;:true,&quot;grade&quot;:null,&quot;enrollment_id&quot;:7389010,&quot;lesson_id&quot;:2286687,&quot;created_at&quot;:&quot;2022-06-17T00:14:25.810Z&quot;,&quot;updated_at&quot;:&quot;2022-06-19T00:23:11.049Z&quot;,&quot;external_id&quot;:null,&quot;time_spent&quot;:0,&quot;views&quot;:3,&quot;last_view_at&quot;:&quot;2022-06-19T00:23:11.036Z&quot;,&quot;school_id&quot;:7227,&quot;progress_card_id&quot;:9570713,&quot;current_video_time&quot;:0}" data-enable-video-watermark="false" data-lesson-id="2286687">

  <p> </p><h3><strong>Mundo 1-1</strong></h3>

<p>Perto do final do Mundo 1-1 no Super Mario Brothers da Nintendo, Mario deve ascender a pirâmide de blocos alinhada à direita, como demonstrado abaixo.</p>

<p><img alt="Imagem ilustrativa do jogo Mario" src="https://edools-3-production.s3.amazonaws.com/org-6988%2Fschool-7227%2F90ab2f9de17d9ef81f5850efe2343aeb%2Fpyramid-mario.png"></p>

<p>Vamos recriar essa pirâmide em C, ainda que em texto, usando hashes ( <strong># </strong>) para tijolos, como visto a seguir. Cada hash é um pouco mais alto do que largo, então a pirâmide em si também é mais alta do que larga.</p>

<div style="background:#eeeeee;border:1px solid #cccccc;padding:5px 10px;">&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;<strong><tt>#</tt></strong><br>
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;<strong><tt>##</tt></strong><br>
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;<strong><tt>###</tt></strong><br>
&nbsp; &nbsp; &nbsp; &nbsp;&nbsp;<strong><tt>####</tt></strong><br>
&nbsp; &nbsp; &nbsp;&nbsp;<strong><tt>#####</tt></strong><br>
&nbsp; &nbsp;&nbsp;<strong><tt>######</tt></strong><br>
<strong><tt>&nbsp;#######</tt></strong><br>
<strong><tt>########</tt></strong></div>

<h2>Este vídeo irá te ajudar a entender o problema ;)</h2>

<p><strong>Atenção:</strong>&nbsp;<em>para adicionar legendas ao vídeo clique no botão CC localizado no Player e selecione a opção "Português (Brasil)". Uma excelente aula para você!</em></p>

<p><iframe allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen="" frameborder="0" height="315" src="https://www.youtube.com/embed/8HciXXDwUfU" title="YouTube video player" width="100%"></iframe></p>

<p>O programa que escreveremos se chamará <b>mario</b>. E vamos permitir que o usuário decida qual deve ser a altura da pirâmide, primeiro solicitando um número inteiro positivo entre, digamos, 1 e 8, inclusive.</p>

<p>Veja como o programa pode funcionar se o usuário inserir <b>8</b> quando solicitado:</p>

<div style="background:#eeeeee;border:1px solid #cccccc;padding:5px 10px;">$ ./mario<br>
Tamanho: 8 &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;<br>
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;<strong><tt>#</tt></strong><br>
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;<strong><tt>##</tt></strong><br>
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;<strong><tt>###</tt></strong><br>
&nbsp; &nbsp; &nbsp; &nbsp;&nbsp;<strong><tt>####</tt></strong><br>
&nbsp; &nbsp; &nbsp;&nbsp;<strong><tt>#####</tt></strong><br>
&nbsp; &nbsp;&nbsp;<strong><tt>######</tt></strong><br>
<strong><tt>&nbsp;#######</tt></strong><br>
<strong><tt>########</tt></strong></div>

<p>Veja como o programa pode funcionar se o usuário inserir <b>4</b> quando solicitado:</p>

<div style="background:#eeeeee;border:1px solid #cccccc;padding:5px 10px;">$ ./mario<br>
Tamanho: 4 &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;<br>
&nbsp; &nbsp; &nbsp;&nbsp;<strong><tt>#</tt></strong><br>
&nbsp; &nbsp;&nbsp;<strong><tt>##</tt></strong><br>
&nbsp;&nbsp;<strong><tt>###</tt></strong><br>
<strong><tt>####</tt></strong></div>

<p>Veja como o programa pode funcionar se o usuário inserir <b>2</b> quando solicitado:</p>

<div style="background:#eeeeee;border:1px solid #cccccc;padding:5px 10px;">$ ./mario<br>
Tamanho: 2 &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;<br>
&nbsp;&nbsp;<strong><tt>#</tt></strong><br>
<strong><tt>##</tt></strong></div>

<p>Veja como o programa pode funcionar se o usuário inserir <b>1</b> quando solicitado:</p>

<div style="background:#eeeeee;border:1px solid #cccccc;padding:5px 10px;">$ ./mario<br>
Tamanho: 1 &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;<br>
<strong><tt>#</tt></strong></div>

<p>Se o usuário não inserir, de fato, um número inteiro positivo entre 1 e 8, inclusive, quando solicitado, o programa deve solicitar novamente ao usuário até que ele coopere:</p>

<div style="background:#eeeeee;border:1px solid #cccccc;padding:5px 10px;">$ ./mario<br>
Tamanho: -1 &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;<br>
Tamanho: 0 &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;<br>
Tamanho: 42 &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;<br>
Tamanho: 9 &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;<br>
Tamanho: 4 &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;<br>
&nbsp; &nbsp; &nbsp;&nbsp;<strong><tt>#</tt></strong><br>
&nbsp; &nbsp;&nbsp;<strong><tt>##</tt></strong><br>
&nbsp;&nbsp;<strong><tt>###</tt></strong><br>
<strong><tt>####</tt></strong></div>

<p><a href="https://ide.cs50.io/" target="_blank">Quero resolver este exercício agora, clique aqui para ir para o IDE.</a></p>

<p>&nbsp;</p>

<h2>Pseudocódigo</h2>

<p>Primeiro, crie um novo diretório (ou seja, pasta) chamado mario dentro do seu diretório pset1, executando</p>

<div style="background:#eeeeee;border:1px solid #cccccc;padding:5px 10px;"><tt>~/$ mkdir ~/pset1/mario</tt></div>

<p>Adicione um novo arquivo chamado <strong>pseudocodigo.txt</strong> dentro do seu diretório mario.</p>

<p>Escreva em <strong>pseudocodigo.txt </strong>algum pseudocódigo que implemente este programa, mesmo que não tenha (ainda!) certeza de como escrevê-lo em código. Não existe uma maneira certa de escrever pseudocódigo, mas frases curtas são suficientes. É&nbsp;provável que seu pseudocódigo use (ou implique o uso!) de uma ou mais funções, condições, expressões booleanas, loops e/ou variáveis.</p>

<details open=""><summary><strong>Clique aqui para ver o Spoiler ;)</strong></summary>

<div style="background:#eeeeee;border:1px solid #cccccc;padding:5px 10px;"><strong>Existe mais de uma forma para resolver esse exercício, esse spoiler aqui é apenas uma delas!</strong><br>
1- Peça ao usuário o tamanho da altura.<br>
2- Se o tamanho da altura for menor que 1 ou maior que 8(ou não inteiro), fique nesse passo até que o usuário insira uma entrada válida.<br>
3- Itere a variável i até o tamanho da altura.<br>
&nbsp; &nbsp; 4- Imprima os #. [Não se esqueça da quebra de linha!]</div>

<p>&nbsp;</p>
</details>

<h2><b>Como testar seu código no IDE do CS50?</b></h2>

<p>Execute o seguinte para avaliar se seu código está correto usando <b>check50</b>. Mas certifique-se de compilar e testar você mesmo!</p>

<div style="background:#eeeeee;border:1px solid #cccccc;padding:5px 10px;"><tt>check50 cs50/problems/2021/x/mario/less</tt></div>

<p>Execute o seguinte para avaliar o style do seu código usando <strong>style50</strong>.</p>

<div style="background:#eeeeee;border:1px solid #cccccc;padding:5px 10px;"><tt>style50 mario.c</tt></div>
 <p></p>
</div>

  

  <div class="js-attendance-handler">
    <div class="alert alert-warning js-alert-max-time" style="display: none;">
      Você atingiu o máximo de horas assistidas deste curso.
    </div>
    <div class="alert alert-warning js-alert-max-attempts" style="display: none;">
      Você atingiu o máximo de visualizações deste curso.
    </div>
  </div>
</div>

            
          </div>
