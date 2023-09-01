#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_tags_18()
{
//=========Macro generated from canvas: Z_dR_Bj0_tags_18/Z_dR_Bj0_tags_18
//=========  (Fri Sep  1 13:34:44 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_Bj0_tags_18 = new TCanvas("Z_dR_Bj0_tags_18", "Z_dR_Bj0_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_tags_18->SetHighLightColor(2);
   Z_dR_Bj0_tags_18->Range(-1.2,-0.4346238,6.8,3.911614);
   Z_dR_Bj0_tags_18->SetFillColor(0);
   Z_dR_Bj0_tags_18->SetBorderMode(0);
   Z_dR_Bj0_tags_18->SetBorderSize(2);
   Z_dR_Bj0_tags_18->SetLeftMargin(0.15);
   Z_dR_Bj0_tags_18->SetFrameBorderMode(0);
   Z_dR_Bj0_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR_Bj0__190 = new TH1D("VbbHcc_tags_Z_dR_Bj0__190","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinContent(1,0.4730599);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinContent(2,2.838359);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinContent(3,3.311419);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinContent(4,0.9461198);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinContent(5,1.41918);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinContent(7,0.4730599);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinContent(8,0.4730599);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinContent(10,0.4730599);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinContent(12,0.4730599);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinContent(13,0.4730599);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinContent(22,0.4730599);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinContent(24,0.4730599);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinError(1,0.4730599);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinError(2,1.158755);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinError(3,1.251599);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinError(4,0.6690077);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinError(5,0.8193638);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinError(7,0.4730599);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinError(8,0.4730599);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinError(10,0.4730599);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinError(12,0.4730599);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinError(13,0.4730599);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinError(22,0.4730599);
   VbbHcc_tags_Z_dR_Bj0__190->SetBinError(24,0.4730599);
   VbbHcc_tags_Z_dR_Bj0__190->SetEntries(26);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_Bj0__190->SetFillColor(ci);
   VbbHcc_tags_Z_dR_Bj0__190->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   VbbHcc_tags_Z_dR_Bj0__190->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_Z_dR_Bj0__190->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__190->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0__190->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__190->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__190->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__190->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__190->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0__190->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__190->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_tags_18->Modified();
   Z_dR_Bj0_tags_18->cd();
   Z_dR_Bj0_tags_18->SetSelected(Z_dR_Bj0_tags_18);
}
