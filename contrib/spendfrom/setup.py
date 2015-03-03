from distutils.core import setup
setup(name='nautspendfrom',
      version='1.0',
      description='Command-line utility for nautiluscoin "coin control"',
      author='Gavin Andresen',
      author_email='gavin@nautiluscoinfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
