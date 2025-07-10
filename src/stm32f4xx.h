// stm32f4xx.h - minimal for ADC and GPIO

#define RCC_BASE       0x40023800
#define GPIOA_BASE     0x40020000
#define ADC1_BASE      0x40012000

#define RCC            ((RCC_TypeDef *) RCC_BASE)
#define GPIOA          ((GPIO_TypeDef *) GPIOA_BASE)
#define ADC1           ((ADC_TypeDef *) ADC1_BASE)

typedef struct {
  volatile unsigned int MODER;
  volatile unsigned int PUPDR;
} GPIO_TypeDef;

typedef struct {
  volatile unsigned int AHB1ENR;
  volatile unsigned int APB2ENR;
} RCC_TypeDef;

typedef struct {
  volatile unsigned int SR;
  volatile unsigned int CR2;
  volatile unsigned int SMPR2;
  volatile unsigned int SQR3;
  volatile unsigned int DR;
} ADC_TypeDef;

#define RCC_AHB1ENR_GPIOAEN    (1U << 0)
#define RCC_APB2ENR_ADC1EN     (1U << 8)
#define ADC_CR2_ADON           (1U << 0)
#define ADC_CR2_SWSTART        (1U << 30)
#define ADC_SR_EOC             (1U << 1)
