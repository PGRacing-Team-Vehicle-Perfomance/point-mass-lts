# Laptime Simulator

Vehicle dynamics simulator for Formula Student competition analysis on Skidpad and Acceleration events.

Based on: <https://github.com/BAAdas/lap-doer>

## Requirements

- C++23 or higher
- CMake 3.28+

## Building & Running

```bash
git clone https://github.com/PGRacing-Team-Vehicle-Perfomance/point-mass-lts.git
cd point-mass-lts
make          # Build Release
make run      # Build and run
```

Available targets:
| Command | Description |
|---------|-------------|
| `make` | Build Release (default) |
| `make debug` | Build Debug |
| `make run` | Build and run |
| `make rebuild` | Clean and rebuild |
| `make clean` | Remove build directory |
| `make help` | Show help |

On Windows use `make` via MinGW, Git Bash, or WSL.

### Windows (Visual Studio)

- Open Visual Studio
- Click File -> Open -> CMake and select the top level CMakeLists.txt
- If you do not have it, install "Linux, macOS, and embedded development with C++" (most likely you will be prompted by the IDE to do so, if not go to Visual Studio Installer and download the package manually)

## Contributing

After cloning repository run:

```bash
pre-commit install
```

to enforce correct code formatting before every commit. If you do not have pre-commit run:

```bash
pip install pre-commit
```

or on WSL(Debian based):

```bash
sudo apt install pre-commit
```
