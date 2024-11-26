# Helper command for this project

## Git

```
eval `ssh-agent`
ssh-add ~/.ssh/krumm
```

## SDL location on ubuntu 24

```
cd /usr/include/SDL2
```

## SDL docs lookup

```
grep -rn 'SDL_CreateWindow'
sed -n '781,+12p' SDL_video.h
```
