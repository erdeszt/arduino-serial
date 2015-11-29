#### Serial communication with Arduino in C

Read a line from Arduino:

```c
#include <termios.h>
#include "serial.h"

int main(int argc, char **argv) {
    int device = serial_open("dev/ttyACM0", B9600);
    char buffer[255];

    serial_read_until(device, buffer, '\n', 255);

    /* The buffer is guaranteed to have a terminating null
     * so it's safe to print right out
     */
    printf("Mesage from Arduino: %s\n", buffer);

    serial_close(device);

    return 0;
}
```
