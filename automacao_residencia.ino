#include <SPI.h>
#include <Ethernet.h>
String readString;

int pino_rele1 = 3;
int pino_rele2 = 4;
int pino_rele3 = 5;
int pino_rele4 = 6;
int pino_rele5 = 7;
int pino_rele6 = 8;
int pino_rele7 = 9;
int pino_rele8 = 10;
int pino_rele9 = 11;
int pino_rele10 = 12;
int pino_rele11 = 13;
int pino_rele12 = 14;
int pino_rele13 = 15;
int pino_rele14 = 16;
int pino_rele15 = 17;
int pino_rele16 = 18;


boolean ligado = true;
boolean ligado_2 = true;
boolean ligado_3 = true;
boolean ligado_4 = true;
boolean ligado_5 = true;
boolean ligado_6 = true;
boolean ligado_7 = true;
boolean ligado_8 = true;
boolean ligado_9 = true;
boolean ligado_10 = true;
boolean ligado_11 = true;
boolean ligado_12 = true;
boolean ligado_13 = true;
boolean ligado_14 = true;
boolean ligado_15 = true;
boolean ligado_16 = true;


//Informacoes de endereco IP, gateway, mascara de rede
byte mac[] = { 0xA4, 0x28, 0x72, 0xCA, 0x55, 0x2F };
byte ip[] = { 192, 168, 0, 110 };
byte gateway[] = { 192, 168, 0, 1 };
byte subnet[] = { 255, 255, 255, 0 };

EthernetServer server(80);

void setup()
{
  Serial.begin(9600);
  pinMode(pino_rele1, OUTPUT);
  pinMode(pino_rele2, OUTPUT);
  pinMode(pino_rele3, OUTPUT);
  pinMode(pino_rele4, OUTPUT);
  pinMode(pino_rele5, OUTPUT);
  pinMode(pino_rele6, OUTPUT);
  pinMode(pino_rele7, OUTPUT);
  pinMode(pino_rele8, OUTPUT);
  pinMode(pino_rele9, OUTPUT);
  pinMode(pino_rele10, OUTPUT);
  pinMode(pino_rele11, OUTPUT);
  pinMode(pino_rele12, OUTPUT);
  pinMode(pino_rele13, OUTPUT);
  pinMode(pino_rele14, OUTPUT);
  pinMode(pino_rele15, OUTPUT);
  pinMode(pino_rele16, OUTPUT);


  //Inicializa Ethernet Shield
  Ethernet.begin(mac, ip, gateway, subnet);
  server.begin();

  Serial.println("Home Conect - Automacao Residencial"); 

  //Desliga os dois reles
  digitalWrite(pino_rele1, HIGH);
  digitalWrite(pino_rele2, HIGH);
  digitalWrite(pino_rele3, HIGH);
  digitalWrite(pino_rele4, HIGH);
  digitalWrite(pino_rele5, HIGH);
  digitalWrite(pino_rele6, HIGH);
  digitalWrite(pino_rele7, HIGH);
  digitalWrite(pino_rele8, HIGH);
  digitalWrite(pino_rele9, HIGH);
  digitalWrite(pino_rele10, HIGH);
  digitalWrite(pino_rele11, HIGH);
  digitalWrite(pino_rele12, HIGH);
  digitalWrite(pino_rele13, HIGH);
  digitalWrite(pino_rele14, HIGH);
  digitalWrite(pino_rele15, HIGH);
  digitalWrite(pino_rele16, HIGH);


}

void loop()
{
  EthernetClient client = server.available();
  if (client) {
    while (client.connected())
    {
      if (client.available())
      {
        char c = client.read();
        if (readString.length() < 100) {
          readString += c;
        }
        if (c == 'n')
        {
          //Controle do rele1
          Serial.println(readString);
          //Liga o Rele 1
          if (readString.indexOf("?ligar") > 0)
          {
            digitalWrite(pino_rele1, LOW);
            Serial.println("Rele 1 Ligado");
            ligado = false;
          }
          else
          {
            //Desliga o Rele 1
            if (readString.indexOf("?desligar") > 0)
            {
              digitalWrite(pino_rele1, HIGH);
              Serial.println("Rele 1 Desligado");
              ligado = true;
            }
          }

          //Controle do rele2
          Serial.println(readString);
          //Liga o Rele 2
          if (readString.indexOf("?2_ligar") > 0)
          {
            digitalWrite(pino_rele2, LOW);
            Serial.println("Rele 2 Ligado");
            ligado_2 = false;
          }
          else
          {
            //Desliga o Rele 2
            if (readString.indexOf("?2_desligar") > 0)
            {
              digitalWrite(pino_rele2, HIGH);
              Serial.println("Rele 2 Desligado");
              ligado_2 = true;
            }
          }

           //Controle do rele3
          Serial.println(readString);
          //Liga o Rele 3
          if (readString.indexOf("?ligar") > 0)
          {
            digitalWrite(pino_rele3, LOW);
            Serial.println("Rele 3 Ligado");
            ligado = false;
          }
          else
          {
            //Desliga o Rele 3
            if (readString.indexOf("?desligar") > 0)
            {
              digitalWrite(pino_rele3, HIGH);
              Serial.println("Rele 3 Desligado");
              ligado = true;
            }
          }

           //Controle do rele4
          Serial.println(readString);
          //Liga o Rele 4
          if (readString.indexOf("?ligar") > 0)
          {
            digitalWrite(pino_rele4, LOW);
            Serial.println("Rele 4 Ligado");
            ligado = false;
          }
          else
          {
            //Desliga o Rele 4
            if (readString.indexOf("?desligar") > 0)
            {
              digitalWrite(pino_rele4, HIGH);
              Serial.println("Rele 4 Desligado");
              ligado = true;
            }
          }

           //Controle do rele5
          Serial.println(readString);
          //Liga o Rele 5
          if (readString.indexOf("?ligar") > 0)
          {
            digitalWrite(pino_rele5, LOW);
            Serial.println("Rele 5 Ligado");
            ligado = false;
          }
          else
          {
            //Desliga o Rele 5
            if (readString.indexOf("?desligar") > 0)
            {
              digitalWrite(pino_rele5, HIGH);
              Serial.println("Rele 5 Desligado");
              ligado = true;
            }
          }

           //Controle do rele6
          Serial.println(readString);
          //Liga o Rele 6
          if (readString.indexOf("?ligar") > 0)
          {
            digitalWrite(pino_rele6, LOW);
            Serial.println("Rele 6 Ligado");
            ligado = false;
          }
          else
          {
            //Desliga o Rele 6
            if (readString.indexOf("?desligar") > 0)
            {
              digitalWrite(pino_rele6, HIGH);
              Serial.println("Rele 6 Desligado");
              ligado = true;
            }
          }

           //Controle do rele7
          Serial.println(readString);
          //Liga o Rele 7
          if (readString.indexOf("?ligar") > 0)
          {
            digitalWrite(pino_rele7, LOW);
            Serial.println("Rele 7 Ligado");
            ligado = false;
          }
          else
          {
            //Desliga o Rele 7
            if (readString.indexOf("?desligar") > 0)
            {
              digitalWrite(pino_rele7, HIGH);
              Serial.println("Rele 7 Desligado");
              ligado = true;
            }
          }

           //Controle do rele8
          Serial.println(readString);
          //Liga o Rele 8
          if (readString.indexOf("?ligar") > 0)
          {
            digitalWrite(pino_rele8, LOW);
            Serial.println("Rele 8 Ligado");
            ligado = false;
          }
          else
          {
            //Desliga o Rele 8
            if (readString.indexOf("?desligar") > 0)
            {
              digitalWrite(pino_rele8, HIGH);
              Serial.println("Rele 8 Desligado");
              ligado = true;
            }
          }

           //Controle do rele9
          Serial.println(readString);
          //Liga o Rele 9
          if (readString.indexOf("?ligar") > 0)
          {
            digitalWrite(pino_rele9, LOW);
            Serial.println("Rele 9 Ligado");
            ligado = false;
          }
          else
          {
            //Desliga o Rele 9
            if (readString.indexOf("?desligar") > 0)
            {
              digitalWrite(pino_rele9, HIGH);
              Serial.println("Rele 9 Desligado");
              ligado = true;
            }
          }

           //Controle do rele10
          Serial.println(readString);
          //Liga o Rele 10
          if (readString.indexOf("?ligar") > 0)
          {
            digitalWrite(pino_rele10, LOW);
            Serial.println("Rele 10 Ligado");
            ligado = false;
          }
          else
          {
            //Desliga o Rele 10
            if (readString.indexOf("?desligar") > 0)
            {
              digitalWrite(pino_rele10, HIGH);
              Serial.println("Rele 10 Desligado");
              ligado = true;
            }
          }

           //Controle do rele11
          Serial.println(readString);
          //Liga o Rele 11
          if (readString.indexOf("?ligar") > 0)
          {
            digitalWrite(pino_rele11, LOW);
            Serial.println("Rele 11 Ligado");
            ligado = false;
          }
          else
          {
            //Desliga o Rele 11
            if (readString.indexOf("?desligar") > 0)
            {
              digitalWrite(pino_rele11, HIGH);
              Serial.println("Rele 11 Desligado");
              ligado = true;
            }
          }

           //Controle do rele12
          Serial.println(readString);
          //Liga o Rele 12
          if (readString.indexOf("?ligar") > 0)
          {
            digitalWrite(pino_rele12, LOW);
            Serial.println("Rele 12 Ligado");
            ligado = false;
          }
          else
          {
            //Desliga o Rele 12
            if (readString.indexOf("?desligar") > 0)
            {
              digitalWrite(pino_rele12, HIGH);
              Serial.println("Rele 12 Desligado");
              ligado = true;
            }
          }

           //Controle do rele13
          Serial.println(readString);
          //Liga o Rele 13
          if (readString.indexOf("?ligar") > 0)
          {
            digitalWrite(pino_rele13, LOW);
            Serial.println("Rele 13 Ligado");
            ligado = false;
          }
          else
          {
            //Desliga o Rele 13
            if (readString.indexOf("?desligar") > 0)
            {
              digitalWrite(pino_rele13, HIGH);
              Serial.println("Rele 13 Desligado");
              ligado = true;
            }
          }

           //Controle do rele14
          Serial.println(readString);
          //Liga o Rele 14
          if (readString.indexOf("?ligar") > 0)
          {
            digitalWrite(pino_rele14, LOW);
            Serial.println("Rele 14 Ligado");
            ligado = false;
          }
          else
          {
            //Desliga o Rele 14
            if (readString.indexOf("?desligar") > 0)
            {
              digitalWrite(pino_rele14, HIGH);
              Serial.println("Rele 14 Desligado");
              ligado = true;
            }
          }

           //Controle do rele15
          Serial.println(readString);
          //Liga o Rele 15
          if (readString.indexOf("?ligar") > 0)
          {
            digitalWrite(pino_rele1, LOW);
            Serial.println("Rele 15 Ligado");
            ligado = false;
          }
          else
          {
            //Desliga o Rele 15
            if (readString.indexOf("?desligar") > 0)
            {
              digitalWrite(pino_rele15, HIGH);
              Serial.println("Rele 15 Desligado");
              ligado = true;
            }
          }

           //Controle do rele16
          Serial.println(readString);
          //Liga o Rele 16
          if (readString.indexOf("?ligar") > 0)
          {
            digitalWrite(pino_rele16, LOW);
            Serial.println("Rele 16 Ligado");
            ligado = false;
          }
          else
          {
            //Desliga o Rele 16
            if (readString.indexOf("?desligar") > 0)
            {
              digitalWrite(pino_rele16, HIGH);
              Serial.println("Rele 16 Desligado");
              ligado = true;
            }
          }


          readString = "";

          client.println("HTTP/1.1 200 OK");
          client.println("Content-Type: text/html");
          client.println();
          client.println("<html>");
          client.println("<head>");
          client.println("<title>Home Conect - Automacao Residencial</title>");
          client.println("<meta http-equiv='Content-Type' content='text/html; charset=ISO-8859-1'>");
          client.println("<meta name='viewport' content='width=device-width, initial-scale=1'>");
          client.println("<link rel='stylesheet' href='https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css' />");
          client.println("<script src='https://ajax.googleapis.com/ajax/libs/jquery/3.1.1/jquery.min.js'></script>");
          client.println("<script src='https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js'></script>");
          client.println("<link rel='stylesheet' type='text/css' href='https://github.com/adiliofranco/adiliofranco.github.io/blob/master/automacao_residencial.css' />");
          client.println("<script type='text/javascript' src='https://github.com/adiliofranco/adiliofranco.github.io/blob/master/automacao_residencial.js'></script>");
          client.println("</head>");
          client.println("<body>");
          client.println("<div class='container-fluid'>");
          client.println("  <div class='row'>");
          client.println("    <div class='col-xs-6 text-center'>");
          client.println("        <div id='rele'></div><div id='estado' style='visibility: hidden;'>");
          client.print(ligado);
          client.println("        </div>");
          client.println("    </div>");
          client.println("    <div class='col-xs-6 text-center'>");
          client.println("        <div id='rele_2'></div><div id='estado_2' style='visibility: hidden;'>");
          client.println(ligado_2);
          client.println("        </div>");
          client.println("    </div>");
          client.println("  </div>");
          client.println("</div>");

          client.println("<div id='div3'>Rele 3</div>");
          client.print("<div id='rele_3'></div><div id='estado_3' style='visibility: hidden;'>");
          client.print(ligado_3);
          client.println("</div>");

          client.println("<div id='div4'>Rele 4</div>");
          client.print("<div id='rele_4'></div><div id='estado_4' style='visibility: hidden;'>");
          client.print(ligado_4);
          client.println("</div>");

          client.println("<div id='div5'>Rele 5</div>");
          client.print("<div id='rele_5'></div><div id='estado_5' style='visibility: hidden;'>");
          client.print(ligado_5);
          client.println("</div>");

          client.println("<div id='div6'>Rele 6</div>");
          client.print("<div id='rele_6'></div><div id='estado_6' style='visibility: hidden;'>");
          client.print(ligado_6);
          client.println("</div>");

          client.println("<div id='div7'>Rele 7</div>");
          client.print("<div id='rele_7'></div><div id='estado_7' style='visibility: hidden;'>");
          client.print(ligado_7);
          client.println("</div>");

          client.println("<div id='div8'>Rele 8</div>");
          client.print("<div id='rele_8'></div><div id='estado_8' style='visibility: hidden;'>");
          client.print(ligado_8);
          client.println("</div>");

          client.println("<div id='div9'>Rele 9</div>");
          client.print("<div id='rele_9'></div><div id='estado_9' style='visibility: hidden;'>");
          client.print(ligado_9);
          client.println("</div>");

          client.println("<div id='div10'>Rele 10</div>");
          client.print("<div id='rele_10'></div><div id='estado_10' style='visibility: hidden;'>");
          client.print(ligado_10);
          client.println("</div>");

          client.println("<div id='div11'>Rele 11</div>");
          client.print("<div id='rele_11'></div><div id='estado_11' style='visibility: hidden;'>");
          client.print(ligado_11);
          client.println("</div>");

          client.println("<div id='div12'>Rele 12</div>");
          client.print("<div id='rele_12'></div><div id='estado_12' style='visibility: hidden;'>");
          client.print(ligado_12);
          client.println("</div>");

          client.println("<div id='div13'>Rele 13</div>");
          client.print("<div id='rele_13'></div><div id='estado_13' style='visibility: hidden;'>");
          client.print(ligado_13);
          client.println("</div>");

          client.println("<div id='div14'>Rele 14</div>");
          client.print("<div id='rele_14'></div><div id='estado_14' style='visibility: hidden;'>");
          client.print(ligado_14);
          client.println("</div>");

          client.println("<div id='div15'>Rele 15</div>");
          client.print("<div id='rele_15'></div><div id='estado_15' style='visibility: hidden;'>");
          client.print(ligado_15);
          client.println("</div>");

          client.println("<div id='div16'>Rele 16</div>");
          client.print("<div id='rele_16'></div><div id='estado_16' style='visibility: hidden;'>");
          client.print(ligado_16);
          client.println("</div>");
          
          client.println("<div id='botao'></div>");
          client.println("<div id='botao_2'></div>");
          client.println("<div id='botao_3'></div>");
          client.println("<div id='botao_4'></div>");
          client.println("<div id='botao_5'></div>");
          client.println("<div id='botao_6'></div>");
          client.println("<div id='botao_7'></div>");
          client.println("<div id='botao_8'></div>");
          client.println("<div id='botao_9'></div>");
          client.println("<div id='botao_10'></div>");
          client.println("<div id='botao_11'></div>");
          client.println("<div id='botao_12'></div>");
          client.println("<div id='botao_13'></div>");
          client.println("<div id='botao_14'></div>");
          client.println("<div id='botao_15'></div>");
          client.println("<div id='botao_16'></div>");

          
          client.println("</div>");
          client.println("<script>AlteraRele1()</script>");
          client.println("<script>AlteraRele2()</script>");
          client.println("</div>");
          client.println("</body>");
          client.println("</head>");

          delay(1);
          client.stop();
        }
      }
    }
  }
}
