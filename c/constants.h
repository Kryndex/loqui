#ifndef LOQUI_CONSTANTS_H__
#define LOQUI_CONSTANTS_H__

#include "sysdep.h"

const unsigned char LOQUI_VERSION = 1;
const size_t LOQUI_DATA_SIZE_MAX = 1024 * 1024 * 50;

typedef enum {
  LOQUI_OP_HELLO = 1,
  LOQUI_OP_HELLO_ACK = 2,
  LOQUI_OP_PING = 3,
  LOQUI_OP_PONG = 4,
  LOQUI_OP_REQUEST = 5,
  LOQUI_OP_RESPONSE = 6,
  LOQUI_OP_PUSH = 7,
  LOQUI_OP_GOAWAY = 8,
  LOQUI_OP_ERROR = 9
} loqui_opcodes;


typedef enum {
  LOQUI_DECODE_NEEDS_MORE = 1,
  LOQUI_DECODE_COMPLETE = 2,
  LOQUI_DECODE_MEMORY_ERROR = -1,
  LOQUI_DECODE_INVALID_OPCODE = -2,
  LOQUI_DECODE_INVALID_SIZE = -3
} loqui_decoder_status;

typedef enum {
  LOQUI_FLAG_COMPRESSED = 1 << 0,
} loqui_flags;

#endif