# ddbbf for Digital Devices card with FW >=1.7

This tool allows to decapsulate bbframes which are encapsulated in to a pseudo transport stream.
ddbbf will decapsulate on TS PID 0x010e according to the description from Digital Devices https://github.com/DigitalDevices/dddvb/blob/master/docs/bbframes

Don't forget to set DTV_STREAM_ID to 0x80000000, elsewise you will only receive a few bbframes.


More tools to follow
