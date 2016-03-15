// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_TEST2_TESTFLAT_H_
#define FLATBUFFERS_GENERATED_TEST2_TESTFLAT_H_

#include "flatbuffers/flatbuffers.h"


namespace TestFlat {

struct StcTestMessage2;

struct StcTestMessage2 FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_AGE = 4,
    VT_NAME = 6,
    VT_VEC = 8
  };
  uint32_t age() const { return GetField<uint32_t>(VT_AGE, 0); }
  const flatbuffers::String *name() const { return GetPointer<const flatbuffers::String *>(VT_NAME); }
  const flatbuffers::Vector<uint32_t> *vec() const { return GetPointer<const flatbuffers::Vector<uint32_t> *>(VT_VEC); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_AGE) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_NAME) &&
           verifier.Verify(name()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_VEC) &&
           verifier.Verify(vec()) &&
           verifier.EndTable();
  }
};

struct StcTestMessage2Builder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_age(uint32_t age) { fbb_.AddElement<uint32_t>(StcTestMessage2::VT_AGE, age, 0); }
  void add_name(flatbuffers::Offset<flatbuffers::String> name) { fbb_.AddOffset(StcTestMessage2::VT_NAME, name); }
  void add_vec(flatbuffers::Offset<flatbuffers::Vector<uint32_t>> vec) { fbb_.AddOffset(StcTestMessage2::VT_VEC, vec); }
  StcTestMessage2Builder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  StcTestMessage2Builder &operator=(const StcTestMessage2Builder &);
  flatbuffers::Offset<StcTestMessage2> Finish() {
    auto o = flatbuffers::Offset<StcTestMessage2>(fbb_.EndTable(start_, 3));
    return o;
  }
};

inline flatbuffers::Offset<StcTestMessage2> CreateStcTestMessage2(flatbuffers::FlatBufferBuilder &_fbb,
   uint32_t age = 0,
   flatbuffers::Offset<flatbuffers::String> name = 0,
   flatbuffers::Offset<flatbuffers::Vector<uint32_t>> vec = 0) {
  StcTestMessage2Builder builder_(_fbb);
  builder_.add_vec(vec);
  builder_.add_name(name);
  builder_.add_age(age);
  return builder_.Finish();
}

inline const TestFlat::StcTestMessage2 *GetStcTestMessage2(const void *buf) { return flatbuffers::GetRoot<TestFlat::StcTestMessage2>(buf); }

inline bool VerifyStcTestMessage2Buffer(flatbuffers::Verifier &verifier) { return verifier.VerifyBuffer<TestFlat::StcTestMessage2>(); }

inline void FinishStcTestMessage2Buffer(flatbuffers::FlatBufferBuilder &fbb, flatbuffers::Offset<TestFlat::StcTestMessage2> root) { fbb.Finish(root); }

}  // namespace TestFlat

#endif  // FLATBUFFERS_GENERATED_TEST2_TESTFLAT_H_