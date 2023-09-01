#ifdef __CLING__
#pragma cling optimize(0)
#endif
void dR_HZ_tags_18()
{
//=========Macro generated from canvas: dR_HZ_tags_18/dR_HZ_tags_18
//=========  (Fri Sep  1 13:34:44 2023) by ROOT version 6.28/04
   TCanvas *dR_HZ_tags_18 = new TCanvas("dR_HZ_tags_18", "dR_HZ_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   dR_HZ_tags_18->SetHighLightColor(2);
   dR_HZ_tags_18->Range(-1.2,-0.4452395,6.8,4.007155);
   dR_HZ_tags_18->SetFillColor(0);
   dR_HZ_tags_18->SetBorderMode(0);
   dR_HZ_tags_18->SetBorderSize(2);
   dR_HZ_tags_18->SetLeftMargin(0.15);
   dR_HZ_tags_18->SetFrameBorderMode(0);
   dR_HZ_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_dR_HZ__145 = new TH1D("VbbHcc_tags_dR_HZ__145","",60,0,6);
   VbbHcc_tags_dR_HZ__145->SetBinContent(6,0.1162559);
   VbbHcc_tags_dR_HZ__145->SetBinContent(12,1.248542);
   VbbHcc_tags_dR_HZ__145->SetBinContent(21,0.402246);
   VbbHcc_tags_dR_HZ__145->SetBinContent(22,0.670189);
   VbbHcc_tags_dR_HZ__145->SetBinContent(24,0.7924306);
   VbbHcc_tags_dR_HZ__145->SetBinContent(25,1.02595);
   VbbHcc_tags_dR_HZ__145->SetBinContent(26,0.6214135);
   VbbHcc_tags_dR_HZ__145->SetBinContent(29,0.9532567);
   VbbHcc_tags_dR_HZ__145->SetBinContent(32,1.299656);
   VbbHcc_tags_dR_HZ__145->SetBinContent(33,3.392301);
   VbbHcc_tags_dR_HZ__145->SetBinContent(34,1.550928);
   VbbHcc_tags_dR_HZ__145->SetBinContent(35,1.290473);
   VbbHcc_tags_dR_HZ__145->SetBinContent(37,1.505456);
   VbbHcc_tags_dR_HZ__145->SetBinContent(38,1.35156);
   VbbHcc_tags_dR_HZ__145->SetBinContent(43,2.730651);
   VbbHcc_tags_dR_HZ__145->SetBinContent(45,0.5004492);
   VbbHcc_tags_dR_HZ__145->SetBinContent(60,0.3908613);
   VbbHcc_tags_dR_HZ__145->SetBinContent(61,0.5814054);
   VbbHcc_tags_dR_HZ__145->SetBinError(6,0.1162559);
   VbbHcc_tags_dR_HZ__145->SetBinError(12,0.8872897);
   VbbHcc_tags_dR_HZ__145->SetBinError(21,0.402246);
   VbbHcc_tags_dR_HZ__145->SetBinError(22,0.670189);
   VbbHcc_tags_dR_HZ__145->SetBinError(24,0.7924306);
   VbbHcc_tags_dR_HZ__145->SetBinError(25,0.727457);
   VbbHcc_tags_dR_HZ__145->SetBinError(26,0.6214135);
   VbbHcc_tags_dR_HZ__145->SetBinError(29,0.9532567);
   VbbHcc_tags_dR_HZ__145->SetBinError(32,0.9738139);
   VbbHcc_tags_dR_HZ__145->SetBinError(33,2.059698);
   VbbHcc_tags_dR_HZ__145->SetBinError(34,1.550928);
   VbbHcc_tags_dR_HZ__145->SetBinError(35,1.290473);
   VbbHcc_tags_dR_HZ__145->SetBinError(37,1.069546);
   VbbHcc_tags_dR_HZ__145->SetBinError(38,0.9596342);
   VbbHcc_tags_dR_HZ__145->SetBinError(43,2.272237);
   VbbHcc_tags_dR_HZ__145->SetBinError(45,0.5004492);
   VbbHcc_tags_dR_HZ__145->SetBinError(60,0.3908613);
   VbbHcc_tags_dR_HZ__145->SetBinError(61,0.5814054);
   VbbHcc_tags_dR_HZ__145->SetEntries(26);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_dR_HZ__145->SetFillColor(ci);
   VbbHcc_tags_dR_HZ__145->GetXaxis()->SetTitle("#DeltaR_{ZH}");
   VbbHcc_tags_dR_HZ__145->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_dR_HZ__145->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_dR_HZ__145->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_dR_HZ__145->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_dR_HZ__145->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_dR_HZ__145->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_dR_HZ__145->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_dR_HZ__145->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_dR_HZ__145->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_dR_HZ__145->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   dR_HZ_tags_18->Modified();
   dR_HZ_tags_18->cd();
   dR_HZ_tags_18->SetSelected(dR_HZ_tags_18);
}
