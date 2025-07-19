# ESPHome Components

A collection of my ESPHome components.

## DDP Component

Based on [KaufHA](https://github.com/KaufHA/common/blob/main/components/README.md#ddp) ddp component but also has some enhancements to support monochromatic lights.

```yaml
external_components:
  - source:
      type: git
      url: https://github.com/tanishqmanuja/esphome-components
    components: [ddp]
    refresh: always
```

```yaml
ddp:

light:
  - platform: monochromatic
    effects:
      - ddp:
          timeout: 10s # optional
          blank_on_idle: true # optional
```
