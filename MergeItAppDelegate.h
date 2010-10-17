//
//  MergeItAppDelegate.h
//  MergeIt
//
//  Created by Patrick Mosby on 17.10.10.
//  Copyright 2010 Schreiblogade. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface MergeItAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end
