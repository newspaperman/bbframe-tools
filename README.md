# pts2bbf

This tool allows to decapsulate bbframes which are encapsulated into a pseudo transport stream.

**pts2bbf** will decapsulate on TS PID 0x010e according to the description from Digital Devices (see https://github.com/DigitalDevices/dddvb/blob/master/docs/bbframes ).

No arguments are required, the tool reads from STDIN and writes to STDOUT.

NOTE: For DigitalDevices cards don't forget to set `DTV_STREAM_ID to 0x80000000`, elsewise you will only receive a few bbframes.

## Compatible STiD135 based cards

### Digital Devices 

- [x] Cine S2 V7 Advanced (tested)
- [ ] MaxSX8 (untested)
- [ ] OctopusCI S2 Pro Advanced  (untested)
- [ ] Duoflex S2 v4 Advanced (untested)

### TBS

- [x] TBS 6903X (tested)
- [ ] TBS 6909X (untested so far)
