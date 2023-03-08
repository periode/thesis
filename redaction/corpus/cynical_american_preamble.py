title = 'Constitution of the United States'

preamble = { 'Preamble': "We the People of the United States, \
in Order to form a more perfect Union, \
establish Justice, insure domestic Tranquility, \
provide for the common defense, promote the general Welfare, \
and secure the Blessings of Liberty to ourselves and our Posterity, \
do ordain and establish this Constitution for the United States of America." }

WEPOTUS_power = { 'ordain_and_establish' : lambda x, y : Constitution(x, y )}

WEPOTUS = People("We the People of the United States", WEPOTUS_power)

WEPOTUS.GOALS = [ "form a more perfect Union",
"establish Justice",
"insure domestic Tranquility",
"provide for the common defense",
"promote the general Welfare",
"secure the Blessings of Libery to ourselves and our Posterity"
]

USConstitution = WEPOTUS.power['ordain_and_establish'](title, preamble)

AttributeError: 'People' object has no attribute 'power'