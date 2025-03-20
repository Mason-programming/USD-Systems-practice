#include <pxr/usd/usd/stage.h>
#include <pxr/usd/usdGeom/xform_common_api.h>
#include <pxr/usd/usdGeom/sphere.h>
#include <pxr/usd/usd/prim.h> 
#include <iostream>


int main(){

    std::string file = ""; 

    pxr::UsdStageRefPtr stge = pxr::UsdStage::Open(file); 

    if(!stage){
        std::cerr << "The stage did not successfully open" << std::endl; 
        return -1; 
    }

    for(const auto&prim : stage->Traverse())
    { 
       std::cout << prim.GetPrim() << std::endl; 
    }

    return 0; 
}