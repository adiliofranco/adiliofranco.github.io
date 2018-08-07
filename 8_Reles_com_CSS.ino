#include <SPI.h>
#include <Ethernet.h>

byte mac[] = {0x90, 0xA2, 0xDA, 0x0D, 0xA6, 0x09 }; // mac address
byte ip[] = {172, 16, 0, 20 }; // ip lan
byte gateway[] = {172, 16, 0, 1 }; // gatway
byte subnet[] = {255, 255, 255, 0 }; //subnet mask
EthernetServer server(80); //server port

int rele1 = 2;
int rele2 = 3;
int rele3 = 4;
int rele4 = 5;
int rele5 = 6;
int rele6 = 7;
int rele7 = 8;
int rele8 = 9;
int rele9 = 10;
int rele10 = 22;
int rele11 = 24;
int rele12 = 26;
int rele13 = 28;
int rele14 = 30;
int rele15 = 32;
int rele16 = 34;

//int entrada1 = A0; //LDR

//OneWire  ds(6); //sensor de temperatura DS18B20 - colocar resistor 4.7K
//float temperatura;
//int ldr;
//String final_ldr;

String readString;

void setup(){

  Ethernet.begin(mac, ip, gateway, subnet);
  server.begin();
  Serial.begin(9600);

  pinMode(rele1,  OUTPUT);
  pinMode(rele2, OUTPUT);
  pinMode(rele3, OUTPUT);
  pinMode(rele4, OUTPUT);
  pinMode(rele5, OUTPUT);
  pinMode(rele6, OUTPUT);
  pinMode(rele7, OUTPUT);
  pinMode(rele8, OUTPUT);
  pinMode(rele9, OUTPUT);
  pinMode(rele10, OUTPUT);
  pinMode(rele11, OUTPUT);
  pinMode(rele12, OUTPUT);
  pinMode(rele13, OUTPUT);
  pinMode(rele14, OUTPUT);
  pinMode(rele15, OUTPUT);
  pinMode(rele16, OUTPUT);
//  pinMode(entrada1, INPUT);
}

void loop(){
   displayWeb();
}

void displayWeb(){
EthernetClient client = server.available();
  if (client) {
    while (client.connected()) {
      if (client.available()) {
        char c = client.read();

        //read char by char HTTP request
        if (readString.length() < 1000) {

          //store characters to string
          readString += c;
          //Serial.print(c);
        }

        //RECEBE A INFORMAÇÃO PELA URL PARA ENVIAR AS INFORMAÇÕES PARA AS PORTAS UTILIZADAS
        if (c == '\n') {

          Serial.println(readString);
       
          if(readString.indexOf("?R1Ligado") >0) {
            digitalWrite(rele1, HIGH);
          }
          if(readString.indexOf("?R1Desligado") >0) {
            digitalWrite(rele1, LOW);
          }

          if(readString.indexOf("?R2Ligado") >0) {
            digitalWrite(rele2, HIGH);
          }
          if(readString.indexOf("?R2Desligado") >0) {
            digitalWrite(rele2, LOW);
          }

          if(readString.indexOf("?R3Ligado") >0) {
            digitalWrite(rele3, HIGH);
          }
          if(readString.indexOf("?R3Desligado") >0) {
            digitalWrite(rele3, LOW);
          }

          if(readString.indexOf("?R4Ligado") >0) {
            digitalWrite(rele4, HIGH);
          }
          if(readString.indexOf("?R4Desligado") >0) {
            digitalWrite(rele4, LOW);
          }

          if(readString.indexOf("?R5Ligado") >0) {
            digitalWrite(rele5, HIGH);
          }
          if(readString.indexOf("?R5Desligado") >0) {
            digitalWrite(rele5, LOW);
          }

          if(readString.indexOf("?R6Ligado") >0) {
            digitalWrite(rele6, HIGH);
          }
          if(readString.indexOf("?R6Desligado") >0) {
            digitalWrite(rele6, LOW);
          }

          if(readString.indexOf("?R7Ligado") >0) {
            digitalWrite(rele7, HIGH);
          }
          if(readString.indexOf("?R7Desligado") >0) {
            digitalWrite(rele7, LOW);
          }

          if(readString.indexOf("?R8Ligado") >0) {
            digitalWrite(rele8, HIGH);
          }
          if(readString.indexOf("?R8Desligado") >0) {
            digitalWrite(rele8, LOW);
          }

          if(readString.indexOf("?R9Ligado") >0) {
            digitalWrite(rele9, HIGH);
          }
          if(readString.indexOf("?R9Desligado") >0) {
            digitalWrite(rele9, LOW);
          }

          if(readString.indexOf("?R10Ligado") >0) {
            digitalWrite(rele10, HIGH);
          }
          if(readString.indexOf("?R10Desligado") >0) {
            digitalWrite(rele10, LOW);
          }
          
          if(readString.indexOf("?R11Ligado") >0) {
            digitalWrite(rele11, HIGH);
          }
          if(readString.indexOf("?R11Desligado") >0) {
            digitalWrite(rele11, LOW);
          }

          if(readString.indexOf("?R12Ligado") >0) {
            digitalWrite(rele12, HIGH);
          }
          if(readString.indexOf("?R12Desligado") >0) {
            digitalWrite(rele12, LOW);
          }

          if(readString.indexOf("?R13Ligado") >0) {
            digitalWrite(rele13, HIGH);
          }
          if(readString.indexOf("?R13Desligado") >0) {
            digitalWrite(rele13, LOW);
          }

         if(readString.indexOf("?R14Ligado") >0) {
            digitalWrite(rele14, HIGH);
          }
          if(readString.indexOf("?R14Desligado") >0) {
            digitalWrite(rele14, LOW);
          }

          if(readString.indexOf("?R15Ligado") >0) {
            digitalWrite(rele15, HIGH);
          }
          if(readString.indexOf("?R15Desligado") >0) {
            digitalWrite(rele15, LOW);
          }

          if(readString.indexOf("?R16Ligado") >0) {
            digitalWrite(rele16, HIGH);
          }
          if(readString.indexOf("?R16Desligado") >0) {
            digitalWrite(rele16, LOW);
          }

          // R serve para apontar no codigo html se esta ligado ou desligado;
          int R1 = digitalRead(rele1);
          int R2 = digitalRead(rele2);
          int R3 = digitalRead(rele3);
          int R4 = digitalRead(rele4);
          int R5 = digitalRead(rele5);
          int R6 = digitalRead(rele6);
          int R7 = digitalRead(rele7);
          int R8 = digitalRead(rele8);
          int R9 = digitalRead(rele9);
          int R10 = digitalRead(rele10);
          int R11 = digitalRead(rele11);
          int R12 = digitalRead(rele12);
          int R13 = digitalRead(rele13);
          int R14 = digitalRead(rele14);
          int R15 = digitalRead(rele15);
          int R16 = digitalRead(rele16);
          
          client.println(F("HTTP/1.1 200 OK")); //send new page
          client.println(F("Content-Type: text/html"));
          client.println();

          client.println(F("<HTML>"));
          client.println(F("<HEAD>"));
          client.println(F("<title>Conect Home</title>"));
          client.println(F("<META HTTP-EQUIV='refresh' CONTENT='15'>")); //reload de 15 segundos
          client.println(F("<meta http-equiv='Content-Type' content='text/html; charset=utf-8'>"));
          client.println(F("<link href='http://noxweb.com.br/bootstrap/3.3.1/css/bootstrap.min.css' rel='stylesheet'></link>"));
          
          //codigo js para informar nome
          client.println(F("<script language=javascript type='text/javascript'>"));
          client.println(F("dayName = new Array ('domingo', 'segunda', 'terça', 'quarta', 'quinta', 'sexta', 'sábado')"));
          client.println(F("monName = new Array ('janeiro', 'fevereiro', 'março', 'abril', 'maio', 'junho', 'agosto', 'outubro', 'novembro', 'dezembro')"));
          client.println(F("now = new Date"));

          client.println(F("</script>"));
          client.println(F("</head>"));
          client.println(F("<body>"));
          
          // menu
          client.println(F("<nav class='navbar navbar-default navbar-fixed-top' role='navigation'>"));
          client.println(F("<div class='navbar-header'>"));
          client.println(F("<a class='navbar-brand' rel='home' href=''>Conect Home </a>"));
          client.println(F("</div>"));
          client.println(F("<div class='collapse navbar-collapse'>"));
          client.println(F("<ul class='nav navbar-nav'>"));
          client.println(F("<li><a href='#'>Menu Principal</a></li>"));
          //client.println(F("<li><a target='_blank' href=''>Ambientes</a></li>"));
          client.println(F("</ul>"));
          client.println(F("</div>"));
          client.println(F("</nav>"));
          // final menu

          //painel de botões
          client.println(F("<div class='container-fluid'>"));
          client.println(F("<div class='col-sm-8'>"));
          client.println(F("<h2>Painel controle</h2>"));
          client.println(F("<div class='panel panel-default'>"));
          client.println(F("<div class='panel-heading'>Controles</div>"));
          client.println(F("<div class='panel-body'>"));

          //Mostra data com JS
          client.println(F("<script language=javascript type='text/javascript'>"));
          client.println(F("now = new Date"));
          client.println(F("document.write ('Hoje é ' + dayName[now.getDay() ] + ', ' + now.getDate() + ' de ' + monName [now.getMonth() ] + ' de ' + now.getFullYear() )"));
          client.println(F("</script>"));
          
          client.println(F("<table class='table table-bordered'>"));
          client.println(F("<tbody>"));
          
          client.println(F("<tr><td width=175px>Estatus"));
          client.println(F("</td><td>"));
          client.println(F("</td></tr>"));

          //Rele 1
          client.println(F("<tr><td width=175px>Rele 1-"));
          if(R1 == HIGH){
            client.println(F("Ligado"));
            client.println(F("</td><td>"));
            client.println(F("<a class='btn btn-danger btn-lg' href='?R1Desligado'>Desligar</buttLigado>"));
          }else{
            client.println(F("Desligado"));
            client.println(F("</td><td>"));
            client.println(F("<a class='btn btn-success btn-lg' href='?R1Ligado'>Ligar</buttLigado>"));      
          }      
          client.println(F("</td></tr>"));

          //Rele 2
          client.println(F("<tr><td width=175px>Rele 2-"));
          if(R2 == HIGH){
            client.println(F("Ligado"));
            client.println(F("</td><td>"));
            client.println(F("<a class='btn btn-danger btn-lg' href='?R2Desligado'>Desligar</buttLigado>"));
          }else{
            client.println(F("Desligado"));
            client.println(F("</td><td>"));
            client.println(F("<a class='btn btn-success btn-lg' href='?R2Ligado'>Ligar</buttLigado>"));      
          }      
          client.println(F("</td></tr>"));

          //Rele 3
          client.println(F("<tr><td width=175px>Rele 3-"));
          if(R3 == HIGH){
            client.println(F("Ligado"));
            client.println(F("</td><td>"));
            client.println(F("<a class='btn btn-danger btn-lg' href='?R3Desligado'>Desligar</buttLigado>"));
          }else{
            client.println(F("Desligado"));
            client.println(F("</b></td><td>"));
            client.println(F("<a class='btn btn-success btn-lg' href='?R3Ligado'>Ligar</buttLigado>"));      
          }      
          client.println(F("</td></tr>"));

          //Rele 4
          client.println(F("<tr><td width=175px>Rele 4-"));
          if(R4 == HIGH){
            client.println(F("Ligado"));
            client.println(F("</td><td>"));
            client.println(F("<a class='btn btn-danger btn-lg' href='?R4Desligado'>Desligar</buttLigado>"));
          }else{
            client.println(F("Desligado"));
            client.println(F("</td><td>"));
            client.println(F("<a class='btn btn-success btn-lg' href='?R4Ligado'>Ligar</buttLigado>"));      
          }      
          client.println(F("</td></tr>"));

          //Rele 5
          client.println(F("<tr><td width=175px>Rele 5-"));
          if(R5 == HIGH){
            client.println(F("Ligado"));
            client.println(F("</td><td>"));
            client.println(F("<a class='btn btn-danger btn-lg' href='?R5Desligado'>Desligar</buttLigado>"));
          }else{
            client.println(F("Desligado"));
            client.println(F("</td><td>"));
            client.println(F("<a class='btn btn-success btn-lg' href='?R5Ligado'>Ligar</buttLigado>"));      
          }      
          client.println(F("</td></tr>"));

          //Rele 6
          client.println(F("<tr><td width=175px>Rele 6-"));
          if(R6 == HIGH){
            client.println(F("Ligado"));
            client.println(F("</td><td>"));
            client.println(F("<a class='btn btn-danger btn-lg' href='?R6Desligado'>Desligar</buttLigado>"));
          }else{
            client.println(F("Desligado"));
            client.println(F("</td><td>"));
            client.println(F("<a class='btn btn-success btn-lg' href='?R6Ligado'>Ligar</buttLigado>"));      
          }      
          client.println(F("</td></tr>"));

          //Rele 7
          client.println(F("<tr><td width=175px>Rele 7-"));
          if(R7 == HIGH){
            client.println(F("Ligado"));
            client.println(F("</td><td>"));
            client.println(F("<a class='btn btn-danger btn-lg' href='?R7Desligado'>Desligar</buttLigado>"));
          }else{
            client.println(F("Desligado"));
            client.println(F("</td><td>"));
            client.println(F("<a class='btn btn-success btn-lg' href='?R7Ligado'>Ligar</buttLigado>"));      
          }      
          client.println(F("</td></tr>"));

          //Rele 8
          client.println(F("<tr><td width=175px>Rele 8-"));
          if(R8 == HIGH){
            client.println(F("Ligado"));
            client.println(F("</td><td>"));
            client.println(F("<a class='btn btn-danger btn-lg' href='?R8Desligado'>Desligar</buttLigado>"));
          }else{
            client.println(F("Desligado"));
            client.println(F("</td><td>"));
            client.println(F("<a class='btn btn-success btn-lg' href='?R8Ligado'>Ligar</buttLigado>"));      
          }      
          client.println(F("</td></tr>"));

          //Rele 9
          client.println(F("<tr><td width=175px>Rele 9-"));
          if(R9 == HIGH){
            client.println(F("Ligado"));
            client.println(F("</td><td>"));
            client.println(F("<a class='btn btn-danger btn-lg' href='?R9Desligado'>Desligar</buttLigado>"));
          }else{
            client.println(F("Desligado"));
            client.println(F("</td><td>"));
            client.println(F("<a class='btn btn-success btn-lg' href='?R9Ligado'>Ligar</buttLigado>"));      
          }      
          client.println(F("</td></tr>"));

          //Rele 10
          client.println(F("<tr><td width=175px>Rele 10-"));
          if(R10 == HIGH){
            client.println(F("Ligado"));
            client.println(F("</td><td>"));
            client.println(F("<a class='btn btn-danger btn-lg' href='?R10Desligado'>Desligar</buttLigado>"));
          }else{
            client.println(F("Desligado"));
            client.println(F("</td><td>"));
            client.println(F("<a class='btn btn-success btn-lg' href='?R10Ligado'>Ligar</buttLigado>"));      
          }      
          client.println(F("</td></tr>"));

          //Rele 11
          client.println(F("<tr><td width=175px>Rele 11-"));
          if(R11 == HIGH){
            client.println(F("Ligado"));
            client.println(F("</td><td>"));
            client.println(F("<a class='btn btn-danger btn-lg' href='?R11Desligado'>Desligar</buttLigado>"));
          }else{
            client.println(F("Desligado"));
            client.println(F("</td><td>"));
            client.println(F("<a class='btn btn-success btn-lg' href='?R11Ligado'>Ligar</buttLigado>"));      
          }      
          client.println(F("</td></tr>"));

          //Rele 12
          client.println(F("<tr><td width=175px>Rele 12-"));
          if(R12 == HIGH){
            client.println(F("Ligado"));
            client.println(F("</td><td>"));
            client.println(F("<a class='btn btn-danger btn-lg' href='?R12Desligado'>Desligar</buttLigado>"));
          }else{
            client.println(F("Desligado"));
            client.println(F("</td><td>"));
            client.println(F("<a class='btn btn-success btn-lg' href='?R12Ligado'>Ligar</buttLigado>"));      
          }      
          client.println(F("</td></tr>"));

          //Rele 13
          client.println(F("<tr><td width=175px>Rele 13-"));
          if(R13 == HIGH){
            client.println(F("Ligado"));
            client.println(F("</td><td>"));
            client.println(F("<a class='btn btn-danger btn-lg' href='?R13Desligado'>Desligar</buttLigado>"));
          }else{
            client.println(F("Desligado"));
            client.println(F("</td><td>"));
            client.println(F("<a class='btn btn-success btn-lg' href='?R13Ligado'>Ligar</buttLigado>"));      
          }      
          client.println(F("</td></tr>"));

          //Rele 14
          client.println(F("<tr><td width=175px>Rele 14-"));
          if(R14 == HIGH){
            client.println(F("Ligado"));
            client.println(F("</td><td>"));
            client.println(F("<a class='btn btn-danger btn-lg' href='?R14Desligado'>Desligar</buttLigado>"));
          }else{
            client.println(F("Desligado"));
            client.println(F("</td><td>"));
            client.println(F("<a class='btn btn-success btn-lg' href='?R14Ligado'>Ligar</buttLigado>"));      
          }      
          client.println(F("</td></tr>"));

          //Rele 15
          client.println(F("<tr><td width=175px>Rele 15-"));
          if(R15 == HIGH){
            client.println(F("Ligado"));
            client.println(F("</td><td>"));
            client.println(F("<a class='btn btn-danger btn-lg' href='?R15Desligado'>Desligar</buttLigado>"));
          }else{
            client.println(F("Desligado"));
            client.println(F("</td><td>"));
            client.println(F("<a class='btn btn-success btn-lg' href='?R15Ligado'>Ligar</buttLigado>"));      
          }      
          client.println(F("</td></tr>"));

          //Rele 16
          client.println(F("<tr><td width=175px>Rele 16-"));
          if(R16 == HIGH){
            client.println(F("Ligado"));
            client.println(F("</td><td>"));
            client.println(F("<a class='btn btn-danger btn-lg' href='?R16Desligado'>Desligar</buttLigado>"));
          }else{
            client.println(F("Desligado"));
            client.println(F("</td><td>"));
            client.println(F("<a class='btn btn-success btn-lg' href='?R16Ligado'>Ligar</buttLigado>"));      
          }      
          client.println(F("</td></tr>"));
          client.println(F("</tbody>"));
          client.println(F("</table>"));
          client.println(F("</div>"));
          client.println(F("</div>"));
          client.println(F("<hr>"));
          //Final painel de botões

          //painel de retorno
          client.println(F("<div class='panel panel-default'>"));
          client.println(F("<div class='panel-heading'>Dados da Piscina</div>"));
          client.println(F("<div class='panel-body'>"));
          client.println(F("<table class='table table-bordered'>"));
          client.println(F("<tbody>"));
          client.println(F("<tr><td width=175px>Temperatura da Piscina "));
          client.println(F("</td><td>"));
          //client.println(temperatura);
          client.println("ºC");
          client.println(F("</td></tr>"));
          //client.println(F("<tr><td width=175px>Luz Ambiente"));
          //client.println(F("</td><td>"));
          //client.println(final_ldr);
          //client.println(F("</td></tr>"));
          client.println(F("</tbody>"));
          client.println(F("</table>"));
          client.println(F("</div>"));
          client.println(F("</div>"));
          //client.println(F("</div>"));
          //Final painel de retorno
          client.println(F("<hr>"));

          /*//painel informações do aquario para base de dados (TXT)
          client.println(F("<div class='panel panel-default'>"));
          client.println(F("<div class='panel-heading'>Informações </div>"));
          client.println(F("<div class='panel-body'>"));
          client.println(F("<table class='table table-bordered'>"));
          client.println(F("<tbody>"));
         // client.println(F("<tr><td width=175px>Tamanho"));
         // client.println(F("</td><td>"));
          //client.println("100x100x100 ");
          //client.println("100 Litros");
          //client.println(F("</td></tr>"));
         // client.println(F("<tr><td width=175px>PH"));
          //client.println(F("</td><td>"));
          //client.println("7.5 ppm");
         // client.println(F("</td></tr>"));
          //client.println(F("<tr><td width=175px>Observações"));
         // client.println(F("</td><td>"));
         // client.println("--");
          //client.println(F("</td></tr>"));
          client.println(F("</tbody>"));
          client.println(F("</table>"));
          client.println(F("</div>"));
          client.println(F("</div>"));
          client.println(F("</div>"));
          client.println(F("</div>"));
          //final painel de informações (TXT)
*/
          client.println(F("</body>"));
          client.println(F("</html>"));

          delay(1);
          //stopping client
          client.stop();

          //clearing string for next read
          readString="";
        }
      }
    }
  }
}


