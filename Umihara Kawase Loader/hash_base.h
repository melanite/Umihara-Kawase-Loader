#pragma once

namespace FNV1aHash {

    namespace T {

        //
        // hash base type (unsigned integers only)
        //

        template< typename t, typename = std::enable_if_t< std::is_unsigned< t >::value > > class HashBase {
        private:
            t m_value;

        public:
            constexpr HashBase() = default;

            FORCEINLINE constexpr HashBase( const t &value ) : m_value{ value } {

            }

            // returns hash value
            FORCEINLINE constexpr t get() const {
                return m_value;
            }

            FORCEINLINE constexpr operator t() const {
                return get();
            }
        };

    } // namespace T

} // namespace FNV1aHash