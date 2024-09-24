// Copyright © 2015, Battelle National Biodefense Institute (BNBI);
// all rights reserved. Authored by: Brian Ondov, Todd Treangen,
// Sergey Koren, and Adam Phillippy
//
// See the LICENSE.txt file included with this software for license information.

#ifndef INCLUDED_CommandSketch
#define INCLUDED_CommandSketch

#include "Command.h"

namespace mash {

class CommandSketch : public Command {

public:

    CommandSketch();
    
    int run() const; // override

    int runFingerPrint() const;


private:
    // checkArguments - Verifica degli argomenti 
    bool checkArguments() const; 

    // populatesFiles - Effettua la popolazione del vettore 
    void populateFiles(std::vector<std::string> &files, bool list) const; 

    // determinePrefixAndSuffix - Determina il prefisso e il suffisso del file 
    std::string determinePrefixAndSuffix(const std::string &arg, bool isFingerprint, SketchFingerPrint::Parameters paramametersFingerPrint, Sketch::Parameters parameters ) const; 

};

} // namespace mash

#endif
