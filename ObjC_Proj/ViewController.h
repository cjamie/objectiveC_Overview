//
//  ViewController.h
//  ObjC_Proj
//
//  Created by Admin on 1/10/18.
//  Copyright © 2018 Jamie Chu. All rights reserved.
//

#import <UIKit/UIKit.h>

//interface and implementations both closed with an @end

@interface ViewController : UIViewController

// syntax for declared properties: @property (<#attributes#>) <#type#> <#name#>;
//retain means increase the retain count by 1 and then take ownership of the object
//* means you are pointer to a car rather than
//nonatomic means that you
@property (retain, nonatomic) UILabel *myLabel;


@property (weak, nonatomic) IBOutlet UITextField  *myTextField;

@end

