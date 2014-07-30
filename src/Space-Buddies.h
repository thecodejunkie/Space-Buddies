/*
 * Space_Buddies.h
 *
 * Created: 08/06/2014 00:09:25
 *  Author: Justin
 */ 

#define NOTE(tone, dur) ((((((uint8_t)(dur)) & 0x07)<<5) | (((uint8_t)(tone)) & 0x1F)))
#define GET_TONE(note) ((note) & 0x1F)
#define GET_DURATION(note) (((note)>>5) & 0x07)
#define END_MARKER 0XFF
#define READ_PIN(pin) ((PIND & (1 << pin)) >> pin)
#define PINMODE_OUTPUT(pin) (DDRD |= (1 << pin))
#define READ_BIT(byte, bit) ((byte & (1 << bit)) >> bit)
#define TOGGLE_PIN(pin) (PORTD ^= (1 << pin))
#define PIN_HIGH(pin) (PORTD |= (1 << pin))
#define PIN_LOW(pin) (PORTD &= (255 ^ (1 << pin)))

enum {
	T_REST,
	T_C,
	T_CS,
	T_D,
	T_EB,
	T_E,
	T_F,
	T_FS,
	T_G,
	T_AB,
	T_A,
	T_BB,
	T_B,
	T_CX,
	T_CSX,
	T_DX,
	T_EBX,
	T_EX,
	T_FX,
	T_FSX,
	T_GX,
	T_ABX,
	T_AX,
	T_BBX,
	T_BX
};