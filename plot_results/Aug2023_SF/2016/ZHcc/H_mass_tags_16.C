#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tags_16()
{
//=========Macro generated from canvas: H_mass_tags_16/H_mass_tags_16
//=========  (Fri Sep  1 13:23:29 2023) by ROOT version 6.28/04
   TCanvas *H_mass_tags_16 = new TCanvas("H_mass_tags_16", "H_mass_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_tags_16->SetHighLightColor(2);
   H_mass_tags_16->Range(-80,-0.001025191,453.3333,0.009226715);
   H_mass_tags_16->SetFillColor(0);
   H_mass_tags_16->SetBorderMode(0);
   H_mass_tags_16->SetBorderSize(2);
   H_mass_tags_16->SetLeftMargin(0.15);
   H_mass_tags_16->SetFrameBorderMode(0);
   H_mass_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_mass__29 = new TH1D("VbbHcc_tags_H_mass__29","",40,0,400);
   VbbHcc_tags_H_mass__29->SetBinContent(8,0.001927266);
   VbbHcc_tags_H_mass__29->SetBinContent(11,0.003734723);
   VbbHcc_tags_H_mass__29->SetBinContent(12,0.006986137);
   VbbHcc_tags_H_mass__29->SetBinContent(13,0.001703818);
   VbbHcc_tags_H_mass__29->SetBinContent(14,0.004528657);
   VbbHcc_tags_H_mass__29->SetBinContent(15,0.002340957);
   VbbHcc_tags_H_mass__29->SetBinContent(16,0.001929603);
   VbbHcc_tags_H_mass__29->SetBinContent(17,0.007810975);
   VbbHcc_tags_H_mass__29->SetBinContent(18,0.001871144);
   VbbHcc_tags_H_mass__29->SetBinContent(23,0.002126481);
   VbbHcc_tags_H_mass__29->SetBinContent(26,0.002821577);
   VbbHcc_tags_H_mass__29->SetBinContent(27,0.002228546);
   VbbHcc_tags_H_mass__29->SetBinContent(32,0.001775999);
   VbbHcc_tags_H_mass__29->SetBinContent(33,0.006224903);
   VbbHcc_tags_H_mass__29->SetBinContent(38,0.001533761);
   VbbHcc_tags_H_mass__29->SetBinContent(41,0.02981649);
   VbbHcc_tags_H_mass__29->SetBinError(8,0.001927266);
   VbbHcc_tags_H_mass__29->SetBinError(11,0.002641295);
   VbbHcc_tags_H_mass__29->SetBinError(12,0.004033555);
   VbbHcc_tags_H_mass__29->SetBinError(13,0.001703818);
   VbbHcc_tags_H_mass__29->SetBinError(14,0.0032158);
   VbbHcc_tags_H_mass__29->SetBinError(15,0.002340957);
   VbbHcc_tags_H_mass__29->SetBinError(16,0.001929603);
   VbbHcc_tags_H_mass__29->SetBinError(17,0.004563533);
   VbbHcc_tags_H_mass__29->SetBinError(18,0.001871144);
   VbbHcc_tags_H_mass__29->SetBinError(23,0.002126481);
   VbbHcc_tags_H_mass__29->SetBinError(26,0.002821577);
   VbbHcc_tags_H_mass__29->SetBinError(27,0.002228546);
   VbbHcc_tags_H_mass__29->SetBinError(32,0.001775999);
   VbbHcc_tags_H_mass__29->SetBinError(33,0.003699799);
   VbbHcc_tags_H_mass__29->SetBinError(38,0.001533761);
   VbbHcc_tags_H_mass__29->SetBinError(41,0.008421591);
   VbbHcc_tags_H_mass__29->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_mass__29->SetFillColor(ci);
   VbbHcc_tags_H_mass__29->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_tags_H_mass__29->GetXaxis()->SetRange(1,40);
   VbbHcc_tags_H_mass__29->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__29->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_mass__29->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__29->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__29->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__29->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__29->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_mass__29->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__29->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_tags_16->Modified();
   H_mass_tags_16->cd();
   H_mass_tags_16->SetSelected(H_mass_tags_16);
}
