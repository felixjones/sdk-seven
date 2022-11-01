@ NINTENDO LOGO DATA
.byte   0x24, 0xFF, 0xAE, 0x51, 0x69, 0x9A, 0xA2, 0x21
.byte   0x3D, 0x84, 0x82, 0x0A, 0x84, 0xE4, 0x09, 0xAD
.byte   0x11, 0x24, 0x8B, 0x98, 0xC0, 0x81, 0x7F, 0x21
.byte   0xA3, 0x52, 0xBE, 0x19, 0x93, 0x09, 0xCE, 0x20
.byte   0x10, 0x46, 0x4A, 0x4A, 0xF8, 0x27, 0x31, 0xEC
.byte   0x58, 0xC7, 0xE8, 0x33, 0x82, 0xE3, 0xCE, 0xBF
.byte   0x85, 0xF4, 0xDF, 0x94, 0xCE, 0x4B, 0x09, 0xC1
.byte   0x94, 0x56, 0x8A, 0xC0, 0x13, 0x72, 0xA7, 0xFC
.byte   0x9F, 0x84, 0x4D, 0x73, 0xA3, 0xCA, 0x9A, 0x61
.byte   0x58, 0x97, 0xA3, 0x27, 0xFC, 0x03, 0x98, 0x76
.byte   0x23, 0x1D, 0xC7, 0x61, 0x03, 0x04, 0xAE, 0x56
.byte   0xBF, 0x38, 0x84, 0x00, 0x40, 0xA7, 0x0E, 0xFD
.byte   0xFF, 0x52, 0xFE, 0x03, 0x6F, 0x95, 0x30, 0xF1
.byte   0x97, 0xFB, 0xC0, 0x85, 0x60, 0xD6, 0x80, 0x25
.byte   0xA9, 0x63, 0xBE, 0x03, 0x01, 0x4E, 0x38, 0xE2
.byte   0xF9, 0xA2, 0x34, 0xFF, 0xBB, 0x3E, 0x03, 0x44
.byte   0x78, 0x00, 0x90, 0xCB, 0x88, 0x11, 0x3A, 0x94
.byte   0x65, 0xC0, 0x7C, 0x63, 0x87, 0xF0, 0x3C, 0xAF
.byte   0xD6, 0x25, 0xE4, 0x8B, 0x38, 0x0A, 0xAC, 0x72
.byte   0x21, 0xD4, 0xF8, 0x07
@ CHECKSUM AREA BEGIN
.zero   12              @ Game title
.zero   4               @ Game code
.zero   2               @ Maker code
.byte   0x96            @ Mandatory
.zero   1               @ Device code
.zero   1               @ Device type
.zero   7               @ Reserved
.zero   1               @ Game version
@ CHECKSUM AREA END
.byte   0x51            @ Checksum
.zero   2               @ Reserved

@ vim: ft=armv4 et sta sw=4 sts=8
