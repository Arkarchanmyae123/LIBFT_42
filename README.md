# 📚 42 libft - Your Custom C Library

A custom-built standard C library containing essential functions for strings, memory manipulation, and character checks. This project serves as a foundational static library (`libft.a`) for future C projects.

## 🚀 About The Project

In standard C programming, many basic functions are taken for granted. This project involves re-coding these standard standard `libc` functions from scratch, alongside additional utility functions, to understand their inner workings and memory management.

## 🛠️ Functions Implemented

This library includes the following functions, categorized by their utility:

### Character Checks & Manipulation
* `ft_isalpha` - Check if character is alphabetic.
* `ft_isdigit` - Check if character is a digit.
* `ft_isalnum` - Check if character is alphanumeric.
* `ft_isascii` - Check if character fits in the ASCII table.
* `ft_isprint` - Check if character is printable.
* `ft_toupper` - Convert character to uppercase.
* `ft_tolower` - Convert character to lowercase.

### Memory Manipulation
* `ft_memset` - Fill memory with a constant byte.
* `ft_bzero` - Zero a byte string.
* `ft_memcpy` - Copy memory area.
* `ft_memmove` - Copy memory area with overlap protection.
* `ft_memchr` - Scan memory for a character.
* `ft_memcmp` - Compare memory areas.
* `ft_calloc` - Allocate and zero-initialize memory.

### String Manipulation
* `ft_strlen` - Calculate string length.
* `ft_strlcpy` - Size-bounded string copy.
* `ft_strlcat` - Size-bounded string concatenation.
* `ft_strchr` - Locate character in string.
* `ft_strrchr` - Locate character in string from the end.
* `ft_strncmp` - Compare two strings.
* `ft_strnstr` - Locate a substring in a string.
* `ft_strdup` - Duplicate a string.
* `ft_substr` - Extract a substring.
* `ft_strjoin` - Concatenate two strings into a new string.
* `ft_strtrim` - Trim characters from the beginning and end of a string.
* `ft_split` - Split string into an array of substrings.
* `ft_strmapi` - Apply a function to each character of a string to create a new string.
* `ft_striteri` - Apply a function to each character of a string by reference.

### Conversion & File Descriptors
* `ft_atoi` - Convert string to integer.
* `ft_itoa` - Convert integer to string.
* `ft_putchar_fd` - Output a character to a file descriptor.
* `ft_putstr_fd` - Output a string to a file descriptor.
* `ft_putendl_fd` - Output a string with a newline to a file descriptor.
* `ft_putnbr_fd` - Output a number to a file descriptor.

## 💻 Getting Started

### Prerequisites
* GCC compiler
* Make

# Burmese 

# 📚 42 libft - သင့်ရဲ့ ကိုယ်ပိုင် C Library

Strings၊ memory စီမံခန့်ခွဲခြင်းနဲ့ character တွေကို စစ်ဆေးပေးတဲ့ မရှိမဖြစ်လိုအပ်တဲ့ function တွေ ပါဝင်တဲ့ ကိုယ်ပိုင်ဖန်တီးထားသော Standard C library တစ်ခု ဖြစ်ပါတယ်။ ဒီပရောဂျက်က နောက်ပိုင်းရေးသားမယ့် C ပရောဂျက်တွေအတွက် အခြေခံအကျဆုံး static library (`libft.a`) အဖြစ် အသုံးဝင်ပါတယ်။

## 🚀 ပရောဂျက်အကြောင်း

Standard C programming မှာ အခြေခံ function အများစုကို အသင့်သုံးအနေနဲ့ အလွယ်တကူ သုံးလေ့ရှိကြပါတယ်။ ဒီပရောဂျက်မှာတော့ အဲဒီ standard `libc` function တွေကို အစကနေ ကိုယ်တိုင်ပြန်ရေးရမှာဖြစ်ပြီး၊ တခြား အထောက်အကူပြု function တွေကိုပါ ပေါင်းထည့်ရေးသားခြင်းဖြင့် သူတို့ရဲ့ အလုပ်လုပ်ပုံ အဆင့်ဆင့်နဲ့ memory စီမံခန့်ခွဲမှု (memory management) ကို ပိုမိုနားလည်သဘောပေါက်စေမှာ ဖြစ်ပါတယ်။

## 🛠️️ ပါဝင်သော Function များ

ဒီ Library မှာ အောက်ပါ function တွေ ပါဝင်ပြီး ၎င်းတို့ရဲ့ အသုံးဝင်မှုအလိုက် အမျိုးအစား ခွဲခြားထားပါတယ်-

### Character စစ်ဆေးခြင်းနှင့် ပြုပြင်ခြင်း
* `ft_isalpha` - Character သည် အက္ခရာ (alphabetic) ဟုတ်/မဟုတ် စစ်ဆေးရန်။
* `ft_isdigit` - Character သည် ဂဏန်း (digit) ဟုတ်/မဟုတ် စစ်ဆေးရန်။
* `ft_isalnum` - Character သည် အက္ခရာ သို့မဟုတ် ဂဏန်း (alphanumeric) ဟုတ်/မဟုတ် စစ်ဆေးရန်။
* `ft_isascii` - Character သည် ASCII table အတွင်း ပါဝင်ခြင်း ရှိ/မရှိ စစ်ဆေးရန်။
* `ft_isprint` - Character သည် Print ထုတ်၍ရနိုင်သော အရာ (printable) ဟုတ်/မဟုတ် စစ်ဆေးရန်။
* `ft_toupper` - Character ကို အကြီးစာလုံး (uppercase) သို့ ပြောင်းရန်။
* `ft_tolower` - Character ကို အသေးစာလုံး (lowercase) သို့ ပြောင်းရန်။

### Memory စီမံခန့်ခွဲခြင်း
* `ft_memset` - Memory ကို သတ်မှတ်ထားသော byte ဖြင့် ဖြည့်ရန်။
* `ft_bzero` - Byte string တစ်ခုကို Zero (0) များဖြင့် ဖြည့်ရန်။
* `ft_memcpy` - Memory ဧရိယာကို ကူးယူရန် (Copy)။
* `ft_memmove` - Memory ဧရိယာကို ထပ်နေခြင်း (overlap) မှ ကာကွယ်ပေးပြီး ကူးယူရန်။
* `ft_memchr` - Memory အတွင်းရှိ Character တစ်ခုကို ရှာဖွေရန်။
* `ft_memcmp` - Memory ဧရိယာများကို နှိုင်းယှဉ်ရန်။
* `ft_calloc` - Memory နေရာယူပေးပြီး ၎င်းကို Zero ဖြင့် ကနဦးသတ်မှတ် (Initialize) ရန်။

### String စီမံခန့်ခွဲခြင်း
* `ft_strlen` - String ၏ အရှည်ကို တွက်ချက်ရန်။
* `ft_strlcpy` - သတ်မှတ်ထားသော Size အတွင်း String ကို ကူးယူရန်။
* `ft_strlcat` - သတ်မှတ်ထားသော Size အတွင်း String များကို ဆက်ရန်။
* `ft_strchr` - String အတွင်းမှ Character တစ်ခုကို ရှာဖွေရန်။
* `ft_strrchr` - String အတွင်းမှ Character တစ်ခုကို အဆုံးမှစ၍ ရှာဖွေရန်။
* `ft_strncmp` - String နှစ်ခုကို နှိုင်းယှဉ်ရန်။
* `ft_strnstr` - String တစ်ခုအတွင်းမှ Substring ကို ရှာဖွေရန်။
* `ft_strdup` - String တစ်ခုကို ပုံတူကူးယူရန် (Duplicate)။
* `ft_substr` - String မှ Substring တစ်ခုကို ခွဲထုတ်ရန်။
* `ft_strjoin` - String နှစ်ခုကို ပေါင်းပြီး String အသစ်တစ်ခု ဖန်တီးရန်။
* `ft_strtrim` - String ၏ အစနှင့် အဆုံးမှ မလိုအပ်သော Character များကို ဖယ်ရှားရန်။
* `ft_split` - String တစ်ခုကို Substring array များအဖြစ် ခွဲထုတ်ရန်။
* `ft_strmapi` - String ၏ Character တစ်ခုချင်းစီကို Function တစ်ခုဖြင့် ပြောင်းလဲပြီး String အသစ် ဖန်တီးရန်။
* `ft_striteri` - String ၏ Character တစ်ခုချင်းစီကို Reference ဖြင့် Function တစ်ခု အသုံးပြု၍ ပြောင်းလဲရန်။

### Conversion နှင့် File Descriptors
* `ft_atoi` - String ကို Integer (ကိန်းပြည့်) အဖြစ် ပြောင်းရန်။
* `ft_itoa` - Integer ကို String အဖြစ် ပြောင်းရန်။
* `ft_putchar_fd` - Character တစ်ခုကို File descriptor သို့ Output ထုတ်ရန်။
* `ft_putstr_fd` - String တစ်ခုကို File descriptor သို့ Output ထုတ်ရန်။
* `ft_putendl_fd` - String တစ်ခုနှင့် Newline (စာကြောင်းသစ်) ကို File descriptor သို့ Output ထုတ်ရန်။
* `ft_putnbr_fd` - ဂဏန်းတစ်ခုကို File descriptor သို့ Output ထုတ်ရန်။

## 💻 စတင်အသုံးပြုခြင်း

### လိုအပ်ချက်များ (Prerequisites)
* GCC compiler
* Make
