/* ************************************************************************
 *
 *   alternative 24x24 component symbols #1
 *   horizontally aligned
 *
 *   (c) 2015-2023 by Markus Reschke
 *   modified by indman@EEVblog
 *
 * ************************************************************************ */


/* ************************************************************************
 *   symbol data
 * ************************************************************************ */

#ifdef SYMBOLS_24X24_ALT1_H


/* source management */
#define SYMBOL_SET                 /* symbol set included */

/* symbol size */
#define SYMBOL_SIZE_X       24     /* width:  24 dots */
#define SYMBOL_SIZE_Y       24     /* height: 24 dots */

/* symbol data format */
#define SYMBOL_BYTES_N      72     /* 72 bytes per symbol */
#define SYMBOL_BYTES_X       3     /* 3 bytes in x direction */
#define SYMBOL_BYTES_Y      24     /* 24 bytes in y direction */


/*
 *  symbol bitmaps
 *  - format:
 *    - 72 bytes per symbol
 *    - first three bytes: first horizontal line (top to down)
 *      first byte: left part
 *    - bit #0: right / bit #7: left
 */

const uint8_t SymbolData[] PROGMEM = {
  0x00,0x00,0x00,0x00,0x00,0xC8,0x00,0x01,0x28,0x00,0x01,0x08,0x00,0x01,0x28,0x38,
  0x00,0xC8,0x24,0x02,0x10,0x38,0x02,0x20,0x24,0x02,0x40,0x38,0x02,0x80,0x00,0x03,
  0x00,0x7F,0xFE,0x00,0x00,0x03,0x00,0x00,0x02,0x90,0x00,0x02,0x50,0x00,0x02,0x30,
  0x00,0x02,0xF0,0x00,0x00,0x08,0x00,0x00,0xE8,0x00,0x00,0x88,0x00,0x00,0xE8,0x00,
  0x00,0x88,0x00,0x00,0xE8,0x00,0x00,0x00,   /* BJT npn */

  0x00,0x00,0x00,0x00,0x00,0xE8,0x00,0x00,0x88,0x00,0x00,0xE8,0x00,0x00,0x88,0x00,
  0x00,0xE8,0x38,0x00,0x08,0x24,0x02,0x90,0x38,0x02,0xA0,0x24,0x02,0xC0,0x38,0x02,
  0xF0,0x00,0x03,0x00,0x7F,0xFE,0x00,0x00,0x03,0x00,0x00,0x02,0x80,0x00,0x02,0x40,
  0x00,0x02,0x20,0x00,0x02,0x10,0x00,0x00,0xC8,0x00,0x01,0x28,0x00,0x01,0x08,0x00,
  0x01,0x28,0x00,0x00,0xC8,0x00,0x00,0x00,   /* BJT pnp */

  0x00,0x00,0x00,0x00,0x01,0xC8,0x00,0x01,0x28,0x00,0x01,0x28,0x00,0x01,0x28,0x00,
  0x01,0xC8,0x01,0x40,0x08,0x01,0x7F,0xF8,0x01,0x40,0x10,0x01,0x04,0x10,0x01,0x48,
  0x7C,0x31,0x7F,0x10,0x41,0x49,0x28,0x59,0x05,0x7C,0x49,0x01,0x10,0x31,0x41,0x10,
  0x01,0x7F,0xF8,0x7F,0x40,0x08,0x00,0x00,0xE8,0x00,0x01,0x08,0x00,0x00,0xC8,0x00,
  0x00,0x28,0x00,0x01,0xC8,0x00,0x00,0x00,   /* MOSFET enh n-ch */

  0x00,0x00,0x00,0x00,0x00,0xE8,0x00,0x01,0x08,0x00,0x00,0xC8,0x00,0x00,0x28,0x00,
  0x01,0xC8,0x7F,0x40,0x08,0x01,0x7F,0xF8,0x31,0x41,0x10,0x41,0x01,0x10,0x59,0x09,
  0x7C,0x49,0x45,0x10,0x31,0x7F,0x28,0x01,0x44,0x7C,0x01,0x08,0x10,0x01,0x40,0x10,
  0x01,0x7F,0xF8,0x01,0x40,0x08,0x00,0x01,0xC8,0x00,0x01,0x28,0x00,0x01,0x28,0x00,
  0x01,0x28,0x00,0x01,0xC8,0x00,0x00,0x00,   /* MOSFET enh p-ch */

  0x00,0x00,0x00,0x00,0x01,0xC8,0x00,0x01,0x28,0x00,0x01,0x28,0x00,0x01,0x28,0x00,
  0x01,0xC8,0x01,0x40,0x08,0x01,0x7F,0xF8,0x01,0x40,0x10,0x01,0x44,0x10,0x01,0x48,
  0x7C,0x31,0x7F,0x10,0x41,0x49,0x28,0x59,0x45,0x7C,0x49,0x41,0x10,0x31,0x41,0x10,
  0x01,0x7F,0xF8,0x7F,0x40,0x08,0x00,0x00,0xE8,0x00,0x01,0x08,0x00,0x00,0xC8,0x00,
  0x00,0x28,0x00,0x01,0xC8,0x00,0x00,0x00,   /* MOSFET dep n-ch */

  0x00,0x00,0x00,0x00,0x00,0xE8,0x00,0x01,0x08,0x00,0x00,0xC8,0x00,0x00,0x28,0x00,
  0x01,0xC8,0x7F,0x40,0x08,0x01,0x7F,0xF8,0x31,0x41,0x10,0x41,0x41,0x10,0x59,0x49,
  0x7C,0x49,0x45,0x10,0x31,0x7F,0x28,0x01,0x44,0x7C,0x01,0x48,0x10,0x01,0x40,0x10,
  0x01,0x7F,0xF8,0x01,0x40,0x08,0x00,0x01,0xC8,0x00,0x01,0x28,0x00,0x01,0x28,0x00,
  0x01,0x28,0x00,0x01,0xC8,0x00,0x00,0x00,   /* MOSFET dep p-ch */

  0x00,0x00,0x00,0x18,0x00,0xE8,0x20,0x01,0x08,0x2C,0x00,0xC8,0x24,0x00,0x28,0x18,
  0x81,0xC8,0x00,0x48,0x08,0x7F,0xFF,0xF8,0x00,0x48,0x00,0x00,0x88,0x00,0x00,0x08,
  0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x08,0x00,
  0x00,0x0F,0xF8,0x00,0x08,0x08,0x00,0x01,0xC8,0x00,0x01,0x28,0x00,0x01,0x28,0x00,
  0x01,0x28,0x00,0x01,0xC8,0x00,0x00,0x00,   /* JFET n-ch */

  0x00,0x00,0x00,0x00,0x01,0xC8,0x00,0x01,0x28,0x00,0x01,0x28,0x00,0x01,0x28,0x00,
  0x01,0xC8,0x00,0x08,0x08,0x00,0x0F,0xF8,0x00,0x08,0x00,0x00,0x08,0x00,0x18,0x08,
  0x00,0x20,0x08,0x00,0x2C,0x08,0x00,0x24,0x08,0x00,0x18,0x48,0x00,0x00,0x88,0x00,
  0x7F,0xFF,0xF8,0x00,0x88,0x08,0x00,0x40,0xE8,0x00,0x01,0x08,0x00,0x00,0xC8,0x00,
  0x00,0x28,0x00,0x01,0xC8,0x00,0x00,0x00,   /* JFET p-ch */

  0x00,0x00,0x00,0x00,0x01,0x88,0x00,0x02,0x48,0x00,0x02,0x08,0x00,0x02,0x48,0x18,
  0x01,0x90,0x20,0x04,0x20,0x2C,0x04,0x40,0x24,0x14,0x80,0x18,0x15,0x00,0x00,0x16,
  0x00,0x7F,0xF4,0x00,0x00,0x16,0x00,0x00,0x15,0x20,0x00,0x14,0xA0,0x00,0x04,0x60,
  0x00,0x05,0xE0,0x00,0x00,0x10,0x00,0x01,0xC8,0x00,0x01,0x08,0x00,0x01,0xC8,0x00,
  0x01,0x08,0x00,0x01,0xC8,0x00,0x00,0x00,   /* IGBT enh n-ch */

  0x00,0x00,0x00,0x00,0x01,0xC8,0x00,0x01,0x08,0x00,0x01,0xC8,0x00,0x01,0x08,0x00,
  0x01,0xC8,0x18,0x00,0x10,0x20,0x05,0x20,0x2C,0x05,0x40,0x24,0x15,0x80,0x18,0x15,
  0xE0,0x00,0x16,0x00,0x7F,0xF4,0x00,0x00,0x16,0x00,0x00,0x15,0x00,0x00,0x14,0x80,
  0x00,0x04,0x40,0x00,0x04,0x20,0x00,0x01,0x90,0x00,0x02,0x48,0x00,0x02,0x08,0x00,
  0x02,0x48,0x00,0x01,0x88,0x00,0x00,0x00,   /* IGBT enh p-ch */

  0x00,0x00,0x00,0x00,0x09,0x80,0x00,0x0A,0x40,0x00,0x0B,0xC0,0x00,0x0A,0x40,0x00,
  0x0A,0x40,0x00,0x08,0x00,0x00,0x08,0x00,0x03,0xFF,0xE0,0x01,0xFF,0xC0,0x00,0xFF,
  0x80,0x00,0x7F,0x00,0x00,0x3E,0x00,0x30,0x1C,0x00,0x40,0x08,0x00,0x5B,0xFF,0xE0,
  0x48,0x18,0x00,0x30,0x28,0x00,0x00,0x49,0x80,0x7F,0x8A,0x40,0x00,0x0A,0x00,0x00,
  0x0A,0x40,0x00,0x09,0x80,0x00,0x00,0x00,   /* SCR */

  0x00,0x00,0x00,0x18,0xC8,0x00,0x25,0x28,0x00,0x3C,0x48,0x00,0x24,0x88,0x00,0x25,
  0xE8,0x00,0x00,0x08,0x00,0x1F,0xFF,0xF8,0x0F,0xF8,0x80,0x07,0xF1,0xC0,0x07,0xF1,
  0xC0,0x03,0xE3,0xE0,0x03,0xE3,0xE0,0x31,0xC7,0xF0,0x41,0xC7,0xF0,0x58,0x8F,0xF8,
  0x4B,0xFF,0xFC,0x30,0x88,0x00,0x01,0x09,0x88,0x7E,0x0A,0x58,0x00,0x0B,0xC8,0x00,
  0x0A,0x48,0x00,0x0A,0x5C,0x00,0x00,0x00,   /* Triac */

  0x00,0x00,0x00,0x00,0x09,0x80,0x00,0x0A,0x40,0x00,0x0B,0xC0,0x7F,0x8A,0x40,0x00,
  0x4A,0x40,0x30,0x28,0x00,0x40,0x18,0x00,0x5B,0xFF,0xE0,0x49,0xFF,0xC0,0x30,0xFF,
  0x80,0x00,0x7F,0x00,0x00,0x3E,0x00,0x00,0x1C,0x00,0x00,0x08,0x00,0x03,0xFF,0xE0,
  0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x09,0x80,0x00,0x0A,0x40,0x00,0x0A,0x00,0x00,
  0x0A,0x40,0x00,0x09,0x80,0x00,0x00,0x00,   /* PUT */

  0x00,0x00,0x00,0x00,0x38,0xC8,0x00,0x25,0x28,0x00,0x38,0x48,0x78,0x24,0x88,0x04,
  0x39,0xE8,0x02,0x00,0x08,0x39,0x28,0x08,0x20,0xAF,0xF8,0x38,0x68,0x00,0x21,0xE8,
  0x00,0x38,0x18,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x0F,0xF8,
  0x00,0x08,0x08,0x00,0x00,0x08,0x00,0x1C,0x48,0x00,0x12,0xC8,0x00,0x1C,0x48,0x00,
  0x12,0x48,0x00,0x1C,0xE8,0x00,0x00,0x00    /* UJT n-type */

  #ifdef SYMBOLS_EXTRA
  ,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x3C,0x00,0x00,0xFF,0x00,0x00,0xC3,0x00,0x01,0x81,0x80,0x01,0x81,0x80,0x01,0x81,
  0x80,0x00,0x03,0x00,0x00,0x07,0x00,0x00,0x0E,0x00,0x00,0x1C,0x00,0x00,0x38,0x00,
  0x00,0x38,0x00,0x00,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x00,
  0x38,0x00,0x00,0x38,0x00,0x00,0x00,0x00,   /* question mark */ 
  
  0x00,0x00,0x00,0x00,0x0A,0x40,0x00,0x0A,0x80,0x00,0x0B,0x00,0x00,0x0A,0x80,0x00,
  0x0A,0x40,0x02,0x08,0x00,0x02,0x08,0x00,0x03,0xFF,0xE0,0x00,0x08,0x20,0x00,0x1C,
  0x20,0x00,0x3E,0x00,0x00,0x7F,0x00,0x00,0xFF,0x80,0x01,0xFF,0xC0,0x03,0xFF,0xE0,
  0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x09,0x80,0x00,0x0A,0x40,0x00,0x0B,0xC0,0x00,
  0x0A,0x40,0x00,0x0A,0x40,0x00,0x00,0x00,   /* Zener diode */

  0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x00,
  0x08,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x01,0xFF,0xC0,0x00,0x00,0x00,0x07,0xFF,
  0xF0,0x07,0xFF,0xF0,0x07,0xFF,0xF0,0x07,0xFF,0xF0,0x00,0x00,0x00,0x01,0xFF,0xC0,
  0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x00,
  0x08,0x00,0x00,0x08,0x00,0x00,0x00,0x00,   /* quartz crystal */

  0x00,0x00,0x00,0x00,0x00,0x48,0x00,0x00,0xE8,0x00,0x00,0x48,0x00,0x7E,0x08,0x03,
  0xC3,0xF8,0x02,0x7E,0x08,0x72,0x00,0x08,0x4A,0xFE,0x08,0x4A,0x82,0x08,0x4A,0x83,
  0xF8,0x72,0x82,0x00,0x02,0x82,0x00,0x7F,0x82,0x00,0x00,0x82,0x00,0x00,0x82,0x00,
  0x00,0x83,0xF8,0x00,0x82,0x08,0x00,0xFE,0x08,0x00,0x00,0x08,0x00,0x00,0x08,0x00,
  0x00,0x08,0x00,0x00,0xE8,0x00,0x00,0x00    /* OneWire device */
  #endif
};



/*
 *  pin position lookup table
 *  - one byte per pin and 3 bytes (pins) for each symbol
 *  - cross reference for the Semi structure's pins:
 *
 *      BJT         FET         SCR         Triac       IGBT
 *  ------------------------------------------------------------------
 *  A   Base        Gate        Gate        Gate        Gate
 *  B   Collector   Drain       Anode       MT2         Collector
 *  C   Emitter     Source      Cathode     MT1         Emitter
 *
 *      PUT         UJT
 *  ------------------------------------------------------------------
 *  A   Gate        Emitter
 *  B   Anode       B2
 *  C   Cathode     B1
 */

const uint8_t PinTable[] PROGMEM = {
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM,   /* BJT npn */
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP,   /* BJT pnp */
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM,   /* MOSFET enh n-ch */
  PIN_LEFT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP,      /* MOSFET enh p-ch */
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM,   /* MOSFET dep n-ch */
  PIN_LEFT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP,      /* MOSFET dep p-ch */
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM,   /* JFET n-ch */
  PIN_LEFT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP,      /* JFET p-ch */
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM,   /* IGBT enh n-ch */
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP,   /* IGBT enh p-ch */
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP| PIN_ALT_CENTER, PIN_RIGHT | PIN_BOTTOM| PIN_ALT_CENTER,   /* SCR */
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP| PIN_ALT_CENTER, PIN_RIGHT | PIN_BOTTOM| PIN_ALT_CENTER,   /* Triac */
  PIN_LEFT | PIN_TOP,PIN_RIGHT | PIN_TOP| PIN_ALT_CENTER, PIN_RIGHT | PIN_BOTTOM| PIN_ALT_CENTER,       /* PUT */
  PIN_LEFT | PIN_TOP, PIN_RIGHT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM       /* UJT n-type */
  #ifdef SYMBOLS_EXTRA
  ,
  PIN_NONE, PIN_NONE, PIN_NONE,                                         /* question mark */
  PIN_NONE, PIN_NONE, PIN_NONE,                                         /* Zener diode */
  PIN_NONE, PIN_NONE, PIN_NONE,                                         /* quartz crystal */
  PIN_LEFT | PIN_CENTER, PIN_RIGHT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM    /* OneWire device */
  #endif
};


#endif

/* ************************************************************************
 *   EOF
 * ************************************************************************ */
