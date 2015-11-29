#ifndef __SERIAL_H__
#define __SERIAL_H__

#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include <termios.h>

/** Serial communication api for Arduino Uno/Nano
  * For detailed documentation see the implementation file (serial.c)
  */

const int32_t serial_open(const uint8_t *device_name, const speed_t baud_rate);
const int32_t serial_close(const int32_t device);
const int32_t serial_echo(const int32_t device, FILE *out);
const ssize_t serial_read_until(const int32_t device, uint8_t *buffer, const uint8_t until, const size_t max_size);

#endif
