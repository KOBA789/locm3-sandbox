#include <libopencm3/stm32/rcc.h>
#include <libopencm3/stm32/gpio.h>

int main(void) {
	int i;
	rcc_periph_clock_enable(RCC_GPIOC);
	gpio_set_mode(GPIOC, GPIO_MODE_OUTPUT_2_MHZ,
		      GPIO_CNF_OUTPUT_OPENDRAIN, GPIO13);

	while (1) {
		gpio_toggle(GPIOC, GPIO13);
		for (i = 0; i < 800000; i++) {
			__asm__("nop");
		}
	}

	return 0;
}
