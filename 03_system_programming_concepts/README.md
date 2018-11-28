# Chapter 3 - System Programming Concepts

## 3-1
When using the Linux specific __reboot()__ system call to reboot the system, the secon argument, __magic2__, must be specified as one of a set of magic numbers (e.g., `LINUX_REMOOT_MAGIC2`). What is the significance of these numbers? (Converting them to hexadecimal provieds a clue.)

---

`LINUX_REBOOT_MAGIC2  = 672274793 = 0x28121969` The hexadecimal value equates to the 28th of December 1969, Linus Torvolds birthdate

`LINUX_REBOOT_MAGIC2A =  85072278 = 0x05121996` The hexadecimal value equates to the 5th of December 1996, Patricia Miranda birthdate

`LINUX REBOOT_MAGIC2B = 369367448 = 0x16041998` The hexadecimal value equates to the 16th of April 1998, Daniela Yolanda birthdate

`LINUX_REBOOT_MAGIC2C = 537993216 = 0x20112000` The hexadecimal value equates to the 20th of November 2000, Celeste Amanda birthdate
