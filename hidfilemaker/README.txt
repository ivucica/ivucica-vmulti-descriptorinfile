ON CUSTOMIZING VMULTI'S HID AND REPORT DESCRIPTOR
=================================================

To customize vmulti's HID and report descriptor, you can create a file 
containing, in this order, the HID descriptor, immediately followed by the 
report descriptor.

HID descriptor matches Windows' HID_DESCRIPTOR structure. Report descriptor
is tightly packed report definition according to USB HID specifications. At 
the time of writing of these lines, you can see an example of both the 
descriptor and the report definition in sys/vmulti.h.

vmulti.hid has been added here as an example of a valid file that does not
match specifications from vmulti.h. This file contains only the 'feature'
report specification, the 'joystick' report specification and the required
'feature_01' report specification from vmulti.h.

hidfilemaker.c is an example of how to create these files. It uses the HID and
report descriptors from vmulti.h to produce such a file in the current working 
directory. 

Current implementation of vmulti uses the hardcoded path of C:\vmulti.hid to
load this file. If this file does not exist, defaults are used.

TODO:
Read exact path of the file from registry. Example of how to do this is in
Microsoft's input/vserial/ example in the DDK.

All blame for the hack that got this to work goes to Ivan Vucica.
