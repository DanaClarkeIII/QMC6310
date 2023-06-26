#ifndef QMC6310_H
#define QMC6310_H

#include <Wire.h>

#define QMC6310_ADDRESS 0x0C // Default I2C address of QMC6310

// Register addresses
#define QMC6310_X_LSB 0x01
#define QMC6310_X_MSB 0x02
#define QMC6310_Y_LSB 0x03
#define QMC6310_Y_MSB 0x04
#define QMC6310_Z_LSB 0x05
#define QMC6310_Z_MSB 0x06
#define QMC6310_STATUS 0x09
#define QMC6310_CONTROL_1 0x0A
#define QMC6310_CONTROL_2 0x0B

// Status register bits
#define QMC6310_STATUS_DRDY 0x01
#define QMC6310_STATUS_OVFL 0x02

class QMC6310 {
public:
  QMC6310() {}

  bool begin();
  bool readData(int16_t &x, int16_t &y, int16_t &z);
};

#endif // QMC6310_H
