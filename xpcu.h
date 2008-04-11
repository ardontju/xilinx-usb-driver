#define XPCU_CLAIM	1
#define XPCU_RELEASE	0

struct xpcu_s {
	struct usb_device *dev;
	usb_dev_handle *handle;
	int interface;
	int alternate;
	unsigned long card_type;
};

int __attribute__ ((visibility ("hidden"))) xpcu_deviceinfo(struct xpcu_s *xpcu, struct usb_get_device_data *ugdd);
int __attribute__ ((visibility ("hidden"))) xpcu_transfer(struct xpcu_s *xpcu, struct usb_transfer *ut);
void __attribute__ ((visibility ("hidden"))) xpcu_set_interface(struct xpcu_s *xpcu, struct usb_set_interface *usi);
struct xpcu_s __attribute__ ((visibility ("hidden"))) *xpcu_find(struct event *e);
void __attribute__ ((visibility ("hidden"))) xpcu_found(struct xpcu_s *xpcu, struct event *e);
void __attribute__ ((visibility ("hidden"))) xpcu_close(struct xpcu_s *xpcu, struct event *e);