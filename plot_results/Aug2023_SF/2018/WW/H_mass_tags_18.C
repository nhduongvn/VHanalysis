#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tags_18()
{
//=========Macro generated from canvas: H_mass_tags_18/H_mass_tags_18
//=========  (Fri Sep  1 13:34:41 2023) by ROOT version 6.28/04
   TCanvas *H_mass_tags_18 = new TCanvas("H_mass_tags_18", "H_mass_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_tags_18->SetHighLightColor(2);
   H_mass_tags_18->Range(-80,-0.2726925,453.3333,2.454233);
   H_mass_tags_18->SetFillColor(0);
   H_mass_tags_18->SetBorderMode(0);
   H_mass_tags_18->SetBorderSize(2);
   H_mass_tags_18->SetLeftMargin(0.15);
   H_mass_tags_18->SetFrameBorderMode(0);
   H_mass_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_mass__24 = new TH1D("VbbHcc_tags_H_mass__24","",40,0,400);
   VbbHcc_tags_H_mass__24->SetBinContent(7,0.524235);
   VbbHcc_tags_H_mass__24->SetBinContent(8,2.077657);
   VbbHcc_tags_H_mass__24->SetBinContent(31,0.3810571);
   VbbHcc_tags_H_mass__24->SetBinContent(41,0.6909771);
   VbbHcc_tags_H_mass__24->SetBinError(7,0.524235);
   VbbHcc_tags_H_mass__24->SetBinError(8,2.077657);
   VbbHcc_tags_H_mass__24->SetBinError(31,0.3810571);
   VbbHcc_tags_H_mass__24->SetBinError(41,0.6909771);
   VbbHcc_tags_H_mass__24->SetEntries(4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_mass__24->SetFillColor(ci);
   VbbHcc_tags_H_mass__24->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_tags_H_mass__24->GetXaxis()->SetRange(1,40);
   VbbHcc_tags_H_mass__24->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__24->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_mass__24->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__24->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__24->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__24->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__24->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_mass__24->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__24->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_tags_18->Modified();
   H_mass_tags_18->cd();
   H_mass_tags_18->SetSelected(H_mass_tags_18);
}
