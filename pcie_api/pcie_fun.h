
#ifndef PCIE_FUNC_H
#define PCIE_FUNC_H
#ifdef __cplusplus
 extern "C" {
 #endif
extern unsigned char *h2c_align_mem_tmp;
extern unsigned char *c2h_align_mem_tmp;

void h2c_transfer(unsigned int address,unsigned int size,unsigned char *buffer);
void c2h_transfer(unsigned int address,unsigned int size,unsigned char *buffer);

void user_read(unsigned int address,unsigned int size,unsigned char *buffer);
void user_write(unsigned int address,unsigned int size,unsigned char *buffer);

void pcie_deinit();
int pcie_init();
int open_event();
int wait_for_event0();
void tx_dma_init();
void rx_dma_init();
int read_fifo(unsigned int addr);
void reset_all();

#ifdef __cplusplus
}
#endif
#endif

