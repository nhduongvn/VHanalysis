#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_tags_18()
{
//=========Macro generated from canvas: Z_dR_Bj1_tags_18/Z_dR_Bj1_tags_18
//=========  (Fri Sep  1 13:34:44 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_Bj1_tags_18 = new TCanvas("Z_dR_Bj1_tags_18", "Z_dR_Bj1_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_tags_18->SetHighLightColor(2);
   Z_dR_Bj1_tags_18->Range(-1.2,-5351.85,6.8,48166.65);
   Z_dR_Bj1_tags_18->SetFillColor(0);
   Z_dR_Bj1_tags_18->SetBorderMode(0);
   Z_dR_Bj1_tags_18->SetBorderSize(2);
   Z_dR_Bj1_tags_18->SetLeftMargin(0.15);
   Z_dR_Bj1_tags_18->SetFrameBorderMode(0);
   Z_dR_Bj1_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR_Bj1__198 = new TH1D("VbbHcc_tags_Z_dR_Bj1__198","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(1,9209);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(2,40776);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(3,40365);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(4,32866);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(5,27047);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(6,21603);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(7,17843);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(8,15200);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(9,13237);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(10,11817);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(11,10919);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(12,10017);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(13,8965);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(14,7972);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(15,7119);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(16,6130);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(17,5194);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(18,4390);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(19,3537);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(20,2985);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(21,2468);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(22,2035);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(23,1631);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(24,1290);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(25,924);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(26,708);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(27,505);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(28,302);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(29,207);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(30,103);
   VbbHcc_tags_Z_dR_Bj1__198->SetBinContent(31,210);
   VbbHcc_tags_Z_dR_Bj1__198->SetEntries(307574);
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_tags_18->Modified();
   Z_dR_Bj1_tags_18->cd();
   Z_dR_Bj1_tags_18->SetSelected(Z_dR_Bj1_tags_18);
}
