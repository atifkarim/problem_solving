#ifndef CONFIG_PARAM_H_
#define CONFIG_PARAM_H_

typedef struct configuration_parameter{
    int a = 3;
    int b = 2;
    int c = 6;
}configuration_parameter;

void configuration_parameter_cfg_default(configuration_parameter* cfg);

#endif