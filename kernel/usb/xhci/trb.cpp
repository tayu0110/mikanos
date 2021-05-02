#include"usb/xhci/trb.hpp"

namespace usb::xhci {
    const std::array<const char*, 37> kTRBCompletionCodeToName{
        "Invalid",
        "Success",
        "Data Buffer Error",
        "Babble Detected Error",
        "USB Transaction Error",
        "TRB Error",
        "Stall Error",
        "Resource Error",
        "Bandwidth Error",
        "No Slots Available Error",
        "Invalid Stream Type Error",
        "Slot Not Enabled Error",
        "Endpoint Not Enabled Error",
        "Short Packet",
        "Ring Underrun",
        "Ring Overrun",
        "VF Event Ring Full Error",
        "Parameter Error",
        "Bandwidth Overrun Error",
        "Context State Error",
        "No ping Response Error",
        "Event Ring Full Error",
        "Incompatible Device Error",
        "Missed Service Error",
        "Command Ring Stopped",
        "Command Aborted",
        "Stopped",
        "Stopped - Length Invalid",
        "Stopped - Short Packet",
        "Max Exit Latency Too Large Error",
        "Reserved",
        "Isoch Buffer Overrun",
        "Event Lost Error",
        "Undefined Error",
        "Invalid Stream ID Error",
        "Secondary Bandwidth Error",
        "Split Transaction Error"
    };

    const std::array<const char*, 64> kTRBTypeToName{
        "Reserved",
        "Normal",
        "Setup Stage",
        "Data Stage",
        "Status Stage",
        "Isoch",
        "Link",
        "EventData",
        "No-Op",
        "Enable Slot Command",
        "Disable Slot Command",
        "Address Device Command",
        "Configure Endpoint Command",
        "Evaluate Context Command",
        "Reset Endpoint Command",
        "Stop Endpoint Command",
        "Set TR Dequeue Pointer Command",
        "Reset Device Command",
        "Force Event Command",
        "Negotiate Bandwidth Command",
        "Set Latency Tokerance Value Command",
        "Get Port Bandwidth Command",
        "Force Header Command",
        "No Op Command",
        "Reserved",
        "Reserved",
        "Reserved",
        "Reserved",
        "Reserved",
        "Reserved",
        "Reserved",
        "Reserved",
        "Transfer Event",
        "Command Completion Event",
        "Port Status Change Event",
        "Bandwidth Request Event",
        "Doorbell Event",
        "Host Controller Event",
        "Device Notification Event",
        "MFINDEX Wrap Event",
        "Reserved",
        "Reserved",
        "Reserved",
        "Reserved",
        "Reserved",
        "Reserved",
        "Reserved",
        "Reserved",
        "Vendor Defined",
        "Vendor Defined",
        "Vendor Defined",
        "Vendor Defined",
        "Vendor Defined",
        "Vendor Defined",
        "Vendor Defined",
        "Vendor Defined",
        "Vendor Defined",
        "Vendor Defined",
        "Vendor Defined",
        "Vendor Defined",
        "Vendor Defined",
        "Vendor Defined",
        "Vendor Defined",
        "Vendor Defined"
    };
}
