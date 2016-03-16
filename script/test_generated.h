// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_TEST_TESTFLAT_H_
#define FLATBUFFERS_GENERATED_TEST_TESTFLAT_H_

#include "flatbuffers/flatbuffers.h"


namespace TestFlat {

struct StcTestMessage;

struct StcTestMessage FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_ID = 4
  };
  uint32_t id() const { return GetField<uint32_t>(VT_ID, 0); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_ID) &&
           verifier.EndTable();
  }
};

struct StcTestMessageBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_id(uint32_t id) { fbb_.AddElement<uint32_t>(StcTestMessage::VT_ID, id, 0); }
  StcTestMessageBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  StcTestMessageBuilder &operator=(const StcTestMessageBuilder &);
  flatbuffers::Offset<StcTestMessage> Finish() {
    auto o = flatbuffers::Offset<StcTestMessage>(fbb_.EndTable(start_, 1));
    return o;
  }
};

inline flatbuffers::Offset<StcTestMessage> CreateStcTestMessage(flatbuffers::FlatBufferBuilder &_fbb,
   uint32_t id = 0) {
  StcTestMessageBuilder builder_(_fbb);
  builder_.add_id(id);
  return builder_.Finish();
}

inline const TestFlat::StcTestMessage *GetStcTestMessage(const void *buf) { return flatbuffers::GetRoot<TestFlat::StcTestMessage>(buf); }

inline bool VerifyStcTestMessageBuffer(flatbuffers::Verifier &verifier) { return verifier.VerifyBuffer<TestFlat::StcTestMessage>(); }

inline void FinishStcTestMessageBuffer(flatbuffers::FlatBufferBuilder &fbb, flatbuffers::Offset<TestFlat::StcTestMessage> root) { fbb.Finish(root); }

}  // namespace TestFlat

#endif  // FLATBUFFERS_GENERATED_TEST_TESTFLAT_H_