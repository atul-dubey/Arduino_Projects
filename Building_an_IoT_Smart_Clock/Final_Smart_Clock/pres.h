const uint32_t pres_width = 40;
const uint32_t pres_height = 48;
const uint8_t pres_data[(40*48)/2] = {
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDE, 0xDC, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6A, 0x02, 0x00, 0x00, 0x10, 0x84, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xE8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0x2B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0x00, 0x00, 0x20, 0xA7, 0xED, 0xEE, 0x9C, 0x05, 0x00, 0x00, 0x00, 0xD2, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x05, 0x00, 0x00, 0x60, 0xFE, 0xFF, 0xEF, 0xCA, 0xFF, 0xFF, 0x3A, 0x00, 0x00, 0x00, 0xFD, 0xFF, 0xFF, 
	0xFF, 0xFF, 0x8F, 0x00, 0x00, 0x30, 0xFD, 0xFF, 0xFF, 0xBF, 0x70, 0xFF, 0xFF, 0xFF, 0x18, 0x00, 0x00, 0xE1, 0xFF, 0xFF, 
	0xFF, 0xFF, 0x0B, 0x00, 0x00, 0xF6, 0xFF, 0xFF, 0xFF, 0xBF, 0x70, 0xFF, 0xFF, 0xEF, 0xDF, 0x01, 0x00, 0x40, 0xFF, 0xFF, 
	0xFF, 0xEF, 0x01, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0x70, 0xFF, 0xFF, 0x1E, 0xE5, 0x1D, 0x00, 0x00, 0xF8, 0xFF, 
	0xFF, 0x5F, 0x00, 0x00, 0xF7, 0xDA, 0xFF, 0xFF, 0xFF, 0xBF, 0x70, 0xFF, 0xFF, 0x05, 0xF2, 0xEF, 0x01, 0x00, 0xC0, 0xFF, 
	0xFF, 0x0C, 0x00, 0x30, 0xCF, 0x10, 0xFD, 0xFF, 0xFF, 0xBF, 0x70, 0xFF, 0xDF, 0x00, 0xF8, 0xFF, 0x0B, 0x00, 0x40, 0xFF, 
	0xFF, 0x05, 0x00, 0xC0, 0xFF, 0x02, 0xD2, 0xFF, 0xFF, 0xDF, 0xB8, 0xFF, 0x4F, 0x10, 0xFE, 0xFF, 0x5F, 0x00, 0x00, 0xFF, 
	0xFF, 0x00, 0x00, 0xF5, 0xFF, 0x2E, 0x10, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0A, 0x50, 0xFF, 0xFF, 0xEF, 0x00, 0x00, 0xF8, 
	0xAF, 0x00, 0x00, 0xFD, 0xFF, 0xEF, 0x04, 0xF6, 0xFF, 0xFF, 0xFF, 0xEF, 0x01, 0xD0, 0xFF, 0xFF, 0xFF, 0x04, 0x00, 0xF2, 
	0x6F, 0x00, 0x20, 0xFF, 0xFF, 0xFF, 0x7E, 0xFF, 0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0x0A, 0x00, 0xD0, 
	0x2F, 0x00, 0x70, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0B, 0x00, 0xFA, 0xFF, 0xFF, 0xFF, 0x1E, 0x00, 0xA0, 
	0x0F, 0x00, 0xA0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x02, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x70, 
	0x0D, 0x00, 0xD0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x50, 
	0x0C, 0x00, 0xE0, 0x4A, 0x44, 0x44, 0xFB, 0xFF, 0xFF, 0xFF, 0x1E, 0x00, 0xD0, 0x9F, 0x33, 0x33, 0xC3, 0x7F, 0x00, 0x40, 
	0x0C, 0x00, 0xE0, 0x08, 0x00, 0x00, 0xFA, 0xFF, 0xFF, 0xDF, 0x05, 0x00, 0xF4, 0x8F, 0x00, 0x00, 0xA0, 0x7F, 0x00, 0x40, 
	0x0D, 0x00, 0xE0, 0xCE, 0xCC, 0xCC, 0xFE, 0xFF, 0xDF, 0x03, 0x00, 0x00, 0xFB, 0xEF, 0xDD, 0xDD, 0xED, 0x6F, 0x00, 0x40, 
	0x0E, 0x00, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1E, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x4F, 0x00, 0x60, 
	0x0F, 0x00, 0x90, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0x00, 0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0x80, 
	0x3F, 0x00, 0x50, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x04, 0x00, 0x00, 0x00, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0x0D, 0x00, 0xB0, 
	0x7F, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x04, 0x00, 0x00, 0x00, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0xF0, 
	0xDF, 0x00, 0x00, 0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 0xF5, 
	0xFF, 0x02, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x70, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x00, 0x00, 0xFB, 
	0xFF, 0x08, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x15, 0x20, 0xF9, 0xFF, 0xFF, 0xFF, 0xFF, 0x1E, 0x00, 0x10, 0xFF, 
	0xFF, 0x2E, 0x00, 0x00, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x05, 0x00, 0x80, 0xFF, 
	0xFF, 0xAF, 0x00, 0x00, 0xB0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x00, 0xF3, 0xFF, 
	0xFF, 0xFF, 0x06, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x05, 0x00, 0x00, 0xFD, 0xFF, 
	0xFF, 0xFF, 0x3E, 0x00, 0x00, 0x91, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x4E, 0x00, 0x00, 0xA0, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xEF, 0x01, 0x00, 0x00, 0xC4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0x00, 0x00, 0xF9, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x2D, 0x00, 0x00, 0x00, 0x94, 0xFD, 0xFF, 0xFF, 0xEF, 0x6B, 0x01, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0x04, 0x00, 0x00, 0x00, 0x10, 0x53, 0x45, 0x12, 0x00, 0x00, 0x00, 0x10, 0xFA, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD5, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x5D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAD, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	};
