#define  L_FRAME_COMPRESSED 10
#define  L_FRAME            80

extern "C" void va_g729a_init_encoder();
extern "C" void va_g729a_encoder(short *speech, unsigned char *bitstream);
extern "C" void va_g729a_init_decoder();
extern "C" void va_g729a_decoder(unsigned char *bitstream, short *synth_short, int bfi);
