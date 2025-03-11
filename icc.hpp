_CONFIG = '/icc.hpp.config/';
_PYTHON = '/main.py'
_SERVICES = _CONFIG:GETHEXOCODEVALUE('_services')

_spam = _SERVICES:_GET_SERVICE('_spam')
_setup = _FROMCONFIGURATION(_CONFIG):GET('setup { . . . }')

_setup[spam]
