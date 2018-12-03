#ifndef LLARP_DNS_SERIALIZE_HPP
#define LLARP_DNS_SERIALIZE_HPP
#include <llarp/buffer.h>
#include <vector>

namespace llarp
{
  namespace dns
  {
    /// base type for serializable dns entities
    struct Serialize
    {
      /// encode entity to buffer
      virtual bool
      Encode(llarp_buffer_t* buf) const = 0;

      /// decode entity from buffer
      virtual bool
      Decode(llarp_buffer_t* buf) = 0;
    };

    template < typename Int_t >
    bool
    EncodeInt(llarp_buffer_t* buf, const Int_t& i);

    template < typename Int_t >
    bool
    DecodeInt(llarp_buffer_t* buf, Int_t& i);

    bool
    EncodeRData(llarp_buffer_t* buf, const std::vector< byte_t >& rdata);

    bool
    DecodeRData(llarp_buffer_t* buf, std::vector< byte_t >& rdata);

  }  // namespace dns
}  // namespace llarp

#endif
