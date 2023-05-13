def _load_player(self):
    """Load the configured video player and return an instance of it."""
    module = self._config.get('video_looper', 'video_player')
    return importlib.import_module('.' + module, 'Adafruit_Video_Looper').create_player(self._config, screen=self._screen, bgimage=self._bgimage)

def _load_file_reader(self):
    """Load the configured file reader and return an instance of it."""
    module = self._config.get('video_looper', 'file_reader')
    return importlib.import_module('.' + module, 'Adafruit_Video_Looper').create_file_reader(self._config, self._screen)