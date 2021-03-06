 
#include <linux/ioctl.h>

#define MXC622X_I2C_SLAVE_ADDR        0x2A

/* MXC622X register address */
#define MXC622X_REG_DATAX0        0x00
#define MXC622X_REG_DATAY0        0x01
#define MXC622X_REG_ORIENTATION_SHAKE_STATUS    0x02
#define MXC622X_REG_DETECTION     0x04

#define MXC622X_REG_CHIP_ID      0x08

#define MXC622X_BW_100HZ        0x00
#define MXC622X_RANGE_2G        0x00

#define MXC622X_BUFSIZE				256



#define MXC622X_SUCCESS						0
#define MXC622X_ERR_I2C						-1
#define MXC622X_ERR_STATUS					-3
#define MXC622X_ERR_SETUP_FAILURE			-4
#define MXC622X_ERR_GETGSENSORDATA			-5
#define MXC622X_ERR_IDENTIFICATION			-6


