#pragma once

#ifdef USE_ARDUINO

#include "esphome/core/component.h"
#include "esphome/components/light/light_effect.h"
#include "esphome/components/light/light_output.h"
#include "ddp_light_effect_base.h"

namespace esphome {
namespace ddp {

class DDPLightEffect : public DDPLightEffectBase, public light::LightEffect {
 public:
  DDPLightEffect(const char *name);

  #if ESPHOME_VERSION_CODE >= VERSION_CODE(2026, 1, 0) 
  esphome::StringRef get_name() override;
  #else
  const char *get_name() override;
  #endif

  void start() override;
  void stop() override;
  void apply() override;

 protected:
  uint16_t process_(const uint8_t *payload, uint16_t size, uint16_t used) override;
};

}  // namespace ddp
}  // namespace esphome

#endif  // ESPHOME_DDP_LIGHT_EFFECT_H
