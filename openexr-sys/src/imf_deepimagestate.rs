#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
use std::os::raw::*;


#[repr(transparent)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub struct Imf_3_0__DeepImageState_e(pub u32);
pub const Imf_DeepImageState_DIS_MESSY: Imf_3_0__DeepImageState_e = Imf_3_0__DeepImageState_e(0);
pub const Imf_DeepImageState_DIS_SORTED: Imf_3_0__DeepImageState_e = Imf_3_0__DeepImageState_e(1);
pub const Imf_DeepImageState_DIS_NON_OVERLAPPING: Imf_3_0__DeepImageState_e = Imf_3_0__DeepImageState_e(2);
pub const Imf_DeepImageState_DIS_TIDY: Imf_3_0__DeepImageState_e = Imf_3_0__DeepImageState_e(3);
pub const Imf_DeepImageState_DIS_NUMSTATES: Imf_3_0__DeepImageState_e = Imf_3_0__DeepImageState_e(4);

#[repr(u32)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub enum DeepImageState {
    Messy = 0,
    Sorted = 1,
    NonOverlapping = 2,
    Tidy = 3,
    Numstates = 4,
}

impl From<Imf_3_0__DeepImageState_e> for DeepImageState {
    fn from(e: Imf_3_0__DeepImageState_e) -> DeepImageState {
        match e {
            Imf_DeepImageState_DIS_MESSY => DeepImageState::Messy,
            Imf_DeepImageState_DIS_SORTED => DeepImageState::Sorted,
            Imf_DeepImageState_DIS_NON_OVERLAPPING => DeepImageState::NonOverlapping,
            Imf_DeepImageState_DIS_TIDY => DeepImageState::Tidy,
            Imf_DeepImageState_DIS_NUMSTATES => DeepImageState::Numstates,
            _ => panic!("Invalid value {:?} for DeepImageState in conversion", e),
        }
    }
}

impl From<DeepImageState> for Imf_3_0__DeepImageState_e {
    fn from(e: DeepImageState) -> Imf_3_0__DeepImageState_e {
        match e {
            DeepImageState::Messy => Imf_DeepImageState_DIS_MESSY,
            DeepImageState::Sorted => Imf_DeepImageState_DIS_SORTED,
            DeepImageState::NonOverlapping => Imf_DeepImageState_DIS_NON_OVERLAPPING,
            DeepImageState::Tidy => Imf_DeepImageState_DIS_TIDY,
            DeepImageState::Numstates => Imf_DeepImageState_DIS_NUMSTATES,
        }
    }
}


extern "C" {


} // extern "C"
