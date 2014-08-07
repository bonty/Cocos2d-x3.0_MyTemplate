//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//___COPYRIGHT___
//

#include "___FILEBASENAME___.h"

USING_NS_CC;

Scene* ___FILEBASENAMEASIDENTIFIER___::createScene()
{
    auto scene = Scene::create();
    auto layer = ___FILEBASENAMEASIDENTIFIER___::create();
    scene->addChild(layer);
    return scene;
}

bool ___FILEBASENAMEASIDENTIFIER___::init()
{
    if ( !Layer::init() ) {
        return false;
    }
    
    <#your initialize code...#>
    
    return true;
}
