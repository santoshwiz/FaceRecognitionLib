/* Copyright (C) 2016 Kristian Sloth Lauszus. All rights reserved.

 This software may be distributed and modified under the terms of the GNU
 General Public License version 2 (GPL2) as published by the Free Software
 Foundation and appearing in the file GPL2.TXT included in the packaging of
 this file. Please note that GPL2 Section 2[b] requires that all works based
 on this software must also be made publicly available under the terms of
 the GPL2 ("Copyleft").

 Contact information
 -------------------

 Kristian Sloth Lauszus
 Web      :  http://www.lauszus.com
 e-mail   :  lauszus@gmail.com
*/

#ifndef __fisherfaces_h__
#define __fisherfaces_h__

#include <Eigen/Dense> // http://eigen.tuxfamily.org

#include "Facebase.h"
#include "PCA.h"
#include "LDA.h"

using namespace Eigen;

class Fisherfaces : public Facebase, public PCA, public LDA {
public:
    void train(const MatrixXf &images, const VectorXi &classes);

    // Facebase implementations
    MatrixXf project(const MatrixXf &X);
    MatrixXf reconstructFace(const MatrixXf &W);
};

#endif