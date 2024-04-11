#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC_DHZfirst_18()
{
//=========Macro generated from canvas: Z_jetmass_JEC_DHZfirst_18/Z_jetmass_JEC_DHZfirst_18
//=========  (Thu Apr 11 14:04:09 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_JEC_DHZfirst_18 = new TCanvas("Z_jetmass_JEC_DHZfirst_18", "Z_jetmass_JEC_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_DHZfirst_18->SetHighLightColor(2);
   Z_jetmass_JEC_DHZfirst_18->Range(-60,-23766.59,340,213899.3);
   Z_jetmass_JEC_DHZfirst_18->SetFillColor(0);
   Z_jetmass_JEC_DHZfirst_18->SetFillStyle(4000);
   Z_jetmass_JEC_DHZfirst_18->SetBorderMode(0);
   Z_jetmass_JEC_DHZfirst_18->SetBorderSize(2);
   Z_jetmass_JEC_DHZfirst_18->SetLeftMargin(0.15);
   Z_jetmass_JEC_DHZfirst_18->SetFrameFillStyle(1000);
   Z_jetmass_JEC_DHZfirst_18->SetFrameBorderMode(0);
   Z_jetmass_JEC_DHZfirst_18->SetFrameFillStyle(1000);
   Z_jetmass_JEC_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_jetmass_JEC__72 = new TH1D("VH_DHZfirst_Z_jetmass_JEC__72","",150,0,300);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(6,8110.292);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(7,19236.66);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(8,181078.8);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(9,1436.619);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(10,27573.07);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(11,535.1176);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(12,4615.158);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(13,3349.753);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(14,3101.389);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(15,2272.555);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(16,14514.81);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(17,2642.337);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(18,1185.37);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(19,5998.297);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(20,196.4003);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(24,1248.267);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(26,2789.034);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(29,2095.387);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(37,1004.135);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(38,553.9288);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(41,300.7386);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(6,7531.338);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(7,19236.66);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(8,179208.2);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(9,1436.619);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(10,16076.99);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(11,535.1176);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(12,2194.991);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(13,2047.753);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(14,1901.02);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(15,1209.242);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(16,14514.81);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(17,1551.418);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(18,844.0414);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(19,5380.723);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(20,196.4003);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(24,888.1397);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(26,1779.271);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(29,1623.007);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(37,1004.135);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(38,553.9288);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(41,300.7386);
   VH_DHZfirst_Z_jetmass_JEC__72->SetEntries(46);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_jetmass_JEC__72->SetLineColor(ci);
   VH_DHZfirst_Z_jetmass_JEC__72->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VH_DHZfirst_Z_jetmass_JEC__72->GetXaxis()->SetRange(1,150);
   VH_DHZfirst_Z_jetmass_JEC__72->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_JEC__72->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_JEC__72->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_JEC__72->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_DHZfirst_Z_jetmass_JEC__72->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_JEC__72->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_jetmass_JEC__72->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_jetmass_JEC__72->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_jetmass_JEC__72->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_JEC__72->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_JEC__72->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_JEC__72->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_JEC__72->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_DHZfirst_18->Modified();
   Z_jetmass_JEC_DHZfirst_18->cd();
   Z_jetmass_JEC_DHZfirst_18->SetSelected(Z_jetmass_JEC_DHZfirst_18);
}
