# pts2bbf

This tool allows to extract bbframes which are encapsulated within a pseudo transport stream.

**pts2bbf** will decapsulate on TS PID 0x010e (decimal 270) according to the description from Digital Devices (see https://github.com/DigitalDevices/dddvb/blob/master/docs/bbframes ).

Usage:

No arguments are required, the tool reads from STDIN and writes to STDOUT.

Remark: In order to change the TS PID to 0x0118 (decimal 280, which is used as PID in Windows), just edit `pts2bbf.cpp#L27`

NOTE: For DigitalDevices cards don't forget to set `DTV_STREAM_ID to 0x80000000`, elsewise you will only receive a few bbframes.

# bbfudpdecap

This tool allows to extract UDP Payload Data from bbframes to STDOUT. 

Parameters can be a source IP address resp. port or destination IP address resp. port. For multiple input streams (only valid for DVB-S2) there is another parameter implemented.

Usage:

    ./bbfudpdecap [-src-ip x.x.x.x] [-src-port xxxx] [-dst-ip x.x.x.x] [-dst-port xxxx] [-mis xxxx]

Note: At least one argument is required.


## Compatible STiD135 based cards

### Digital Devices 

- [x] Cine S2 V7 Advanced (tested)
- [ ] MaxSX8 (untested)
- [ ] OctopusCI S2 Pro Advanced  (untested)
- [ ] Duoflex S2 v4 Advanced (untested)

### TBS

- [x] TBS 6903X (v1 tested, v2 untested so far)
- [ ] TBS 6909X (v1 and v2 both untested so far)
