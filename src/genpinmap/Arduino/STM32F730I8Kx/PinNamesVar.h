  /* SYS_WKUP */
#ifdef PWR_WAKEUP_PIN1
  SYS_WKUP1 = PA_0,
#endif
#ifdef PWR_WAKEUP_PIN2
  SYS_WKUP2 = PA_2,
#endif
#ifdef PWR_WAKEUP_PIN3
  SYS_WKUP3 = PC_1,
#endif
#ifdef PWR_WAKEUP_PIN4
  SYS_WKUP4 = PC_13,
#endif
#ifdef PWR_WAKEUP_PIN5
  SYS_WKUP5 = PI_8,
#endif
#ifdef PWR_WAKEUP_PIN6
  SYS_WKUP6 = PI_11,
#endif
#ifdef PWR_WAKEUP_PIN7
  SYS_WKUP7 = NC,
#endif
#ifdef PWR_WAKEUP_PIN8
  SYS_WKUP8 = NC,
#endif
  /* USB */
#ifdef USBCON
  USB_OTG_FS_SOF = PA_8,
  USB_OTG_FS_VBUS = PA_9,
  USB_OTG_FS_ID = PA_10,
  USB_OTG_FS_DM = PA_11,
  USB_OTG_FS_DP = PA_12,
  USB_OTG_HS_SOF = PA_4,
  USB_OTG_HS_ID = PB_12,
  USB_OTG_HS_VBUS = PB_13,
  USB_OTG_HS_DM = PB_14,
  USB_OTG_HS_DP = PB_15,
#endif
