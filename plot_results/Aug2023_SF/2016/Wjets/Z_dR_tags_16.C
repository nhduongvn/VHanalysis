#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_16()
{
//=========Macro generated from canvas: Z_dR_tags_16/Z_dR_tags_16
//=========  (Tue Sep  5 10:48:26 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_tags_16 = new TCanvas("Z_dR_tags_16", "Z_dR_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_tags_16->SetHighLightColor(2);
   Z_dR_tags_16->Range(-1.2,-2.568721,6.8,23.11849);
   Z_dR_tags_16->SetFillColor(0);
   Z_dR_tags_16->SetBorderMode(0);
   Z_dR_tags_16->SetBorderSize(2);
   Z_dR_tags_16->SetLeftMargin(0.15);
   Z_dR_tags_16->SetFrameBorderMode(0);
   Z_dR_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR__68 = new TH1D("VbbHcc_tags_Z_dR__68","",30,0,6);
   VbbHcc_tags_Z_dR__68->SetBinContent(3,19.57121);
   VbbHcc_tags_Z_dR__68->SetBinContent(4,15.04994);
   VbbHcc_tags_Z_dR__68->SetBinContent(5,11.04646);
   VbbHcc_tags_Z_dR__68->SetBinContent(6,6.777759);
   VbbHcc_tags_Z_dR__68->SetBinContent(7,5.445138);
   VbbHcc_tags_Z_dR__68->SetBinContent(8,7.568511);
   VbbHcc_tags_Z_dR__68->SetBinContent(9,5.867279);
   VbbHcc_tags_Z_dR__68->SetBinContent(10,6.818609);
   VbbHcc_tags_Z_dR__68->SetBinContent(11,4.331954);
   VbbHcc_tags_Z_dR__68->SetBinContent(12,7.038055);
   VbbHcc_tags_Z_dR__68->SetBinContent(13,7.08685);
   VbbHcc_tags_Z_dR__68->SetBinContent(14,7.291255);
   VbbHcc_tags_Z_dR__68->SetBinContent(15,7.243025);
   VbbHcc_tags_Z_dR__68->SetBinContent(16,5.192771);
   VbbHcc_tags_Z_dR__68->SetBinContent(17,9.538029);
   VbbHcc_tags_Z_dR__68->SetBinContent(18,6.841135);
   VbbHcc_tags_Z_dR__68->SetBinContent(19,5.636597);
   VbbHcc_tags_Z_dR__68->SetBinContent(20,4.252304);
   VbbHcc_tags_Z_dR__68->SetBinContent(21,3.469784);
   VbbHcc_tags_Z_dR__68->SetBinContent(22,3.207625);
   VbbHcc_tags_Z_dR__68->SetBinContent(23,2.324709);
   VbbHcc_tags_Z_dR__68->SetBinContent(24,7.959931);
   VbbHcc_tags_Z_dR__68->SetBinContent(25,1.514975);
   VbbHcc_tags_Z_dR__68->SetBinContent(26,2.12543);
   VbbHcc_tags_Z_dR__68->SetBinContent(27,1.476649);
   VbbHcc_tags_Z_dR__68->SetBinContent(28,1.29015);
   VbbHcc_tags_Z_dR__68->SetBinContent(29,1.275195);
   VbbHcc_tags_Z_dR__68->SetBinContent(30,0.8384942);
   VbbHcc_tags_Z_dR__68->SetBinContent(31,0.2799126);
   VbbHcc_tags_Z_dR__68->SetBinError(3,4.631971);
   VbbHcc_tags_Z_dR__68->SetBinError(4,2.01749);
   VbbHcc_tags_Z_dR__68->SetBinError(5,1.818113);
   VbbHcc_tags_Z_dR__68->SetBinError(6,1.148056);
   VbbHcc_tags_Z_dR__68->SetBinError(7,0.6753457);
   VbbHcc_tags_Z_dR__68->SetBinError(8,1.601213);
   VbbHcc_tags_Z_dR__68->SetBinError(9,1.122755);
   VbbHcc_tags_Z_dR__68->SetBinError(10,1.598285);
   VbbHcc_tags_Z_dR__68->SetBinError(11,1.175978);
   VbbHcc_tags_Z_dR__68->SetBinError(12,1.501809);
   VbbHcc_tags_Z_dR__68->SetBinError(13,1.360182);
   VbbHcc_tags_Z_dR__68->SetBinError(14,1.465563);
   VbbHcc_tags_Z_dR__68->SetBinError(15,1.47493);
   VbbHcc_tags_Z_dR__68->SetBinError(16,1.136206);
   VbbHcc_tags_Z_dR__68->SetBinError(17,1.729765);
   VbbHcc_tags_Z_dR__68->SetBinError(18,1.563591);
   VbbHcc_tags_Z_dR__68->SetBinError(19,1.158825);
   VbbHcc_tags_Z_dR__68->SetBinError(20,0.9672609);
   VbbHcc_tags_Z_dR__68->SetBinError(21,0.9434196);
   VbbHcc_tags_Z_dR__68->SetBinError(22,0.8831519);
   VbbHcc_tags_Z_dR__68->SetBinError(23,0.5268433);
   VbbHcc_tags_Z_dR__68->SetBinError(24,4.579104);
   VbbHcc_tags_Z_dR__68->SetBinError(25,0.361123);
   VbbHcc_tags_Z_dR__68->SetBinError(26,1.044024);
   VbbHcc_tags_Z_dR__68->SetBinError(27,0.4208843);
   VbbHcc_tags_Z_dR__68->SetBinError(28,0.3759931);
   VbbHcc_tags_Z_dR__68->SetBinError(29,0.3287499);
   VbbHcc_tags_Z_dR__68->SetBinError(30,0.241515);
   VbbHcc_tags_Z_dR__68->SetBinError(31,0.1337846);
   VbbHcc_tags_Z_dR__68->SetEntries(3416);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR__68->SetFillColor(ci);
   VbbHcc_tags_Z_dR__68->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_tags_Z_dR__68->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_Z_dR__68->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__68->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR__68->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__68->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__68->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__68->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__68->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR__68->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__68->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_tags_16->Modified();
   Z_dR_tags_16->cd();
   Z_dR_tags_16->SetSelected(Z_dR_tags_16);
}
