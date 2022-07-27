# https://docs.qmk.fm/#/squeezing_avr

# https://docs.qmk.fm/#/feature_auto_shift
# Can't use at the same time as CAPS_WORD...
AUTO_SHIFT_ENABLE = no

MOUSEKEY_ENABLE = yes        # Mouse keys

# https://docs.qmk.fm/#/feature_caps_word
# Can't use at the same time as AUTO_SHIFT...
CAPS_WORD_ENABLE = yes

# https://docs.qmk.fm/#/feature_tap_dance
TAP_DANCE_ENABLE = yes

# I don't really need these so I'm going to disable them to save space
CONSOLE_ENABLE = no
ENCODER_ENABLE = no
GRAVE_ESC_ENABLE = no
SPACE_CADET_ENABLE = no
