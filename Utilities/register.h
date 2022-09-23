/*
 * register.h
 *
 * Created: 28/08/2022 10:52:08 م
 *  Author: user
 */ 


#ifndef REGISTER_H_
#define REGISTER_H_
/********************/
/* DIO Registers */ 
/*******************/
/*PORTA registers.*/
#define PORTA (*(volatile uint8_t*)(0x3B))
#define DDRA (*(volatile uint8_t*)(0x3A))
#define PINA (*(volatile uint8_t*)(0x39))
/*PORTB registers.*/
#define PORTB (*(volatile uint8_t*)(0x38))
#define DDRB (*(volatile uint8_t*)(0x37))
#define PINB (*(volatile uint8_t*)(0x36))
/*PORTC registers.*/
#define PORTC (*(volatile uint8_t*)(0x35))
#define DDRC (*(volatile uint8_t*)(0x34))
#define PINC (*(volatile uint8_t*)(0x33))
/*PORTD registers.*/
#define PORTD (*(volatile uint8_t*)(0x32))
#define DDRD (*(volatile uint8_t*)(0x31))
#define PIND (*(volatile uint8_t*)(0x30))
/*PIN of Hardware PORTs*/
#define PORT_A 1
#define PORT_B 2
#define PORT_C 3
#define PORT_D 4

/*pinNumber*/
#define  PIN0 0
#define  PIN1 1
#define  PIN2 2
#define  PIN3 3
#define  PIN4 4
#define  PIN5 5
#define  PIN6 6
#define  PIN7 7
/*BitNumber.*/
#define  BIT0 0
#define  BIT1 1
#define  BIT2 2
#define  BIT3 3
#define  BIT4 4
#define  BIT5 5
#define  BIT6 6
#define  BIT7 7
/*Value*/
#define  HIGH 1
#define  LOW 0
/*Direction*/
#define INPUT 0
#define OUTPUT 1

/*****************************/
/* Timer registers.*/
/*****************************/
/*TIMER0 registers.*/
/*****************************/
#define TCCR0 (*(volatile uint8_t*)(0x53))
#define TCNT0 (*(volatile uint8_t*)(0x52))
#define TIMSK (*(volatile uint8_t*)(0x59))
#define TIFR (*(volatile uint8_t*)(0x58))
#define OCR0 (*(volatile uint8_t*)(0x5C))
/*TCCR0 PINs*/
#define CS00 0
#define CS01 1
#define CS02 2
#define WGM01 3
#define COM00 4
#define COM01 5
#define WGM00 6
#define FOC0 7
/*TIMSK PINs*/
#define TOIE0 0
#define OCIE0 1
/*TIFR PINs*/
#define TOV0 0
#define OCF0 1
/******************************/
/*Tmier1 register.*/
/******************************/
#define TCCR1A (*(volatile uint8_t*)(0x4F))
#define TCCR1B (*(volatile uint8_t*)(0x4E))
#define TCNT1H (*(volatile uint8_t*)(0x4D))
#define TCNT1L (*(volatile uint8_t*)(0x4C))
#define OCR1AH (*(volatile uint8_t*)(0x4B))
#define OCR1AL (*(volatile uint8_t*)(0x4A)) /*Low bit*/ 
#define OCR1BH (*(volatile uint8_t*)(0x49))
#define OCR1BL (*(volatile uint8_t*)(0x48))
#define ICR1H (*(volatile uint8_t*)(0x47))
#define ICR1L (*(volatile uint8_t*)(0x46))
#define TIMSK1 (*(volatile uint8_t*)(0x59))
#define TIFR1 (*(volatile uint8_t*)(0x58))
/*TCCR1B PINs*/
#define ICNC1 7
#define ICES1 6
#define WGM13 4
#define WGM12 3
#define CS12 2
#define CS11 1 
#define CS10 0
/*TCCR1A PINs.*/
#define WGM10 0
#define WGM11 1
#define FOC1B 2
#define FOC1A 3
#define COM1B0 4
#define COM1B1 5
#define COM1A0 6
#define COM1A1 7   
/*TIFR1 PINs.*/
#define TOV1 2
#define OCF1B 3
#define OCF1A 4
#define ICF1 5  
/******************************/
/*Interrupt registers.*/
/******************************/
#define MCUCR (*(volatile uint8_t*)(0x55))
#define MCUCSR (*(volatile uint8_t*)(0x54))
#define GICR (*(volatile uint8_t*)(0x5B))
#define GIFR (*(volatile uint8_t*)(0x5A))
#define SREG (*(volatile uint8_t*)(0x5F))
/*MCUCR PINs.*/
#define ISC00 0
#define ISC01 1
#define ISC10 2
#define ISC11 3
/*MCUCSR PINs.*/
#define ISC2 6
/*GICR PINs*/
#define INT2 5
#define INT0 6
#define INT1 7 
/*GIFR PINs.*/
#define INTF2 5
#define INTF0 6
#define INTF1 7 
/*SREG PINs.*/
#define I 7
/********************************/
/*ADC registers.*/
/********************************/
#define ADMUX (*(volatile uint8_t*)(0x27))
#define ADCSRA (*(volatile uint8_t*)(0x26))
#define ADCH (*(volatile uint8_t*)(0x25))
#define ADCL (*(volatile uint8_t*)(0x24))
#define SFIOR (*(volatile uint8_t*)(0x50))

/*ADMUX PINs.*/
#define MUX0 0
#define MUX1 1
#define MUX2 2
#define MUX3 3
#define MUX4 4
#define ADLAR 5
#define REFS0 6
#define REFS1 7
/*ADCSRA PINs.*/
#define ADPS0 0
#define ADPS1 1     
#define ADPS2 2
#define ADIE 3
#define ADIF 4
#define ADATE 5
#define ADSC 6
#define ADEN 7
/*SFIOR PINs.*/
#define ADTS0 5
#define ADTS1 6
#define ADTS2  7     
/*****************************/
/*Watchdog timer register.*/
/*****************************/
#define WDTCR (*((volatile uint8_t*)(0x41)))
/*WDTCR PINs.*/
#define WDP0 0
#define WDP1 1
#define WDP2 2
#define WDE 3
#define WDTOE 4
/********************************/
/*  UART Registers      .*/
/********************************/
#define UDR (*(volatile uint8_t*)(0x2C))
#define UCSRA (*(volatile uint8_t*)(0x2B))
#define UCSRB (*(volatile uint8_t*)(0x2A))
#define UCSRC (*(volatile uint8_t*)(0x40))
#define UBRRL (*(volatile uint8_t*)(0x29))
//#define UBRRH (*(volatile uint8_t*)(0x40))
/*UCSRA Bits.*/
#define MPCM 0
#define U2X 1
#define PE 2
#define DOR 3
#define FE 4
#define UDRE 5
#define TXC 6
#define RXC 7
/*UCSRB Bits.*/
#define TXB8 0
#define RXB8 1
#define UCSZ2 2
#define TXEN 3
#define RXEN 4
#define UDRIE 5
#define TXCIE 6
#define RXCIE 7
/*UCSRC Bits*/
#define UCPOL 0
#define UCSZ0 1
#define UCSZ1 2
#define USBS 3
#define UPM0 4
#define UPM1 5
#define UMSEL 6
#define URSEL 7
               
#endif /* REGISTER_H_ */