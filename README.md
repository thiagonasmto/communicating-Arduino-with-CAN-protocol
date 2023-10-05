# Protocolo Controlador de Área (CAN)

## Visão Geral

Bem-vindo ao ao meu repositório pessoal que tem como objeto de estudo o Protocolo Controlador de Área (CAN). Este documento fornece uma breve introdução e visão geral do protocolo CAN, detalhando seu propósito, características e aplicações.

## Sumário

1. [Introdução](#introdução)
2. [Características Principais](#características-principais)
3. [Aplicações](#aplicações)
4. [Fundamentos da Comunicação](#fundamentos-da-comunicação)
5. [Implementações](#implementações)
6. [Primeiros Passos](#primeiros-passos)
7. [Contribuições](#contribuições)
8. [Licença](#licença)

## Introdução

O Controlador de Área (CAN) é um protocolo de comunicação robusto e amplamente utilizado, projetado para a troca de dados em tempo real e alta integridade entre unidades de controle eletrônico (ECUs) em diversos sistemas embarcados. Desenvolvido originalmente pela Bosch, o CAN tornou-se um padrão em aplicações automotivas e industriais.

## Características Principais

- **Confiabilidade:** O CAN é conhecido por sua alta confiabilidade, tornando-o adequado para aplicações críticas onde a integridade dos dados é crucial.

- **Comunicação Determinística:** O CAN oferece comunicação determinística, garantindo que as mensagens sejam transmitidas de maneira previsível e com baixa latência.

- **Sistema Multi-Mestre:** O CAN suporta uma arquitetura multi-mestre, permitindo que vários nós transmitam mensagens na rede sem controle central.

- **Tolerância a Falhas:** O CAN é projetado para ser tolerante a falhas, com recursos como detecção de erros e retransmissão automática de mensagens corrompidas.

- **Escalabilidade:** O protocolo é escalável, sendo aplicável a uma ampla gama de sistemas, desde redes simples até sistemas distribuídos complexos.

Uma característica importante sobre a utilização do protocolo CAN em projetos é o tamanho dos dados que é possível ser transmitido (8 Bytes por mensagem) e a velocidade máxima de transmissão de 1 Mbits/s. O sistema também possui priorização de mensagens, proporcionando um controle refinado sobre a ordem de transmissão e recebimento.

## Aplicações

O CAN é comumente usado em:

- **Sistemas Automotivos:** Utilizado para comunicação entre várias ECUs em veículos modernos, como unidades de controle do motor, sistemas de airbag e sistemas antibloqueio de freios.

- **Automação Industrial:** Aplicado em ambientes industriais para comunicação entre controladores lógicos programáveis (PLCs) e outros dispositivos de controle.

- **Dispositivos Médicos:** Presente em equipamentos médicos para comunicação entre diferentes subsistemas.

- **Aeroespacial:** Utilizado em sistemas avionicos para comunicação entre vários componentes de uma aeronave.

## Fundamentos da Comunicação

O CAN utiliza um barramento diferencial de dois fios para comunicação:

- **CAN High (CAN_H):** Transporta sinais de alta voltagem.
- **CAN Low (CAN_L):** Transporta sinais de baixa voltagem.

As mensagens são transmitidas em um formato de quadro que inclui um identificador, dados e informações de controle. Existem duas versões do protocolo CAN, denominadas CAN 1.0 e CAN 2.0, sendo que a 2.0 é subdividida em CAN 2.0A e CAN 2.0B.

As versões 1.0 e 2.0A possuem identificadores de 11 bits, enquanto a versão 2.0B utiliza identificadores de 29 bits. A última pode ser configurada para operar de forma passiva ou ativa. Na configuração passiva, ela ignora todas as tramas do tipo estendido (29 bits), enquanto na configuração ativa, recebe qualquer mensagem estendida.

![Quadro Padrão CAN](./assets/quadro-CAN2.0A.png)

## Implementações

Existem diferentes versões do CAN, incluindo o CAN Clássico e o CAN FD (Taxa de Dados Flexível), cada um com suas especificações. Vários microcontroladores e circuitos integrados de transceptor suportam o CAN, proporcionando flexibilidade para diferentes aplicações.

## Primeiros Passos

Para começar a trabalhar com o CAN, você pode precisar de um controlador CAN, um transceptor e ferramentas de software apropriadas. Consulte a documentação de seus componentes de hardware e software para detalhes específicos.

## Contribuições

Contribuições para esta documentação são bem-vindas. Se você tiver insights, correções ou informações adicionais para compartilhar, por favor, faça um pull request.

## Licença

Esta documentação está licenciada sob a [Licença Internacional Creative Commons Attribution 4.0](https://creativecommons.org/licenses/by/4.0/).
