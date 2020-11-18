
This tool allows to decapsulate bbframes which are encapsulated in to a pseudo transport stream.
pts2bbf will decapsulate on TS PID 0x010e according to the description from Digital Devices https://github.com/DigitalDevices/dddvb/blob/master/docs/bbframes
No arguments are required, tool reads from STDIN and writes to STDOUT.

NOTE: For DigitalDevices cardsv don't forget to set DTV_STREAM_ID to 0x80000000, elsewise you will only receive a few bbframes.


Compatible cards
----------------
Digital Devices (cards like Cin S2 V7a and more, see link)
TBS 6903X
