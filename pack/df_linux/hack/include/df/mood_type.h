/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_MOOD_TYPE_H
#define DF_MOOD_TYPE_H
namespace df {
  namespace enums {
    namespace mood_type {
      enum mood_type : int16_t {
        None = -1,
        Fey,
        Secretive,
        Possessed,
        Macabre,
        Fell,
        Melancholy,
        Raving,
        Berserk,
        Baby,
        Traumatized
      };
    }
  }
  using enums::mood_type::mood_type;
  template<> struct DFHACK_EXPORT identity_traits<mood_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<mood_type> {
    typedef int16_t base_type;
    typedef mood_type enum_type;
    static const base_type first_item_value = -1;
    static const base_type last_item_value = 9;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[11];
  };
}
#endif
