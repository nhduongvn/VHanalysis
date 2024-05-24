#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_SingleTop_tagOnly_16_logY()
{
//=========Macro generated from canvas: Z_dR_SingleTop_tagOnly_16/Z_dR_SingleTop_tagOnly_16
//=========  (Thu May 23 20:48:38 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_SingleTop_tagOnly_16 = new TCanvas("Z_dR_SingleTop_tagOnly_16", "Z_dR_SingleTop_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_SingleTop_tagOnly_16->SetHighLightColor(2);
   Z_dR_SingleTop_tagOnly_16->Range(-1.2,-1.390484,6.8,3.996097);
   Z_dR_SingleTop_tagOnly_16->SetFillColor(0);
   Z_dR_SingleTop_tagOnly_16->SetFillStyle(4000);
   Z_dR_SingleTop_tagOnly_16->SetBorderMode(0);
   Z_dR_SingleTop_tagOnly_16->SetBorderSize(2);
   Z_dR_SingleTop_tagOnly_16->SetLogy();
   Z_dR_SingleTop_tagOnly_16->SetLeftMargin(0.15);
   Z_dR_SingleTop_tagOnly_16->SetFrameFillStyle(1000);
   Z_dR_SingleTop_tagOnly_16->SetFrameBorderMode(0);
   Z_dR_SingleTop_tagOnly_16->SetFrameFillStyle(1000);
   Z_dR_SingleTop_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Z_dR__859 = new TH1D("VH_tagOnly_Z_dR__859","",30,0,6);
   VH_tagOnly_Z_dR__859->SetBinContent(2,0.2813223);
   VH_tagOnly_Z_dR__859->SetBinContent(3,349.9285);
   VH_tagOnly_Z_dR__859->SetBinContent(4,639.1888);
   VH_tagOnly_Z_dR__859->SetBinContent(5,752.2284);
   VH_tagOnly_Z_dR__859->SetBinContent(6,851.085);
   VH_tagOnly_Z_dR__859->SetBinContent(7,941.9391);
   VH_tagOnly_Z_dR__859->SetBinContent(8,1015.714);
   VH_tagOnly_Z_dR__859->SetBinContent(9,1094.901);
   VH_tagOnly_Z_dR__859->SetBinContent(10,1160.949);
   VH_tagOnly_Z_dR__859->SetBinContent(11,1256.034);
   VH_tagOnly_Z_dR__859->SetBinContent(12,1332.665);
   VH_tagOnly_Z_dR__859->SetBinContent(13,1421.28);
   VH_tagOnly_Z_dR__859->SetBinContent(14,1472.151);
   VH_tagOnly_Z_dR__859->SetBinContent(15,1513.179);
   VH_tagOnly_Z_dR__859->SetBinContent(16,1505.318);
   VH_tagOnly_Z_dR__859->SetBinContent(17,1416.185);
   VH_tagOnly_Z_dR__859->SetBinContent(18,1262.33);
   VH_tagOnly_Z_dR__859->SetBinContent(19,1156.31);
   VH_tagOnly_Z_dR__859->SetBinContent(20,995.0391);
   VH_tagOnly_Z_dR__859->SetBinContent(21,845.7097);
   VH_tagOnly_Z_dR__859->SetBinContent(22,713.4913);
   VH_tagOnly_Z_dR__859->SetBinContent(23,572.1611);
   VH_tagOnly_Z_dR__859->SetBinContent(24,465.5365);
   VH_tagOnly_Z_dR__859->SetBinContent(25,368.8175);
   VH_tagOnly_Z_dR__859->SetBinContent(26,300.4554);
   VH_tagOnly_Z_dR__859->SetBinContent(27,239.7532);
   VH_tagOnly_Z_dR__859->SetBinContent(28,182.9757);
   VH_tagOnly_Z_dR__859->SetBinContent(29,142.6896);
   VH_tagOnly_Z_dR__859->SetBinContent(30,90.93037);
   VH_tagOnly_Z_dR__859->SetBinContent(31,79.13025);
   VH_tagOnly_Z_dR__859->SetBinError(2,0.1790221);
   VH_tagOnly_Z_dR__859->SetBinError(3,7.075744);
   VH_tagOnly_Z_dR__859->SetBinError(4,9.45124);
   VH_tagOnly_Z_dR__859->SetBinError(5,10.30424);
   VH_tagOnly_Z_dR__859->SetBinError(6,10.87964);
   VH_tagOnly_Z_dR__859->SetBinError(7,11.41905);
   VH_tagOnly_Z_dR__859->SetBinError(8,11.80723);
   VH_tagOnly_Z_dR__859->SetBinError(9,12.28835);
   VH_tagOnly_Z_dR__859->SetBinError(10,12.58448);
   VH_tagOnly_Z_dR__859->SetBinError(11,13.08963);
   VH_tagOnly_Z_dR__859->SetBinError(12,13.42314);
   VH_tagOnly_Z_dR__859->SetBinError(13,13.88824);
   VH_tagOnly_Z_dR__859->SetBinError(14,14.13559);
   VH_tagOnly_Z_dR__859->SetBinError(15,14.27374);
   VH_tagOnly_Z_dR__859->SetBinError(16,14.29744);
   VH_tagOnly_Z_dR__859->SetBinError(17,13.84962);
   VH_tagOnly_Z_dR__859->SetBinError(18,12.88232);
   VH_tagOnly_Z_dR__859->SetBinError(19,12.55418);
   VH_tagOnly_Z_dR__859->SetBinError(20,11.56879);
   VH_tagOnly_Z_dR__859->SetBinError(21,10.68532);
   VH_tagOnly_Z_dR__859->SetBinError(22,9.856156);
   VH_tagOnly_Z_dR__859->SetBinError(23,8.862028);
   VH_tagOnly_Z_dR__859->SetBinError(24,8.073717);
   VH_tagOnly_Z_dR__859->SetBinError(25,7.2052);
   VH_tagOnly_Z_dR__859->SetBinError(26,6.520952);
   VH_tagOnly_Z_dR__859->SetBinError(27,5.916597);
   VH_tagOnly_Z_dR__859->SetBinError(28,5.12737);
   VH_tagOnly_Z_dR__859->SetBinError(29,4.564271);
   VH_tagOnly_Z_dR__859->SetBinError(30,3.727808);
   VH_tagOnly_Z_dR__859->SetBinError(31,3.378849);
   VH_tagOnly_Z_dR__859->SetEntries(390931);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Z_dR__859->SetLineColor(ci);
   VH_tagOnly_Z_dR__859->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VH_tagOnly_Z_dR__859->GetXaxis()->SetRange(1,30);
   VH_tagOnly_Z_dR__859->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Z_dR__859->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_dR__859->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Z_dR__859->GetYaxis()->SetTitle("Events/0.2");
   VH_tagOnly_Z_dR__859->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Z_dR__859->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Z_dR__859->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Z_dR__859->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Z_dR__859->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Z_dR__859->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Z_dR__859->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_dR__859->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Z_dR__859->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_SingleTop_tagOnly_16->Modified();
   Z_dR_SingleTop_tagOnly_16->cd();
   Z_dR_SingleTop_tagOnly_16->SetSelected(Z_dR_SingleTop_tagOnly_16);
}
