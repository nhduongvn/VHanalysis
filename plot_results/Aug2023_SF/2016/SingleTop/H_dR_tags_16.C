#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_16()
{
//=========Macro generated from canvas: H_dR_tags_16/H_dR_tags_16
//=========  (Fri Sep  1 13:23:30 2023) by ROOT version 6.28/04
   TCanvas *H_dR_tags_16 = new TCanvas("H_dR_tags_16", "H_dR_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_tags_16->SetHighLightColor(2);
   H_dR_tags_16->Range(-1.2,-5.026603,6.8,45.23942);
   H_dR_tags_16->SetFillColor(0);
   H_dR_tags_16->SetBorderMode(0);
   H_dR_tags_16->SetBorderSize(2);
   H_dR_tags_16->SetLeftMargin(0.15);
   H_dR_tags_16->SetFrameBorderMode(0);
   H_dR_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dR__80 = new TH1D("VbbHcc_tags_H_dR__80","",30,0,6);
   VbbHcc_tags_H_dR__80->SetBinContent(3,21.13066);
   VbbHcc_tags_H_dR__80->SetBinContent(4,20.20218);
   VbbHcc_tags_H_dR__80->SetBinContent(5,19.97774);
   VbbHcc_tags_H_dR__80->SetBinContent(6,24.17706);
   VbbHcc_tags_H_dR__80->SetBinContent(7,23.35962);
   VbbHcc_tags_H_dR__80->SetBinContent(8,19.85538);
   VbbHcc_tags_H_dR__80->SetBinContent(9,24.98797);
   VbbHcc_tags_H_dR__80->SetBinContent(10,22.21577);
   VbbHcc_tags_H_dR__80->SetBinContent(11,24.30398);
   VbbHcc_tags_H_dR__80->SetBinContent(12,28.83699);
   VbbHcc_tags_H_dR__80->SetBinContent(13,26.14903);
   VbbHcc_tags_H_dR__80->SetBinContent(14,32.54732);
   VbbHcc_tags_H_dR__80->SetBinContent(15,38.29792);
   VbbHcc_tags_H_dR__80->SetBinContent(16,37.81908);
   VbbHcc_tags_H_dR__80->SetBinContent(17,34.98536);
   VbbHcc_tags_H_dR__80->SetBinContent(18,30.28193);
   VbbHcc_tags_H_dR__80->SetBinContent(19,24.34921);
   VbbHcc_tags_H_dR__80->SetBinContent(20,24.16247);
   VbbHcc_tags_H_dR__80->SetBinContent(21,20.3942);
   VbbHcc_tags_H_dR__80->SetBinContent(22,16.14104);
   VbbHcc_tags_H_dR__80->SetBinContent(23,15.32923);
   VbbHcc_tags_H_dR__80->SetBinContent(24,11.21256);
   VbbHcc_tags_H_dR__80->SetBinContent(25,8.458972);
   VbbHcc_tags_H_dR__80->SetBinContent(26,9.555565);
   VbbHcc_tags_H_dR__80->SetBinContent(27,4.934112);
   VbbHcc_tags_H_dR__80->SetBinContent(28,4.908046);
   VbbHcc_tags_H_dR__80->SetBinContent(29,4.308419);
   VbbHcc_tags_H_dR__80->SetBinContent(30,3.079824);
   VbbHcc_tags_H_dR__80->SetBinContent(31,1.907047);
   VbbHcc_tags_H_dR__80->SetBinError(3,1.897097);
   VbbHcc_tags_H_dR__80->SetBinError(4,1.677387);
   VbbHcc_tags_H_dR__80->SetBinError(5,1.778552);
   VbbHcc_tags_H_dR__80->SetBinError(6,2.005471);
   VbbHcc_tags_H_dR__80->SetBinError(7,1.9653);
   VbbHcc_tags_H_dR__80->SetBinError(8,1.723713);
   VbbHcc_tags_H_dR__80->SetBinError(9,2.075376);
   VbbHcc_tags_H_dR__80->SetBinError(10,1.880989);
   VbbHcc_tags_H_dR__80->SetBinError(11,1.984533);
   VbbHcc_tags_H_dR__80->SetBinError(12,2.138292);
   VbbHcc_tags_H_dR__80->SetBinError(13,1.977233);
   VbbHcc_tags_H_dR__80->SetBinError(14,2.255081);
   VbbHcc_tags_H_dR__80->SetBinError(15,2.436847);
   VbbHcc_tags_H_dR__80->SetBinError(16,2.398453);
   VbbHcc_tags_H_dR__80->SetBinError(17,2.337633);
   VbbHcc_tags_H_dR__80->SetBinError(18,2.063406);
   VbbHcc_tags_H_dR__80->SetBinError(19,1.78738);
   VbbHcc_tags_H_dR__80->SetBinError(20,1.940351);
   VbbHcc_tags_H_dR__80->SetBinError(21,1.718706);
   VbbHcc_tags_H_dR__80->SetBinError(22,1.654035);
   VbbHcc_tags_H_dR__80->SetBinError(23,1.543714);
   VbbHcc_tags_H_dR__80->SetBinError(24,1.285035);
   VbbHcc_tags_H_dR__80->SetBinError(25,1.046467);
   VbbHcc_tags_H_dR__80->SetBinError(26,1.309084);
   VbbHcc_tags_H_dR__80->SetBinError(27,0.8167799);
   VbbHcc_tags_H_dR__80->SetBinError(28,0.9573348);
   VbbHcc_tags_H_dR__80->SetBinError(29,0.81052);
   VbbHcc_tags_H_dR__80->SetBinError(30,0.6504728);
   VbbHcc_tags_H_dR__80->SetBinError(31,0.4642396);
   VbbHcc_tags_H_dR__80->SetEntries(9292);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR__80->SetFillColor(ci);
   VbbHcc_tags_H_dR__80->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_tags_H_dR__80->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_H_dR__80->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__80->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR__80->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__80->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__80->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__80->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__80->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR__80->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__80->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tags_16->Modified();
   H_dR_tags_16->cd();
   H_dR_tags_16->SetSelected(H_dR_tags_16);
}
