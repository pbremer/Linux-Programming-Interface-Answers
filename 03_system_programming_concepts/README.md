# Chapter 3 - System Programming Concepts

## 3-1
When using the Linux specific _reboot()_ system call to reboot the system, the second argument, _magic2_, must be specified as one of a set of magic numbers (e.g., `LINUX_REMOOT_MAGIC2`). What is the significance of these numbers? (Converting them to hexadecimal provieds a clue.)

---

<table>
  <tr>
    <th>Magic</th>
    <th>Decimal Value</th>
    <th>Hex Value</th>
    <th>Significance</th>
  </tr>
  <tr>
    <td><tt>LINUX_REBOOT_MAGIC2</tt></td>
    <td>672274793</td>
    <td>0x28121969</td>
    <td>28th of December 1969; Linus Torvolds birthdate</td>
  </tr>
  <tr>
    <td><tt>LINUX_REBOOT_MAGIC2A</tt></td>
    <td>85072278</td>
    <td>0x05121996</td>
    <td>5th of December 1996; Patricia Miranda birthdate</td>
  </tr>
  <tr>
    <td><tt>LINUX_REBOOT_MAGIC2B</tt></td>
    <td>369367448</td>
    <td>0x16041998</td>
    <td>16th of April 1998; Daniela Yolanda birthdate</td>
  </tr>
  <tr>
    <td><tt>LINUX_REBOOT_MAGIC2C</tt></td>
    <td>537993216</td>
    <td>0x20112000</td>
    <td>20th of November 2000; Celeste Amanda birthdate</td>
  </tr>
</table>
