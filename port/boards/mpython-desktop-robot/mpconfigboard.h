#define MICROPY_HW_BOARD_NAME "mpython-desktop-robot"
#define MICROPY_HW_MCU_NAME "ESP32"

#define MICROPY_BUILDIN_ADC                 (0)
#define MICROPY_BUILDIN_DAC                 (0)

extern const struct _mp_obj_module_t mp_module_motion;
extern const struct _mp_obj_module_t audio_module;
extern const struct _mp_obj_module_t dueros_module;

#define MPYTHON_PORT_ROOT_POINTER \
        struct _MP3DecInfo  *mp3DecInfo; \
        struct _FrameHeader  *fh; \
        struct _SideInfo  *si; \
        struct _ScaleFactorInfo  *sfi; \
        struct _HuffmanInfo  *hi; \
        struct _DequantInfo  *di; \
        struct _IMDCTInfo  *mi; \
        struct _SubbandInfo  *sbi; \
        unsigned char *mp3DecReadBuf; \
        short *mp3DecOutBuf; \

#define BOARD_PORT_BUILTIN_MODULES \
        { MP_OBJ_NEW_QSTR(MP_QSTR_motion_mpu6050), (mp_obj_t)&mp_module_motion }, \
        { MP_OBJ_NEW_QSTR(MP_QSTR_esp_audio), (mp_obj_t)&audio_module }, \
        { MP_OBJ_NEW_QSTR(MP_QSTR_dueros), (mp_obj_t)&dueros_module }, 


    
        