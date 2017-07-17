#ifndef  _AUDIO_HW_UTILS_H_
#define _AUDIO_HW_UTILS_H_
int get_sysfs_uint(const char *path, uint *value);
int sysfs_set_sysfs_str(const char *path, const char *val);
int get_sysfs_int (const char *path);
int mystrstr(char *mystr,char *substr) ;
void set_codec_type(int type);
int get_codec_type(int format);
int getprop_bool (const char *path);
unsigned char codec_type_is_raw_data(int type);
int mystrstr(char *mystr,char *substr);
void *convert_audio_sample_for_output(int input_frames,int input_format,int input_ch,void *input_buf,int *out_size/*,float lvol*/);

#endif
