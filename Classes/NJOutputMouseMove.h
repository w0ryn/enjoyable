//
//  NJOutputMouseMove.h
//  Enjoy
//
//  Created by Yifeng Huang on 7/26/12.
//

#import "NJOutput.h"

@interface NJOutputMouseMove : NJOutput

@property (nonatomic, assign) int axis;
@property (nonatomic, assign) float speed;
@property (nonatomic, assign) BOOL set;
@property (nonatomic, assign) BOOL inDeadZone;
@property (nonatomic, assign) double acceleration;
@end
