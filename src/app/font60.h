// Created by http://oleddisplay.squix.ch/ Consider a donation
// In case of problems make sure that you are using the font file with the correct version!

/* keeps only [0-9:] for ROM size.
 */
#define PROGMEM

const uint8_t DSEG14_Classic_Mini_Regular_60Bitmaps[] PROGMEM = {
	0x07,0xFF,0xFF,0xFF,0x00,0x7F,0xFF,0xFF,0xFC,0x03,0xFF,0xFF,0xFF,0xE0,0x0F,0xFF,0xFF,0xFE,0x04,0x3F,0xFF,0xFF,0xE3,0x70,0xFF,0xFF,0xFE,0x3F,0xE0,0x00,0x00,0x03,0xFF,0x80,0x00,0x00,0x3F,0xFC,0x00,0x00,0x09,0xFF,0xE0,0x00,0x00,0xCF,0xFF,0x00,0x00,0x06,0x7F,0xF8,0x00,0x00,0x73,0xFF,0xC0,0x00,0x07,0x9F,0xFE,0x00,0x00,0x3C,0xFF,0xF0,0x00,0x03,0xE7,0xFF,0x80,0x00,0x1F,0x3F,0xFC,0x00,0x00,0xF9,0xFF,0xE0,0x00,0x07,0xCF,0xFF,0x00,0x00,0x3C,0x7F,0xF8,0x00,0x01,0xE3,0xFF,0xC0,0x00,0x0E,0x1F,0xFE,0x00,0x00,0x70,0xFF,0xF0,0x00,0x03,0x07,0xFF,0x80,0x00,0x10,0x3F,0xFC,0x00,0x00,0x01,0xFF,0xC0,0x00,0x00,0x07,0xFC,0x00,0x00,0x00,0x1F,0xC0,0x00,0x00,0x00,0x7C,0x00,0x00,0x00,0x01,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x03,0xE0,0x00,0x00,0x00,0x3F,0x80,0x00,0x00,0x03,0xFE,0x00,0x00,0x00,0x3F,0xF8,0x00,0x00,0x03,0xFF,0xC0,0x80,0x00,0x1F,0xFE,0x0C,0x00,0x00,0xFF,0xF0,0xE0,0x00,0x07,0xFF,0x87,0x00,0x00,0x3F,0xFC,0x78,0x00,0x01,0xFF,0xE3,0xC0,0x00,0x0F,0xFF,0x3E,0x00,0x00,0x7F,0xF9,0xF0,0x00,0x03,0xFF,0xCF,0x80,0x00,0x1F,0xFE,0x7C,0x00,0x00,0xFF,0xF3,0xC0,0x00,0x07,0xFF,0x9E,0x00,0x00,0x3F,0xFC,0xE0,0x00,0x01,0xFF,0xE6,0x00,0x00,0x0F,0xFF,0x30,0x00,0x00,0x7F,0xF9,0x00,0x00,0x03,0xFF,0xC0,0x00,0x00,0x1F,0xFC,0x00,0x00,0x00,0x7F,0x87,0xFF,0xFF,0xF1,0xE8,0x7F,0xFF,0xFF,0xC6,0x07,0xFF,0xFF,0xFF,0x00,0x7F,0xFF,0xFF,0xFC,0x03,0xFF,0xFF,0xFF,0xE0,0x0F,0xFF,0xFF,0xFE,0x00, // '0'
	0x18,0xF7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0xF3,0xC7,0x0C,0x00,0x03,0x1C,0xF7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0xF3,0xC6, // '1'
	0x07,0xFF,0xFF,0xFF,0x00,0x7F,0xFF,0xFF,0xFC,0x03,0xFF,0xFF,0xFF,0xE0,0x0F,0xFF,0xFF,0xFE,0x00,0x3F,0xFF,0xFF,0xE3,0x00,0xFF,0xFF,0xFE,0x3C,0x00,0x00,0x00,0x03,0xE0,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0x0F,0xC0,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x03,0xF0,0x00,0x00,0x00,0x1F,0x80,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0x07,0xE0,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0x0F,0xC0,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x03,0xF0,0x00,0x00,0x00,0x1F,0x80,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0x07,0xE0,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0x07,0xC0,0x00,0x00,0x00,0x1E,0x03,0xFC,0x07,0xF8,0x70,0x3F,0xF0,0x7F,0xE1,0x83,0xFF,0xC7,0xFF,0x80,0x1F,0xFE,0x3F,0xFC,0x18,0x7F,0xE0,0xFF,0xC0,0xE1,0xFE,0x07,0xFC,0x07,0x80,0x00,0x00,0x00,0x3E,0x00,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0x0F,0xC0,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x03,0xF0,0x00,0x00,0x00,0x1F,0x80,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0x07,0xE0,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0x0F,0xC0,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x03,0xF0,0x00,0x00,0x00,0x1F,0x80,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0x07,0xE0,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0x0F,0xC0,0x00,0x00,0x00,0x7C,0x00,0x00,0x00,0x03,0x87,0xFF,0xFF,0xF0,0x08,0x7F,0xFF,0xFF,0xC0,0x07,0xFF,0xFF,0xFF,0x00,0x7F,0xFF,0xFF,0xFC,0x03,0xFF,0xFF,0xFF,0xE0,0x0F,0xFF,0xFF,0xFE,0x00, // '2'
	0x7F,0xFF,0xFF,0xF0,0x7F,0xFF,0xFF,0xFC,0x3F,0xFF,0xFF,0xFE,0x0F,0xFF,0xFF,0xFE,0x03,0xFF,0xFF,0xFE,0x30,0xFF,0xFF,0xFE,0x3C,0x00,0x00,0x00,0x3E,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x1F,0x80,0x00,0x00,0x0F,0xC0,0x00,0x00,0x07,0xE0,0x00,0x00,0x03,0xF0,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x1F,0x80,0x00,0x00,0x0F,0xC0,0x00,0x00,0x07,0xE0,0x00,0x00,0x03,0xF0,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x1F,0x80,0x00,0x00,0x07,0xC0,0x00,0x00,0x01,0xE3,0xFC,0x07,0xF8,0x73,0xFF,0x07,0xFE,0x1B,0xFF,0xC7,0xFF,0x81,0xFF,0xE3,0xFF,0xC0,0x7F,0xE0,0xFF,0xC3,0x1F,0xE0,0x7F,0xC3,0x80,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xE0,0x00,0x00,0x03,0xF0,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x1F,0x80,0x00,0x00,0x0F,0xC0,0x00,0x00,0x07,0xE0,0x00,0x00,0x03,0xF0,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x1F,0x80,0x00,0x00,0x0F,0xC0,0x00,0x00,0x07,0xE0,0x00,0x00,0x03,0xF0,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0x7C,0x7F,0xFF,0xFF,0x1E,0x7F,0xFF,0xFF,0xC6,0x7F,0xFF,0xFF,0xF0,0x7F,0xFF,0xFF,0xFC,0x3F,0xFF,0xFF,0xFE,0x0F,0xFF,0xFF,0xFE,0x00, // '3'
	0x40,0x00,0x00,0x00,0x37,0x00,0x00,0x00,0x03,0xFE,0x00,0x00,0x00,0x3F,0xF8,0x00,0x00,0x03,0xFF,0xC0,0x00,0x00,0x1F,0xFE,0x00,0x00,0x00,0xFF,0xF0,0x00,0x00,0x07,0xFF,0x80,0x00,0x00,0x3F,0xFC,0x00,0x00,0x01,0xFF,0xE0,0x00,0x00,0x0F,0xFF,0x00,0x00,0x00,0x7F,0xF8,0x00,0x00,0x03,0xFF,0xC0,0x00,0x00,0x1F,0xFE,0x00,0x00,0x00,0xFF,0xF0,0x00,0x00,0x07,0xFF,0x80,0x00,0x00,0x3F,0xFC,0x00,0x00,0x01,0xFF,0xE0,0x00,0x00,0x0F,0xFF,0x00,0x00,0x00,0x7F,0xF8,0x00,0x00,0x03,0xFF,0xC0,0x00,0x00,0x1F,0xFC,0x00,0x00,0x00,0x7F,0xC0,0x00,0x00,0x01,0xFC,0x3F,0xC0,0x7F,0x87,0xC3,0xFF,0x07,0xFE,0x18,0x3F,0xFC,0x7F,0xF8,0x01,0xFF,0xE3,0xFF,0xC0,0x07,0xFE,0x0F,0xFC,0x30,0x1F,0xE0,0x7F,0xC3,0x80,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x03,0xE0,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0x0F,0xC0,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x03,0xF0,0x00,0x00,0x00,0x1F,0x80,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0x07,0xE0,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0x0F,0xC0,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x03,0xF0,0x00,0x00,0x00,0x1F,0x80,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0x07,0xE0,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0x07,0xC0,0x00,0x00,0x00,0x1E,0x00,0x00,0x00,0x00,0x60, // '4'
	0x07,0xFF,0xFF,0xFF,0x00,0x7F,0xFF,0xFF,0xFC,0x03,0xFF,0xFF,0xFF,0xE0,0x0F,0xFF,0xFF,0xFE,0x04,0x3F,0xFF,0xFF,0xE0,0x70,0xFF,0xFF,0xFE,0x03,0xE0,0x00,0x00,0x00,0x1F,0x80,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0x07,0xE0,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0x0F,0xC0,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x03,0xF0,0x00,0x00,0x00,0x1F,0x80,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0x07,0xE0,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0x0F,0xC0,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x03,0xF0,0x00,0x00,0x00,0x1F,0x80,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0x07,0xC0,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x01,0xC3,0xFC,0x07,0xF8,0x0C,0x3F,0xF0,0x7F,0xE0,0x03,0xFF,0xC7,0xFF,0x80,0x1F,0xFE,0x3F,0xFC,0x00,0x7F,0xE0,0xFF,0xC3,0x01,0xFE,0x07,0xFC,0x38,0x00,0x00,0x00,0x03,0xC0,0x00,0x00,0x00,0x3E,0x00,0x00,0x00,0x03,0xF0,0x00,0x00,0x00,0x1F,0x80,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0x07,0xE0,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0x0F,0xC0,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x03,0xF0,0x00,0x00,0x00,0x1F,0x80,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0x07,0xE0,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0x0F,0xC0,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x03,0xF0,0x00,0x00,0x00,0x1F,0x80,0x00,0x00,0x00,0x7C,0x07,0xFF,0xFF,0xF1,0xE0,0x7F,0xFF,0xFF,0xC6,0x07,0xFF,0xFF,0xFF,0x00,0x7F,0xFF,0xFF,0xFC,0x03,0xFF,0xFF,0xFF,0xE0,0x0F,0xFF,0xFF,0xFE,0x00, // '5'
	0x07,0xFF,0xFF,0xFF,0x00,0x7F,0xFF,0xFF,0xFC,0x03,0xFF,0xFF,0xFF,0xE0,0x0F,0xFF,0xFF,0xFE,0x04,0x3F,0xFF,0xFF,0xE0,0x70,0xFF,0xFF,0xFE,0x03,0xE0,0x00,0x00,0x00,0x1F,0x80,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0x07,0xE0,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0x0F,0xC0,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x03,0xF0,0x00,0x00,0x00,0x1F,0x80,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0x07,0xE0,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0x0F,0xC0,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x03,0xF0,0x00,0x00,0x00,0x1F,0x80,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0x07,0xC0,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x01,0xC3,0xFC,0x07,0xF8,0x0C,0x3F,0xF0,0x7F,0xE0,0x03,0xFF,0xC7,0xFF,0x80,0x1F,0xFE,0x3F,0xFC,0x18,0x7F,0xE0,0xFF,0xC3,0xE1,0xFE,0x07,0xFC,0x3F,0x80,0x00,0x00,0x03,0xFE,0x00,0x00,0x00,0x3F,0xF8,0x00,0x00,0x03,0xFF,0xC0,0x00,0x00,0x1F,0xFE,0x00,0x00,0x00,0xFF,0xF0,0x00,0x00,0x07,0xFF,0x80,0x00,0x00,0x3F,0xFC,0x00,0x00,0x01,0xFF,0xE0,0x00,0x00,0x0F,0xFF,0x00,0x00,0x00,0x7F,0xF8,0x00,0x00,0x03,0xFF,0xC0,0x00,0x00,0x1F,0xFE,0x00,0x00,0x00,0xFF,0xF0,0x00,0x00,0x07,0xFF,0x80,0x00,0x00,0x3F,0xFC,0x00,0x00,0x01,0xFF,0xE0,0x00,0x00,0x0F,0xFF,0x00,0x00,0x00,0x7F,0xF8,0x00,0x00,0x03,0xFF,0xC0,0x00,0x00,0x1F,0xFC,0x00,0x00,0x00,0x7F,0x87,0xFF,0xFF,0xF1,0xE8,0x7F,0xFF,0xFF,0xC6,0x07,0xFF,0xFF,0xFF,0x00,0x7F,0xFF,0xFF,0xFC,0x03,0xFF,0xFF,0xFF,0xE0,0x0F,0xFF,0xFF,0xFE,0x00, // '6'
	0x07,0xFF,0xFF,0xFF,0x00,0x7F,0xFF,0xFF,0xFC,0x03,0xFF,0xFF,0xFF,0xE0,0x0F,0xFF,0xFF,0xFE,0x04,0x3F,0xFF,0xFF,0xE3,0x70,0xFF,0xFF,0xFE,0x3F,0xE0,0x00,0x00,0x03,0xFF,0x80,0x00,0x00,0x3F,0xFC,0x00,0x00,0x01,0xFF,0xE0,0x00,0x00,0x0F,0xFF,0x00,0x00,0x00,0x7F,0xF8,0x00,0x00,0x03,0xFF,0xC0,0x00,0x00,0x1F,0xFE,0x00,0x00,0x00,0xFF,0xF0,0x00,0x00,0x07,0xFF,0x80,0x00,0x00,0x3F,0xFC,0x00,0x00,0x01,0xFF,0xE0,0x00,0x00,0x0F,0xFF,0x00,0x00,0x00,0x7F,0xF8,0x00,0x00,0x03,0xFF,0xC0,0x00,0x00,0x1F,0xFE,0x00,0x00,0x00,0xFF,0xF0,0x00,0x00,0x07,0xFF,0x80,0x00,0x00,0x3F,0xFC,0x00,0x00,0x01,0xFF,0xC0,0x00,0x00,0x07,0xFC,0x00,0x00,0x00,0x1F,0xC0,0x00,0x00,0x00,0x7C,0x00,0x00,0x00,0x01,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x38,0x00,0x00,0x00,0x03,0xC0,0x00,0x00,0x00,0x3E,0x00,0x00,0x00,0x03,0xF0,0x00,0x00,0x00,0x1F,0x80,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0x07,0xE0,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0x0F,0xC0,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x03,0xF0,0x00,0x00,0x00,0x1F,0x80,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0x07,0xE0,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0x0F,0xC0,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x03,0xF0,0x00,0x00,0x00,0x1F,0x80,0x00,0x00,0x00,0x7C,0x00,0x00,0x00,0x01,0xE0,0x00,0x00,0x00,0x06, // '7'
	0x07,0xFF,0xFF,0xFF,0x00,0x7F,0xFF,0xFF,0xFC,0x03,0xFF,0xFF,0xFF,0xE0,0x0F,0xFF,0xFF,0xFE,0x04,0x3F,0xFF,0xFF,0xE3,0x70,0xFF,0xFF,0xFE,0x3F,0xE0,0x00,0x00,0x03,0xFF,0x80,0x00,0x00,0x3F,0xFC,0x00,0x00,0x01,0xFF,0xE0,0x00,0x00,0x0F,0xFF,0x00,0x00,0x00,0x7F,0xF8,0x00,0x00,0x03,0xFF,0xC0,0x00,0x00,0x1F,0xFE,0x00,0x00,0x00,0xFF,0xF0,0x00,0x00,0x07,0xFF,0x80,0x00,0x00,0x3F,0xFC,0x00,0x00,0x01,0xFF,0xE0,0x00,0x00,0x0F,0xFF,0x00,0x00,0x00,0x7F,0xF8,0x00,0x00,0x03,0xFF,0xC0,0x00,0x00,0x1F,0xFE,0x00,0x00,0x00,0xFF,0xF0,0x00,0x00,0x07,0xFF,0x80,0x00,0x00,0x3F,0xFC,0x00,0x00,0x01,0xFF,0xC0,0x00,0x00,0x07,0xFC,0x00,0x00,0x00,0x1F,0xC3,0xFC,0x07,0xF8,0x7C,0x3F,0xF0,0x7F,0xE1,0x83,0xFF,0xC7,0xFF,0x80,0x1F,0xFE,0x3F,0xFC,0x18,0x7F,0xE0,0xFF,0xC3,0xE1,0xFE,0x07,0xFC,0x3F,0x80,0x00,0x00,0x03,0xFE,0x00,0x00,0x00,0x3F,0xF8,0x00,0x00,0x03,0xFF,0xC0,0x00,0x00,0x1F,0xFE,0x00,0x00,0x00,0xFF,0xF0,0x00,0x00,0x07,0xFF,0x80,0x00,0x00,0x3F,0xFC,0x00,0x00,0x01,0xFF,0xE0,0x00,0x00,0x0F,0xFF,0x00,0x00,0x00,0x7F,0xF8,0x00,0x00,0x03,0xFF,0xC0,0x00,0x00,0x1F,0xFE,0x00,0x00,0x00,0xFF,0xF0,0x00,0x00,0x07,0xFF,0x80,0x00,0x00,0x3F,0xFC,0x00,0x00,0x01,0xFF,0xE0,0x00,0x00,0x0F,0xFF,0x00,0x00,0x00,0x7F,0xF8,0x00,0x00,0x03,0xFF,0xC0,0x00,0x00,0x1F,0xFC,0x00,0x00,0x00,0x7F,0x87,0xFF,0xFF,0xF1,0xE8,0x7F,0xFF,0xFF,0xC6,0x07,0xFF,0xFF,0xFF,0x00,0x7F,0xFF,0xFF,0xFC,0x03,0xFF,0xFF,0xFF,0xE0,0x0F,0xFF,0xFF,0xFE,0x00, // '8'
	0x07,0xFF,0xFF,0xFF,0x00,0x7F,0xFF,0xFF,0xFC,0x03,0xFF,0xFF,0xFF,0xE0,0x0F,0xFF,0xFF,0xFE,0x04,0x3F,0xFF,0xFF,0xE3,0x70,0xFF,0xFF,0xFE,0x3F,0xE0,0x00,0x00,0x03,0xFF,0x80,0x00,0x00,0x3F,0xFC,0x00,0x00,0x01,0xFF,0xE0,0x00,0x00,0x0F,0xFF,0x00,0x00,0x00,0x7F,0xF8,0x00,0x00,0x03,0xFF,0xC0,0x00,0x00,0x1F,0xFE,0x00,0x00,0x00,0xFF,0xF0,0x00,0x00,0x07,0xFF,0x80,0x00,0x00,0x3F,0xFC,0x00,0x00,0x01,0xFF,0xE0,0x00,0x00,0x0F,0xFF,0x00,0x00,0x00,0x7F,0xF8,0x00,0x00,0x03,0xFF,0xC0,0x00,0x00,0x1F,0xFE,0x00,0x00,0x00,0xFF,0xF0,0x00,0x00,0x07,0xFF,0x80,0x00,0x00,0x3F,0xFC,0x00,0x00,0x01,0xFF,0xC0,0x00,0x00,0x07,0xFC,0x00,0x00,0x00,0x1F,0xC3,0xFC,0x07,0xF8,0x7C,0x3F,0xF0,0x7F,0xE1,0x83,0xFF,0xC7,0xFF,0x80,0x1F,0xFE,0x3F,0xFC,0x00,0x7F,0xE0,0xFF,0xC3,0x01,0xFE,0x07,0xFC,0x38,0x00,0x00,0x00,0x03,0xC0,0x00,0x00,0x00,0x3E,0x00,0x00,0x00,0x03,0xF0,0x00,0x00,0x00,0x1F,0x80,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0x07,0xE0,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0x0F,0xC0,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x03,0xF0,0x00,0x00,0x00,0x1F,0x80,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0x07,0xE0,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0x0F,0xC0,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x03,0xF0,0x00,0x00,0x00,0x1F,0x80,0x00,0x00,0x00,0x7C,0x07,0xFF,0xFF,0xF1,0xE0,0x7F,0xFF,0xFF,0xC6,0x07,0xFF,0xFF,0xFF,0x00,0x7F,0xFF,0xFF,0xFC,0x03,0xFF,0xFF,0xFF,0xE0,0x0F,0xFF,0xFF,0xFE,0x00, // '9'
	0x3C,0x7E,0xFF,0xFF,0xFF,0x7E,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x7E,0xFF,0xFF,0x7E,0x7E,0x3C, // ':'
};
const GFXglyph DSEG14_Classic_Mini_Regular_60Glyphs[] PROGMEM = {
// bitmapOffset, width, height, xAdvance, xOffset, yOffset
	  {  1435 - 1435,  37,  60,  50,    6,  -60 }, // '0'
	  {  1713 - 1435,   6,  52,  50,   37,  -56 }, // '1'
	  {  1752 - 1435,  37,  60,  50,    6,  -60 }, // '2'
	  {  2030 - 1435,  33,  60,  50,   10,  -60 }, // '3'
	  {  2278 - 1435,  37,  52,  50,    6,  -56 }, // '4'
	  {  2519 - 1435,  37,  60,  50,    6,  -60 }, // '5'
	  {  2797 - 1435,  37,  60,  50,    6,  -60 }, // '6'
	  {  3075 - 1435,  37,  56,  50,    6,  -60 }, // '7'
	  {  3334 - 1435,  37,  60,  50,    6,  -60 }, // '8'
	  {  3612 - 1435,  37,  60,  50,    6,  -60 }, // '9'
	  {  3890 - 1435,   8,  32,  13,    2,  -45 }, // ':'
};
const GFXfont DSEG14_Classic_Mini_Regular_60 PROGMEM = {
(uint8_t  *)DSEG14_Classic_Mini_Regular_60Bitmaps,(GFXglyph *)DSEG14_Classic_Mini_Regular_60Glyphs,0x30, 0x3B, 66};