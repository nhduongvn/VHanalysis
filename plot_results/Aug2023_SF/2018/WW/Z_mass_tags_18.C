#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tags_18()
{
//=========Macro generated from canvas: Z_mass_tags_18/Z_mass_tags_18
//=========  (Tue Sep  5 10:48:05 2023) by ROOT version 6.28/04
   TCanvas *Z_mass_tags_18 = new TCanvas("Z_mass_tags_18", "Z_mass_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_tags_18->SetHighLightColor(2);
   Z_mass_tags_18->Range(-80,-0.2726925,453.3333,2.454233);
   Z_mass_tags_18->SetFillColor(0);
   Z_mass_tags_18->SetBorderMode(0);
   Z_mass_tags_18->SetBorderSize(2);
   Z_mass_tags_18->SetLeftMargin(0.15);
   Z_mass_tags_18->SetFrameBorderMode(0);
   Z_mass_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_mass__9 = new TH1D("VbbHcc_tags_Z_mass__9","",40,0,400);
   VbbHcc_tags_Z_mass__9->SetBinContent(7,0.524235);
   VbbHcc_tags_Z_mass__9->SetBinContent(14,0.6909771);
   VbbHcc_tags_Z_mass__9->SetBinContent(24,2.077657);
   VbbHcc_tags_Z_mass__9->SetBinContent(41,0.3810571);
   VbbHcc_tags_Z_mass__9->SetBinError(7,0.524235);
   VbbHcc_tags_Z_mass__9->SetBinError(14,0.6909771);
   VbbHcc_tags_Z_mass__9->SetBinError(24,2.077657);
   VbbHcc_tags_Z_mass__9->SetBinError(41,0.3810571);
   VbbHcc_tags_Z_mass__9->SetEntries(4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_mass__9->SetFillColor(ci);
   VbbHcc_tags_Z_mass__9->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_tags_Z_mass__9->GetXaxis()->SetRange(1,40);
   VbbHcc_tags_Z_mass__9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_mass__9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_mass__9->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__9->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_tags_18->Modified();
   Z_mass_tags_18->cd();
   Z_mass_tags_18->SetSelected(Z_mass_tags_18);
}
