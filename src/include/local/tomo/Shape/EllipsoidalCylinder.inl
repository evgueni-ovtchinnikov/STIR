//
// $Id$
//
/*!
  \file
  \ingroup Shape

  \brief Inline-implementations of class EllipsoidalCylinder

  \author Sanida Mustafovic
  \author Kris Thielemans
  $Date$
  $Revision$
*/
START_NAMESPACE_TOMO

float EllipsoidalCylinder:: get_geometric_volume()const
 {
   return (radius_a*radius_b*_PI*length);
 }

Shape3D* EllipsoidalCylinder:: clone() const
{
  return static_cast<Shape3D *>(new EllipsoidalCylinder(*this));
}
void 
EllipsoidalCylinder::scale(const CartesianCoordinate3D<float>& scale3D)
{
  origin *= scale3D;
  length *= scale3D.z();
  radius_b *= scale3D.y();
  radius_a *= scale3D.x();
}

END_NAMESPACE_TOMO
