#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_both_16()
{
//=========Macro generated from canvas: H_mass_both_16/H_mass_both_16
//=========  (Fri Sep  1 13:23:41 2023) by ROOT version 6.28/04
   TCanvas *H_mass_both_16 = new TCanvas("H_mass_both_16", "H_mass_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_both_16->SetHighLightColor(2);
   H_mass_both_16->Range(-80,-0.001400289,453.3333,0.0126026);
   H_mass_both_16->SetFillColor(0);
   H_mass_both_16->SetBorderMode(0);
   H_mass_both_16->SetBorderSize(2);
   H_mass_both_16->SetLeftMargin(0.15);
   H_mass_both_16->SetFrameBorderMode(0);
   H_mass_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_mass__749 = new TH1D("VbbHcc_both_H_mass__749","",40,0,400);
   VbbHcc_both_H_mass__749->SetBinContent(8,0.001516135);
   VbbHcc_both_H_mass__749->SetBinContent(10,0.004171161);
   VbbHcc_both_H_mass__749->SetBinContent(11,0.003967117);
   VbbHcc_both_H_mass__749->SetBinContent(12,0.009638705);
   VbbHcc_both_H_mass__749->SetBinContent(13,0.01066886);
   VbbHcc_both_H_mass__749->SetBinContent(14,0.009898179);
   VbbHcc_both_H_mass__749->SetBinContent(15,0.004176713);
   VbbHcc_both_H_mass__749->SetBinContent(18,0.002570627);
   VbbHcc_both_H_mass__749->SetBinContent(19,0.001425773);
   VbbHcc_both_H_mass__749->SetBinContent(20,0.006494495);
   VbbHcc_both_H_mass__749->SetBinContent(21,0.00269847);
   VbbHcc_both_H_mass__749->SetBinContent(24,0.002821577);
   VbbHcc_both_H_mass__749->SetBinContent(25,0.005425448);
   VbbHcc_both_H_mass__749->SetBinContent(29,0.002370096);
   VbbHcc_both_H_mass__749->SetBinContent(30,0.001912616);
   VbbHcc_both_H_mass__749->SetBinContent(38,0.002996246);
   VbbHcc_both_H_mass__749->SetBinContent(41,0.006608813);
   VbbHcc_both_H_mass__749->SetBinError(8,0.001516135);
   VbbHcc_both_H_mass__749->SetBinError(10,0.002971006);
   VbbHcc_both_H_mass__749->SetBinError(11,0.002806681);
   VbbHcc_both_H_mass__749->SetBinError(12,0.004886008);
   VbbHcc_both_H_mass__749->SetBinError(13,0.004789515);
   VbbHcc_both_H_mass__749->SetBinError(14,0.00443659);
   VbbHcc_both_H_mass__749->SetBinError(15,0.003003033);
   VbbHcc_both_H_mass__749->SetBinError(18,0.002570627);
   VbbHcc_both_H_mass__749->SetBinError(19,0.001425773);
   VbbHcc_both_H_mass__749->SetBinError(20,0.003837227);
   VbbHcc_both_H_mass__749->SetBinError(21,0.00269847);
   VbbHcc_both_H_mass__749->SetBinError(24,0.002821577);
   VbbHcc_both_H_mass__749->SetBinError(25,0.003896999);
   VbbHcc_both_H_mass__749->SetBinError(29,0.002370096);
   VbbHcc_both_H_mass__749->SetBinError(30,0.001912616);
   VbbHcc_both_H_mass__749->SetBinError(38,0.002996246);
   VbbHcc_both_H_mass__749->SetBinError(41,0.003839036);
   VbbHcc_both_H_mass__749->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_mass__749->SetFillColor(ci);
   VbbHcc_both_H_mass__749->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_both_H_mass__749->GetXaxis()->SetRange(1,40);
   VbbHcc_both_H_mass__749->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass__749->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_mass__749->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass__749->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass__749->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass__749->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass__749->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_mass__749->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass__749->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_both_16->Modified();
   H_mass_both_16->cd();
   H_mass_both_16->SetSelected(H_mass_both_16);
}
