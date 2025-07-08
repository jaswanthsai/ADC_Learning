/*
 * adc_driver_pseudocode.c
 *
 * Pseudocode for an STM32 ADC driver
 */

// Step 1: Enable ADC clock via RCC register
// Step 2: Configure ADC resolution and sampling time
// Step 3: Select ADC input channel
// Step 4: Enable ADC module
// Step 5: Start ADC conversion
// Step 6: Poll for conversion complete
// Step 7: Read ADC result from data register
