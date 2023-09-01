#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_tags_16()
{
//=========Macro generated from canvas: Z_dR_Bj1_tags_16/Z_dR_Bj1_tags_16
//=========  (Fri Sep  1 13:23:33 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_Bj1_tags_16 = new TCanvas("Z_dR_Bj1_tags_16", "Z_dR_Bj1_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_tags_16->SetHighLightColor(2);
   Z_dR_Bj1_tags_16->Range(-1.2,-1768.594,6.8,15917.34);
   Z_dR_Bj1_tags_16->SetFillColor(0);
   Z_dR_Bj1_tags_16->SetBorderMode(0);
   Z_dR_Bj1_tags_16->SetBorderSize(2);
   Z_dR_Bj1_tags_16->SetLeftMargin(0.15);
   Z_dR_Bj1_tags_16->SetFrameBorderMode(0);
   Z_dR_Bj1_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR_Bj1__198 = new TH1D("VbbHcc_tags_Z_dR_Bj1__198","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(1,3882);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(2,13475);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(3,12950);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(4,10059);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(5,8295);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(6,6432);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(7,5292);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(8,4506);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(9,3866);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(10,3403);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(11,3077);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(12,2901);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(13,2554);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(14,2270);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(15,2037);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(16,1757);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(17,1410);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(18,1212);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(19,1028);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(20,881);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(21,693);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(22,517);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(23,483);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(24,375);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(25,258);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(26,200);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(27,126);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(28,95);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(29,63);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(30,33);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(31,44);
   VbbHcc_tags_Z_dR_Bj1__198->SetEntries(94174);
   VbbHcc_tags_Z_dR_Bj1__198->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   VbbHcc_tags_Z_dR_Bj1__198->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_Z_dR_Bj1__198->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__198->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1__198->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__198->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__198->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__198->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__198->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1__198->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__198->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_tags_16->Modified();
   Z_dR_Bj1_tags_16->cd();
   Z_dR_Bj1_tags_16->SetSelected(Z_dR_Bj1_tags_16);
}
