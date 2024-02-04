function [L,U] = lu_right (A)
%LU_RIGHT right-looking LU factorization.
% Example:
%   [L,U] = lu_right (A)
% See also: cs_demo

% CXSparse, Copyright (c) 2006-2022, Timothy A. Davis. All Rights Reserved.
% SPDX-License-Identifier: LGPL-2.1+

n = size (A,1) ;
L = eye (n) ;
U = zeros (n) ;
for k = 1:n
    U (k,k:n) = A (k,k:n) ;                                    % (6.4) and (6.5)
    L (k+1:n,k) = A (k+1:n,k) / U (k,k) ;                                % (6.6)
    A (k+1:n,k+1:n) = A (k+1:n,k+1:n) - L (k+1:n,k) * U (k,k+1:n) ;      % (6.7)
end
