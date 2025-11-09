# pts2bbf

This tool allows to extract BBFrames which are encapsulated within a pseudo transport stream (pts). It will decapsulate on TS PID 0x010e (decimal 270) or 0x0118 (decimal 280, which is used as PID in Windows) according to the description from Digital Devices (see https://github.com/DigitalDevices/dddvb/blob/master/docs/bbframes ).

## Usage

No arguments are required, the tool reads from STDIN and writes to STDOUT.

# bbfudpdecap

This tool allows to extract UDP Payload Data from BBFrames to STDOUT. 

Parameters can be a source IP address resp. port or destination IP address resp. port. For multiple input streams (only valid for DVB-S2) there is another parameter implemented.

## Usage

    ./bbfudpdecap [-src-ip x.x.x.x] [-src-port xxxx] [-dst-ip x.x.x.x] [-dst-port xxxx] [-mis xxxx]

Note: At least one argument is required.


# Compatible STiD135 based cards

## Digital Devices 

- [x] Cine S2 V7 Advanced (tested)
- [ ] MaxSX8 (untested)
- [ ] OctopusCI S2 Pro Advanced  (untested)
- [ ] Duoflex S2 v4 Advanced (untested)

Don't forget to set `DTV_STREAM_ID to 0x80000000`, elsewise you will only receive a few bbframes.

## TBS

- [x] TBS 6903X (v1, v2 tested)
- [ ] TBS 6909X (v1 and v2 both untested so far)

For these TBS cards please create a file `/etc/modprobe.d/stid135.conf` (as root) and add the following content: `options stid135 bbframe=1` and reboot.
