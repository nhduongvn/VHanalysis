#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC_tagOnly_18()
{
//=========Macro generated from canvas: Z_jetmass_JEC_tagOnly_18/Z_jetmass_JEC_tagOnly_18
//=========  (Tue Apr  9 15:53:52 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_JEC_tagOnly_18 = new TCanvas("Z_jetmass_JEC_tagOnly_18", "Z_jetmass_JEC_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_tagOnly_18->SetHighLightColor(2);
   Z_jetmass_JEC_tagOnly_18->Range(-60,-0.13125,340,1.18125);
   Z_jetmass_JEC_tagOnly_18->SetFillColor(0);
   Z_jetmass_JEC_tagOnly_18->SetFillStyle(4000);
   Z_jetmass_JEC_tagOnly_18->SetBorderMode(0);
   Z_jetmass_JEC_tagOnly_18->SetBorderSize(2);
   Z_jetmass_JEC_tagOnly_18->SetLeftMargin(0.15);
   Z_jetmass_JEC_tagOnly_18->SetFrameFillStyle(1000);
   Z_jetmass_JEC_tagOnly_18->SetFrameBorderMode(0);
   Z_jetmass_JEC_tagOnly_18->SetFrameFillStyle(1000);
   Z_jetmass_JEC_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Z_jetmass_JEC__48 = new TH1D("VH_tagOnly_Z_jetmass_JEC__48","",150,0,300);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Z_jetmass_JEC__48->SetLineColor(ci);
   VH_tagOnly_Z_jetmass_JEC__48->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VH_tagOnly_Z_jetmass_JEC__48->GetXaxis()->SetRange(1,150);
   VH_tagOnly_Z_jetmass_JEC__48->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Z_jetmass_JEC__48->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_jetmass_JEC__48->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Z_jetmass_JEC__48->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_tagOnly_Z_jetmass_JEC__48->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Z_jetmass_JEC__48->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Z_jetmass_JEC__48->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Z_jetmass_JEC__48->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Z_jetmass_JEC__48->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Z_jetmass_JEC__48->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Z_jetmass_JEC__48->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_jetmass_JEC__48->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Z_jetmass_JEC__48->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_tagOnly_18->Modified();
   Z_jetmass_JEC_tagOnly_18->cd();
   Z_jetmass_JEC_tagOnly_18->SetSelected(Z_jetmass_JEC_tagOnly_18);
}
