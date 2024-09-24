using Cxx = import "/capnp/c++.capnp";
$Cxx.namespace("capnfp");

@0x81afe55c284d062f;

struct MinHash
{
    struct ReferenceList
    {
        struct Reference
        {
            id @0: Text;
            sequence @1 : Text;
            quality @2 : Text;
            length @3 : UInt32;
            length64 @6 : UInt64;
            name @4 : Text;
            comment @5 : Text;
            
            subSketchList32 @9 : List(List(UInt32));
            subSketchList64 @10 : List(List(UInt64));

            counts32 @7 : List(UInt32);
            counts32Sorted @8 : Bool;
        }
        
        references @0 : List(Reference);
    }
    
    kmerSize @0 : UInt32;
    windowSize @1 : UInt32;
    minHashesPerWindow @2 : UInt32;
    concatenated @3 : Bool;
    error @5 : Float32;
    noncanonical @6 : Bool;
    alphabet @7 : Text;
    preserveCase @8 : Bool;
    hashSeed @9 : UInt32 = 42;
    
    referenceListOld @4 : ReferenceList;
    referenceList @10 : ReferenceList;
}
