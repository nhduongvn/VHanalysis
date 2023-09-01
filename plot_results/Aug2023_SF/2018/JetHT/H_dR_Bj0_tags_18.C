#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_tags_18()
{
//=========Macro generated from canvas: H_dR_Bj0_tags_18/H_dR_Bj0_tags_18
//=========  (Fri Sep  1 13:34:44 2023) by ROOT version 6.28/04
   TCanvas *H_dR_Bj0_tags_18 = new TCanvas("H_dR_Bj0_tags_18", "H_dR_Bj0_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_tags_18->SetHighLightColor(2);
   H_dR_Bj0_tags_18->Range(-1.2,-4922.663,6.8,44303.96);
   H_dR_Bj0_tags_18->SetFillColor(0);
   H_dR_Bj0_tags_18->SetBorderMode(0);
   H_dR_Bj0_tags_18->SetBorderSize(2);
   H_dR_Bj0_tags_18->SetLeftMargin(0.15);
   H_dR_Bj0_tags_18->SetFrameBorderMode(0);
   H_dR_Bj0_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dR_Bj0__153 = new TH1D("VbbHcc_tags_H_dR_Bj0__153","",30,0,6);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(1,8843);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(2,36801);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(3,37506);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(4,31002);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(5,26454);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(6,21661);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(7,18178);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(8,15912);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(9,13973);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(10,12644);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(11,11519);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(12,10643);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(13,9725);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(14,8745);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(15,8043);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(16,6987);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(17,5669);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(18,4780);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(19,3867);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(20,3214);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(21,2599);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(22,2139);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(23,1753);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(24,1386);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(25,1065);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(26,773);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(27,614);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(28,409);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(29,243);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(30,154);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(31,273);
   VbbHcc_tags_H_dR_Bj0__153->SetEntries(307574);
   VbbHcc_tags_H_dR_Bj0__153->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VbbHcc_tags_H_dR_Bj0__153->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_H_dR_Bj0__153->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__153->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0__153->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__153->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__153->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__153->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__153->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0__153->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__153->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_tags_18->Modified();
   H_dR_Bj0_tags_18->cd();
   H_dR_Bj0_tags_18->SetSelected(H_dR_Bj0_tags_18);
}
