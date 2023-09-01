#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tags_16()
{
//=========Macro generated from canvas: Z_mass_tags_16/Z_mass_tags_16
//=========  (Fri Sep  1 13:23:29 2023) by ROOT version 6.28/04
   TCanvas *Z_mass_tags_16 = new TCanvas("Z_mass_tags_16", "Z_mass_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_tags_16->SetHighLightColor(2);
   Z_mass_tags_16->Range(-80,-0.001694446,453.3333,0.01525001);
   Z_mass_tags_16->SetFillColor(0);
   Z_mass_tags_16->SetBorderMode(0);
   Z_mass_tags_16->SetBorderSize(2);
   Z_mass_tags_16->SetLeftMargin(0.15);
   Z_mass_tags_16->SetFrameBorderMode(0);
   Z_mass_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_mass__14 = new TH1D("VbbHcc_tags_Z_mass__14","",40,0,400);
   VbbHcc_tags_Z_mass__14->SetBinContent(6,0.004973315);
   VbbHcc_tags_Z_mass__14->SetBinContent(9,0.01184932);
   VbbHcc_tags_Z_mass__14->SetBinContent(10,0.01291006);
   VbbHcc_tags_Z_mass__14->SetBinContent(11,0.00231513);
   VbbHcc_tags_Z_mass__14->SetBinContent(12,0.002055762);
   VbbHcc_tags_Z_mass__14->SetBinContent(13,0.007058635);
   VbbHcc_tags_Z_mass__14->SetBinContent(15,0.001703818);
   VbbHcc_tags_Z_mass__14->SetBinContent(16,0.002821577);
   VbbHcc_tags_Z_mass__14->SetBinContent(18,0.001775999);
   VbbHcc_tags_Z_mass__14->SetBinContent(19,0.001871144);
   VbbHcc_tags_Z_mass__14->SetBinContent(21,0.002338156);
   VbbHcc_tags_Z_mass__14->SetBinContent(27,0.002126481);
   VbbHcc_tags_Z_mass__14->SetBinContent(29,0.001533761);
   VbbHcc_tags_Z_mass__14->SetBinContent(41,0.02402788);
   VbbHcc_tags_Z_mass__14->SetBinError(6,0.003603825);
   VbbHcc_tags_Z_mass__14->SetBinError(9,0.005391468);
   VbbHcc_tags_Z_mass__14->SetBinError(10,0.005378544);
   VbbHcc_tags_Z_mass__14->SetBinError(11,0.00231513);
   VbbHcc_tags_Z_mass__14->SetBinError(12,0.002055762);
   VbbHcc_tags_Z_mass__14->SetBinError(13,0.004153383);
   VbbHcc_tags_Z_mass__14->SetBinError(15,0.001703818);
   VbbHcc_tags_Z_mass__14->SetBinError(16,0.002821577);
   VbbHcc_tags_Z_mass__14->SetBinError(18,0.001775999);
   VbbHcc_tags_Z_mass__14->SetBinError(19,0.001871144);
   VbbHcc_tags_Z_mass__14->SetBinError(21,0.002338156);
   VbbHcc_tags_Z_mass__14->SetBinError(27,0.002126481);
   VbbHcc_tags_Z_mass__14->SetBinError(29,0.001533761);
   VbbHcc_tags_Z_mass__14->SetBinError(41,0.007322662);
   VbbHcc_tags_Z_mass__14->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_mass__14->SetFillColor(ci);
   VbbHcc_tags_Z_mass__14->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_tags_Z_mass__14->GetXaxis()->SetRange(1,40);
   VbbHcc_tags_Z_mass__14->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__14->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_mass__14->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__14->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__14->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__14->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass__14->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_mass__14->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass__14->Draw("HIST");
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
