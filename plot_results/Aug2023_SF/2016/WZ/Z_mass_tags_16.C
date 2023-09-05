#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tags_16()
{
//=========Macro generated from canvas: Z_mass_tags_16/Z_mass_tags_16
//=========  (Tue Sep  5 10:48:25 2023) by ROOT version 6.28/04
   TCanvas *Z_mass_tags_16 = new TCanvas("Z_mass_tags_16", "Z_mass_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_tags_16->SetHighLightColor(2);
   Z_mass_tags_16->Range(-80,-0.1215107,453.3333,1.093596);
   Z_mass_tags_16->SetFillColor(0);
   Z_mass_tags_16->SetBorderMode(0);
   Z_mass_tags_16->SetBorderSize(2);
   Z_mass_tags_16->SetLeftMargin(0.15);
   Z_mass_tags_16->SetFrameBorderMode(0);
   Z_mass_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_mass__10 = new TH1D("VbbHcc_tags_Z_mass__10","",40,0,400);
   VbbHcc_tags_Z_mass__10->SetBinContent(7,0.1908378);
   VbbHcc_tags_Z_mass__10->SetBinContent(9,0.4249496);
   VbbHcc_tags_Z_mass__10->SetBinContent(10,0.9257956);
   VbbHcc_tags_Z_mass__10->SetBinContent(11,0.2029034);
   VbbHcc_tags_Z_mass__10->SetBinContent(12,0.109159);
   VbbHcc_tags_Z_mass__10->SetBinContent(13,0.1482715);
   VbbHcc_tags_Z_mass__10->SetBinContent(14,0.1903179);
   VbbHcc_tags_Z_mass__10->SetBinContent(15,0.08569184);
   VbbHcc_tags_Z_mass__10->SetBinContent(17,0.05989596);
   VbbHcc_tags_Z_mass__10->SetBinContent(18,0.3036248);
   VbbHcc_tags_Z_mass__10->SetBinContent(19,0.08483032);
   VbbHcc_tags_Z_mass__10->SetBinContent(20,0.08696594);
   VbbHcc_tags_Z_mass__10->SetBinContent(21,0.1203384);
   VbbHcc_tags_Z_mass__10->SetBinContent(26,0.1174079);
   VbbHcc_tags_Z_mass__10->SetBinContent(28,0.07887516);
   VbbHcc_tags_Z_mass__10->SetBinContent(31,0.06333091);
   VbbHcc_tags_Z_mass__10->SetBinContent(38,0.1949598);
   VbbHcc_tags_Z_mass__10->SetBinContent(41,1.207341);
   VbbHcc_tags_Z_mass__10->SetBinError(7,0.1366824);
   VbbHcc_tags_Z_mass__10->SetBinError(9,0.1929143);
   VbbHcc_tags_Z_mass__10->SetBinError(10,0.3133927);
   VbbHcc_tags_Z_mass__10->SetBinError(11,0.1473818);
   VbbHcc_tags_Z_mass__10->SetBinError(12,0.109159);
   VbbHcc_tags_Z_mass__10->SetBinError(13,0.1050811);
   VbbHcc_tags_Z_mass__10->SetBinError(14,0.1402341);
   VbbHcc_tags_Z_mass__10->SetBinError(15,0.08569184);
   VbbHcc_tags_Z_mass__10->SetBinError(17,0.05989596);
   VbbHcc_tags_Z_mass__10->SetBinError(18,0.1786696);
   VbbHcc_tags_Z_mass__10->SetBinError(19,0.08483032);
   VbbHcc_tags_Z_mass__10->SetBinError(20,0.08696594);
   VbbHcc_tags_Z_mass__10->SetBinError(21,0.1203384);
   VbbHcc_tags_Z_mass__10->SetBinError(26,0.1174079);
   VbbHcc_tags_Z_mass__10->SetBinError(28,0.07887516);
   VbbHcc_tags_Z_mass__10->SetBinError(31,0.06333091);
   VbbHcc_tags_Z_mass__10->SetBinError(38,0.138505);
   VbbHcc_tags_Z_mass__10->SetBinError(41,0.3541928);
   VbbHcc_tags_Z_mass__10->SetEntries(48);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_mass__10->SetFillColor(ci);
   VbbHcc_tags_Z_mass__10->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_tags_Z_mass__10->GetXaxis()->SetRange(1,40);
   VbbHcc_tags_Z_mass__10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_mass__10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_mass__10->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__10->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_tags_16->Modified();
   Z_mass_tags_16->cd();
   Z_mass_tags_16->SetSelected(Z_mass_tags_16);
}
