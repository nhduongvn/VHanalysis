#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC_tags_18()
{
//=========Macro generated from canvas: Z_jetmass_JEC_tags_18/Z_jetmass_JEC_tags_18
//=========  (Fri Sep  1 13:34:46 2023) by ROOT version 6.28/04
   TCanvas *Z_jetmass_JEC_tags_18 = new TCanvas("Z_jetmass_JEC_tags_18", "Z_jetmass_JEC_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_tags_18->SetHighLightColor(2);
   Z_jetmass_JEC_tags_18->Range(-60,-0.2726925,340,2.454233);
   Z_jetmass_JEC_tags_18->SetFillColor(0);
   Z_jetmass_JEC_tags_18->SetBorderMode(0);
   Z_jetmass_JEC_tags_18->SetBorderSize(2);
   Z_jetmass_JEC_tags_18->SetLeftMargin(0.15);
   Z_jetmass_JEC_tags_18->SetFrameBorderMode(0);
   Z_jetmass_JEC_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_JEC__354 = new TH1D("VbbHcc_tags_Z_jetmass_JEC__354","",150,0,300);
   VbbHcc_tags_Z_jetmass_JEC__354->SetBinContent(4,2.077657);
   VbbHcc_tags_Z_jetmass_JEC__354->SetBinContent(5,0.6909771);
   VbbHcc_tags_Z_jetmass_JEC__354->SetBinContent(12,0.524235);
   VbbHcc_tags_Z_jetmass_JEC__354->SetBinContent(14,0.3810571);
   VbbHcc_tags_Z_jetmass_JEC__354->SetBinError(4,2.077657);
   VbbHcc_tags_Z_jetmass_JEC__354->SetBinError(5,0.6909771);
   VbbHcc_tags_Z_jetmass_JEC__354->SetBinError(12,0.524235);
   VbbHcc_tags_Z_jetmass_JEC__354->SetBinError(14,0.3810571);
   VbbHcc_tags_Z_jetmass_JEC__354->SetEntries(4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_jetmass_JEC__354->SetFillColor(ci);
   VbbHcc_tags_Z_jetmass_JEC__354->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_Z_jetmass_JEC__354->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetmass_JEC__354->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC__354->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetmass_JEC__354->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC__354->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC__354->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC__354->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC__354->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetmass_JEC__354->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC__354->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_tags_18->Modified();
   Z_jetmass_JEC_tags_18->cd();
   Z_jetmass_JEC_tags_18->SetSelected(Z_jetmass_JEC_tags_18);
}
