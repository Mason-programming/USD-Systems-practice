#include <pxr/usd/usd/stage.h>
#include <pxr/usd/usdGeom/xform_common_api.h>
#include <pxr/usd/usdGeom/sphere.h>
#include <pxr/usd/usd/prim.h> 
#include <iostream>


int main(){

    std::string file = ""; 

    pxr::UsdStageRefPtr stage = pxr::UsdStage::Open(file); 

    if(!stage){
        std::cerr << "The stage did not successfully open" << std::endl; 
        return -1; 
    }

    for(const auto&prim : stage->Traverse())
    { 
       if(prim.IsA<UsdGeomXform>())
            std::cout << prim.GetPath() << std::endl; 
       else if(prim.IsA<UsdGeomMesh>())
            std::cout << prim.GetPath() << std::endl; 
       else if(prim.IsA<UsdGeomCamera>())
            std::cout << prim.GetPath << std::endl; 
    }


    

    return 0; 
}