#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tags_18()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Fri Sep  1 13:34:45 2023) by ROOT version 6.28/04
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(-0.2,-12677.06,1.133333,114093.6);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLeftMargin(0.15);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity__214 = new TH1D("VbbHcc_tags_Sphericity__214","",25,0,1);
   VbbHcc_tags_Sphericity__214->SetBinContent(1,96587.14);
   VbbHcc_tags_Sphericity__214->SetBinContent(2,85049.43);
   VbbHcc_tags_Sphericity__214->SetBinContent(3,43086.68);
   VbbHcc_tags_Sphericity__214->SetBinContent(4,29725.24);
   VbbHcc_tags_Sphericity__214->SetBinContent(5,17084.11);
   VbbHcc_tags_Sphericity__214->SetBinContent(6,9266.127);
   VbbHcc_tags_Sphericity__214->SetBinContent(7,5189.59);
   VbbHcc_tags_Sphericity__214->SetBinContent(8,2173.424);
   VbbHcc_tags_Sphericity__214->SetBinContent(9,1089.433);
   VbbHcc_tags_Sphericity__214->SetBinContent(10,967.7706);
   VbbHcc_tags_Sphericity__214->SetBinContent(11,1145.223);
   VbbHcc_tags_Sphericity__214->SetBinContent(12,430.8158);
   VbbHcc_tags_Sphericity__214->SetBinContent(13,365.4917);
   VbbHcc_tags_Sphericity__214->SetBinContent(14,49.59523);
   VbbHcc_tags_Sphericity__214->SetBinContent(15,224.5625);
   VbbHcc_tags_Sphericity__214->SetBinContent(16,284.61);
   VbbHcc_tags_Sphericity__214->SetBinContent(17,134.7628);
   VbbHcc_tags_Sphericity__214->SetBinContent(18,28.63989);
   VbbHcc_tags_Sphericity__214->SetBinContent(19,68.44996);
   VbbHcc_tags_Sphericity__214->SetBinError(1,11164.69);
   VbbHcc_tags_Sphericity__214->SetBinError(2,8344.067);
   VbbHcc_tags_Sphericity__214->SetBinError(3,3545.448);
   VbbHcc_tags_Sphericity__214->SetBinError(4,4026.806);
   VbbHcc_tags_Sphericity__214->SetBinError(5,3733.476);
   VbbHcc_tags_Sphericity__214->SetBinError(6,1680.194);
   VbbHcc_tags_Sphericity__214->SetBinError(7,1151.695);
   VbbHcc_tags_Sphericity__214->SetBinError(8,499.6857);
   VbbHcc_tags_Sphericity__214->SetBinError(9,529.7319);
   VbbHcc_tags_Sphericity__214->SetBinError(10,223.9367);
   VbbHcc_tags_Sphericity__214->SetBinError(11,537.273);
   VbbHcc_tags_Sphericity__214->SetBinError(12,127.2225);
   VbbHcc_tags_Sphericity__214->SetBinError(13,92.70395);
   VbbHcc_tags_Sphericity__214->SetBinError(14,20.47542);
   VbbHcc_tags_Sphericity__214->SetBinError(15,76.66888);
   VbbHcc_tags_Sphericity__214->SetBinError(16,100.4713);
   VbbHcc_tags_Sphericity__214->SetBinError(17,67.69591);
   VbbHcc_tags_Sphericity__214->SetBinError(18,13.65224);
   VbbHcc_tags_Sphericity__214->SetBinError(19,42.09375);
   VbbHcc_tags_Sphericity__214->SetEntries(10096);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Sphericity__214->SetFillColor(ci);
   VbbHcc_tags_Sphericity__214->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity__214->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity__214->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__214->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__214->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__214->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__214->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__214->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__214->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__214->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__214->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_18->Modified();
   Sphericity_tags_18->cd();
   Sphericity_tags_18->SetSelected(Sphericity_tags_18);
}
