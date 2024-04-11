#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_noJEC_tagFirst_2combo_18()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_tagFirst_2combo_18/Z_jetmass_noJEC_tagFirst_2combo_18
//=========  (Thu Apr 11 14:04:10 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_noJEC_tagFirst_2combo_18 = new TCanvas("Z_jetmass_noJEC_tagFirst_2combo_18", "Z_jetmass_noJEC_tagFirst_2combo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_tagFirst_2combo_18->SetHighLightColor(2);
   Z_jetmass_noJEC_tagFirst_2combo_18->Range(-60,-108.4768,340,976.2907);
   Z_jetmass_noJEC_tagFirst_2combo_18->SetFillColor(0);
   Z_jetmass_noJEC_tagFirst_2combo_18->SetFillStyle(4000);
   Z_jetmass_noJEC_tagFirst_2combo_18->SetBorderMode(0);
   Z_jetmass_noJEC_tagFirst_2combo_18->SetBorderSize(2);
   Z_jetmass_noJEC_tagFirst_2combo_18->SetLeftMargin(0.15);
   Z_jetmass_noJEC_tagFirst_2combo_18->SetFrameFillStyle(1000);
   Z_jetmass_noJEC_tagFirst_2combo_18->SetFrameBorderMode(0);
   Z_jetmass_noJEC_tagFirst_2combo_18->SetFrameFillStyle(1000);
   Z_jetmass_noJEC_tagFirst_2combo_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2combo_Z_jetmass_noJEC__119 = new TH1D("VH_tagFirst_2combo_Z_jetmass_noJEC__119","",150,0,300);
   VH_tagFirst_2combo_Z_jetmass_noJEC__119->SetBinContent(11,826.4895);
   VH_tagFirst_2combo_Z_jetmass_noJEC__119->SetBinContent(14,428.6841);
   VH_tagFirst_2combo_Z_jetmass_noJEC__119->SetBinContent(15,690.8691);
   VH_tagFirst_2combo_Z_jetmass_noJEC__119->SetBinContent(28,249.8734);
   VH_tagFirst_2combo_Z_jetmass_noJEC__119->SetBinError(11,826.4895);
   VH_tagFirst_2combo_Z_jetmass_noJEC__119->SetBinError(14,428.6841);
   VH_tagFirst_2combo_Z_jetmass_noJEC__119->SetBinError(15,690.8691);
   VH_tagFirst_2combo_Z_jetmass_noJEC__119->SetBinError(28,249.8734);
   VH_tagFirst_2combo_Z_jetmass_noJEC__119->SetEntries(4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2combo_Z_jetmass_noJEC__119->SetLineColor(ci);
   VH_tagFirst_2combo_Z_jetmass_noJEC__119->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VH_tagFirst_2combo_Z_jetmass_noJEC__119->GetXaxis()->SetRange(1,150);
   VH_tagFirst_2combo_Z_jetmass_noJEC__119->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_Z_jetmass_noJEC__119->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_Z_jetmass_noJEC__119->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_Z_jetmass_noJEC__119->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_tagFirst_2combo_Z_jetmass_noJEC__119->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_Z_jetmass_noJEC__119->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2combo_Z_jetmass_noJEC__119->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2combo_Z_jetmass_noJEC__119->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2combo_Z_jetmass_noJEC__119->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_Z_jetmass_noJEC__119->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_Z_jetmass_noJEC__119->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_Z_jetmass_noJEC__119->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_Z_jetmass_noJEC__119->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_tagFirst_2combo_18->Modified();
   Z_jetmass_noJEC_tagFirst_2combo_18->cd();
   Z_jetmass_noJEC_tagFirst_2combo_18->SetSelected(Z_jetmass_noJEC_tagFirst_2combo_18);
}
