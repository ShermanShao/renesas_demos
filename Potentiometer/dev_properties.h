
struct dev_CurrentVoltage
{
    float data;
    char name[16];// "CurrentVoltage";
};

struct dev_properties
{
    struct dev_CurrentVoltage CurrentVoltage;
};
