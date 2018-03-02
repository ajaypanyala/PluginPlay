#pragma once
#include "NWChemExRuntime/ChemistryRuntime.hpp"

/**
 *  @file NWXDefaults.hpp
 *
 *  This file contains routines for generating the default initial chemical
 *  runtime state used by the NWX project.
 *
 *  @par Implementation Notes:
 *  - The definitions of all of these functions are generated by the scripts in
 *    the reference_data directory of NWChemExRuntime.
 *  - The sources for these functions are long, hard-coded tables, and as such
 *    each function is defined within its own source.
 *  - The sources for these functions live in the Defaults directory
 */
namespace NWXRuntime {

/// Returns a map of default constants
typename ChemistryRuntime::constant_lut_type default_constants();

/// Returns a map of default molecules
typename ChemistryRuntime::molecule_lut_type default_molecules();

/// Returns a map of default basis sets
typename ChemistryRuntime::basis_lut_type default_bases();

/// Returns a map of default elemental properties
typename ChemistryRuntime::indexed_atom_type default_atoms();

/// Returns a map of known isotopes
typename  ChemistryRuntime::isotope_lut_type default_isotopes();

/// Returns a map of symbols to atoms
typename ChemistryRuntime::at_sym_lut_type default_symbols();

///Convenience function for making a fully defaulted ChemistryRuntime instance
ChemistryRuntime default_runtime(){
    return {default_constants(), default_molecules(), default_bases(),
            default_atoms(), default_isotopes(), default_symbols()};
}

} // End namespace NWXRuntime
