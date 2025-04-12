volatile unsigned int* const UART0DR = (unsigned int*)0x09000000;

void kernel_main(void){
    const char* hello = "hello, Pi 5!\n";
    while (*hello){
        *UART0DR = (unsigned int)(*hello++);
    }
    while (1);

}
