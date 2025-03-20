#include <pxr/usd/usd/stage.h>
#include <pxr/usd/usdGeom/xform_common_api.h>
#include <pxr/usd/usdGeom/sphere.h>
#include <pxr/usd/usd/prim.h> 
#include <iostream>


int main(){

    pxr::UsdStageRefPtr newStage = pxr::UsdStage::CreateInMemory(); 

    pxr::UsdStageRefPtr newStage = pxr::UsdStage::CreateNew("MyFirstUsd.usd"); 

    pxr::UsdPrim prim = newStage->GetRootLayer()->GetPrimAtPath(pxr::SdfPath('/')); 

    newStage->Save(); 

    return 0; 
}