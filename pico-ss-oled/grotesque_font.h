#include <stdio.h>

const uint8_t gtFont[] = {
  0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0  = space
  0x00,0x00,0x06,0x5f,0x5f,0x06,0x00, // 1  = !
  0x00,0x07,0x07,0x00,0x07,0x07,0x00, // 2  = "
  0x14,0x7f,0x7f,0x14,0x7f,0x7f,0x14, // 3  = #
  0x24,0x2e,0x2a,0x6b,0x6b,0x3a,0x12, // 4  = $
  0x46,0x66,0x30,0x18,0x0c,0x66,0x62, // 5  = %
  0x30,0x7a,0x4f,0x5d,0x37,0x7a,0x48, // 6  = &
  0x00,0x04,0x07,0x03,0x00,0x00,0x00, // 7  = '
  0x00,0x1c,0x3e,0x63,0x41,0x00,0x00, // 8  = (
  0x00,0x41,0x63,0x3e,0x1c,0x00,0x00, // 9  = )
  0x08,0x2a,0x3e,0x1c,0x3e,0x2a,0x08, // 10 = *
  0x00,0x08,0x08,0x3e,0x3e,0x08,0x08, // 11 = +
  0x00,0x00,0x00,0x60,0x00,0x00,0x00, // 12 = ,
  0x00,0x08,0x08,0x08,0x08,0x08,0x08, // 13 = -
  0x00,0x00,0x00,0x20,0x00,0x00,0x00, // 14 = .
  0x60,0x30,0x18,0x0c,0x06,0x03,0x01, // 15 = /
  0x1c,0x22,0x41,0x41,0x41,0x22,0x1c, // 16 = 0
  0x41,0x41,0x41,0x7f,0x40,0x40,0x40, // 17 = 1
  0x71,0x49,0x49,0x49,0x49,0x49,0x46, // 18 = 2
  0x41,0x41,0x41,0x49,0x49,0x49,0x36, // 19 = 3
  0x18,0x14,0x12,0x11,0x7f,0x10,0x10, // 20 = 4
  0x4f,0x49,0x49,0x49,0x49,0x49,0x31, // 21 = 5
  0x3e,0x49,0x49,0x49,0x49,0x49,0x30, // 22 = 6
  0x01,0x41,0x21,0x11,0x09,0x05,0x03, // 23 = 7
  0x36,0x49,0x49,0x49,0x49,0x49,0x36, // 24 = 8
  0x06,0x49,0x49,0x49,0x49,0x49,0x3e, // 25 = 9
  0x00,0x00,0x00,0x66,0x66,0x00,0x00, // 26 = :
  0x00,0x00,0x80,0xe6,0x66,0x00,0x00, // 27 = ;
  0x08,0x1c,0x36,0x63,0x41,0x00,0x00, // 28 = <
  0x00,0x14,0x14,0x14,0x14,0x14,0x14, // 29 = =
  0x00,0x41,0x63,0x36,0x1c,0x08,0x00, // 30 = >
  0x00,0x02,0x03,0x59,0x5d,0x07,0x02, // 31 = ?
  0x3e,0x7f,0x41,0x5d,0x5d,0x5f,0x0e, // 32 = @
  0x7c,0x12,0x11,0x11,0x11,0x12,0x7c, // 33 = A
  0x7f,0x49,0x49,0x49,0x49,0x49,0x36, // 34 = B
  0x1c,0x22,0x41,0x41,0x41,0x41,0x41, // 35 = C
  0x7f,0x41,0x41,0x41,0x41,0x22,0x1c, // 36 = D
  0x7f,0x49,0x49,0x49,0x41,0x41,0x41, // 37 = E
  0x7f,0x09,0x09,0x09,0x01,0x01,0x01, // 38 = F
  0x1c,0x22,0x41,0x41,0x41,0x41,0x79, // 39 = G
  0x7f,0x08,0x08,0x08,0x08,0x08,0x7f, // 40 = H
  0x41,0x41,0x41,0x7f,0x41,0x41,0x41, // 41 = I
  0x10,0x20,0x40,0x41,0x41,0x21,0x1f, // 42 = J
  0x7f,0x08,0x08,0x08,0x14,0x22,0x41, // 43 = K
  0x7f,0x40,0x40,0x40,0x40,0x40,0x40, // 44 = L
  0x7f,0x02,0x04,0x08,0x04,0x02,0x7f, // 45 = M
  0x7f,0x02,0x04,0x08,0x10,0x20,0x7f, // 46 = N
  0x1c,0x22,0x41,0x41,0x41,0x22,0x1c, // 47 = O
  0x7f,0x09,0x09,0x09,0x09,0x09,0x06, // 48 = P
  0x1c,0x22,0x41,0x41,0x51,0x22,0x5c, // 49 = Q
  0x7f,0x09,0x09,0x09,0x19,0x29,0x46, // 50 = R
  0x46,0x49,0x49,0x49,0x49,0x49,0x31, // 51 = S
  0x01,0x01,0x01,0x7f,0x01,0x01,0x01, // 52 = T
  0x1f,0x20,0x40,0x40,0x40,0x20,0x1f, // 53 = U
  0x0f,0x10,0x20,0x40,0x20,0x10,0x0f, // 54 = V
  0x7f,0x20,0x10,0x08,0x10,0x20,0x7f, // 55 = W
  0x41,0x22,0x14,0x08,0x14,0x22,0x41, // 56 = X
  0x01,0x02,0x04,0x78,0x04,0x02,0x01, // 57 = Y
  0x41,0x61,0x51,0x49,0x45,0x43,0x41, // 58 = Z
  0x00,0x00,0x7f,0x41,0x41,0x00,0x00, // 59 = [
  0x01,0x03,0x06,0x0c,0x18,0x30,0x60, // 60 = backslash
  0x00,0x00,0x41,0x41,0x7f,0x00,0x00, // 61 = ]
  0x08,0x0c,0x06,0x03,0x06,0x0c,0x08, // 62 = ^
  0x80,0x80,0x80,0x80,0x80,0x80,0x80, // 63 = _
  0x00,0x00,0x03,0x07,0x04,0x00,0x00, // 64 = '
  0x20,0x74,0x54,0x54,0x3c,0x78,0x40, // 65 = a
  0x41,0x7f,0x3f,0x48,0x48,0x78,0x30, // 66 = b
  0x38,0x7c,0x44,0x44,0x6c,0x28,0x00, // 67 = c
  0x30,0x78,0x48,0x49,0x3f,0x7f,0x40, // 68 = d
  0x38,0x7c,0x54,0x54,0x5c,0x18,0x00, // 69 = e
  0x48,0x7e,0x7f,0x49,0x03,0x06,0x00, // 70 = f
  0x98,0xbc,0xa4,0xa4,0xf8,0x7c,0x04, // 71 = g
  0x41,0x7f,0x7f,0x08,0x04,0x7c,0x78, // 72 = h
  0x00,0x44,0x7d,0x7d,0x40,0x00,0x00, // 73 = i
  0x60,0xe0,0x80,0x84,0xfd,0x7d,0x00, // 74 = j
  0x41,0x7f,0x7f,0x10,0x38,0x6c,0x44, // 75 = k
  0x00,0x41,0x7f,0x7f,0x40,0x00,0x00, // 76 = l
  0x7c,0x7c,0x18,0x78,0x1c,0x7c,0x78, // 77 = m
  0x7c,0x78,0x04,0x04,0x7c,0x78,0x00, // 78 = n
  0x38,0x7c,0x44,0x44,0x7c,0x38,0x00, // 79 = o
  0x84,0xfc,0xf8,0xa4,0x24,0x3c,0x18, // 80 = p
  0x18,0x3c,0x24,0xa4,0xf8,0xfc,0x84, // 81 = q
  0x44,0x7c,0x78,0x4c,0x04,0x0c,0x18, // 82 = r
  0x48,0x5c,0x54,0x74,0x64,0x24,0x00, // 83 = s
  0x04,0x04,0x3e,0x7f,0x44,0x24,0x00, // 84 = t
  0x3c,0x7c,0x40,0x40,0x3c,0x7c,0x40, // 85 = u
  0x1c,0x3c,0x60,0x60,0x3c,0x1c,0x00, // 86 = v
  0x3c,0x7c,0x60,0x30,0x60,0x7c,0x3c, // 87 = w
  0x44,0x6c,0x38,0x10,0x38,0x6c,0x44, // 88 = x
  0x9c,0xbc,0xa0,0xa0,0xfc,0x7c,0x00, // 89 = y
  0x4c,0x64,0x74,0x5c,0x4c,0x64,0x00, // 90 = z
  0x08,0x08,0x3e,0x77,0x41,0x41,0x00, // 91 = {
  0x00,0x00,0x00,0xFF,0x00,0x00,0x00, // 92 = |
  0x41,0x41,0x77,0x3e,0x08,0x08,0x00, // 93 = }
  0x02,0x03,0x01,0x03,0x02,0x03,0x01, // 94 = ~
  0x70,0x78,0x4c,0x46,0x4c,0x78,0x70, // 95 = DEL : ASCII = 127

  0xFF,0x01,0x01,0x01,0x01,0x01,0xFF, // 96 = SQUARE 1
  0x80,0x80,0x80,0x80,0x80,0x80,0xFF, // 97 = SQUARE 2
  0x40,0x20,0x10,0x08,0x04,0x02,0xFF, // 98 = RAMP
  0xFF,0x02,0x04,0x08,0x10,0x20,0x40, // 99 = SAW

  0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 100 = PROGRESSh 0 0x84
  0x7E,0x00,0x00,0x00,0x00,0x00,0x00, // 101 = PROGRESSh 1 0x85
  0x7E,0x00,0x7E,0x00,0x00,0x00,0x00, // 102 = PROGRESSh 2 0x86
  0x7E,0x00,0x7E,0x00,0x7E,0x00,0x00, // 103 = PROGRESSh 3 0x87
  0x7E,0x00,0x7E,0x00,0x7E,0x00,0x7E, // 104 = PROGRESSh 4 0x88

  0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 105 = PROGRESSv 0 0x89
  0x80,0x80,0x80,0x80,0x80,0x80,0x80, // 106 = PROGRESSv 1 0x8A
  0xA0,0xA0,0xA0,0xA0,0xA0,0xA0,0xA0, // 107 = PROGRESSv 2 0x8B
  0xA8,0xA8,0xA8,0xA8,0xA8,0xA8,0xA8, // 108 = PROGRESSv 3 0x8C
  0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA, // 109 = PROGRESSv 4 0x8D


  0x10,0x10,0x10,0x10,0x10,0x10,0x10, // 105 H Line    0x8E
  0x10,0x10,0x10,0x1F,0x10,0x10,0x10, // 106 Inv T     0x8F
  0x10,0x10,0x10,0xFF,0x10,0x10,0x10, // 107 Cross     0x90
  0x00,0x3E,0x3E,0x3E,0x3E,0x3E,0x00, // 108 QuadMark  0x91

  0x7F,0x41,0xDD,0x1C,0xDD,0x41,0x7F, // 109 SymbolF   0x92
  0x80,0x80,0xFF,0x00,0xFF,0x80,0x80, // 110 SymbolT   0x93
  0x01,0x01,0xFF,0x00,0xFF,0x01,0x01  // 111 SymbolT   0x94



  };