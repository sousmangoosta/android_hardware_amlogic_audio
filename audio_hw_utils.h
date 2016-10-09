#ifndef  _AUDIO_HW_UTILS_H_
#define _AUDIO_HW_UTILS_H_
int get_sysfs_int16(const char *path,unsigned *value);
int sysfs_set_sysfs_str(const char *path, const char *val);
int get_sysfs_int (const char *path);
int mystrstr(char *mystr,char *substr) ;
void set_codec_type(int type);
int get_codec_type(int format);
int getprop_bool (const char *path);
unsigned char codec_type_is_raw_data(int type);
int mystrstr(char *mystr,char *substr);
#endif
