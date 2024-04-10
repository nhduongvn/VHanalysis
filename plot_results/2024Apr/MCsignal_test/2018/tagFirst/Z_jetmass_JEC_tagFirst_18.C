#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC_tagFirst_18()
{
//=========Macro generated from canvas: Z_jetmass_JEC_tagFirst_18/Z_jetmass_JEC_tagFirst_18
//=========  (Tue Apr  9 15:53:52 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_JEC_tagFirst_18 = new TCanvas("Z_jetmass_JEC_tagFirst_18", "Z_jetmass_JEC_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_tagFirst_18->SetHighLightColor(2);
   Z_jetmass_JEC_tagFirst_18->Range(-60,-0.13125,340,1.18125);
   Z_jetmass_JEC_tagFirst_18->SetFillColor(0);
   Z_jetmass_JEC_tagFirst_18->SetFillStyle(4000);
   Z_jetmass_JEC_tagFirst_18->SetBorderMode(0);
   Z_jetmass_JEC_tagFirst_18->SetBorderSize(2);
   Z_jetmass_JEC_tagFirst_18->SetLeftMargin(0.15);
   Z_jetmass_JEC_tagFirst_18->SetFrameFillStyle(1000);
   Z_jetmass_JEC_tagFirst_18->SetFrameBorderMode(0);
   Z_jetmass_JEC_tagFirst_18->SetFrameFillStyle(1000);
   Z_jetmass_JEC_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Z_jetmass_JEC__24 = new TH1D("VH_tagFirst_Z_jetmass_JEC__24","",150,0,300);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_jetmass_JEC__24->SetLineColor(ci);
   VH_tagFirst_Z_jetmass_JEC__24->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VH_tagFirst_Z_jetmass_JEC__24->GetXaxis()->SetRange(1,150);
   VH_tagFirst_Z_jetmass_JEC__24->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_jetmass_JEC__24->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_jetmass_JEC__24->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_jetmass_JEC__24->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_tagFirst_Z_jetmass_JEC__24->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_jetmass_JEC__24->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Z_jetmass_JEC__24->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Z_jetmass_JEC__24->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Z_jetmass_JEC__24->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_jetmass_JEC__24->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_jetmass_JEC__24->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_jetmass_JEC__24->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_jetmass_JEC__24->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_tagFirst_18->Modified();
   Z_jetmass_JEC_tagFirst_18->cd();
   Z_jetmass_JEC_tagFirst_18->SetSelected(Z_jetmass_JEC_tagFirst_18);
}
