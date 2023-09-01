#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_tags_16()
{
//=========Macro generated from canvas: H_dR_Bj0_tags_16/H_dR_Bj0_tags_16
//=========  (Fri Sep  1 13:23:32 2023) by ROOT version 6.28/04
   TCanvas *H_dR_Bj0_tags_16 = new TCanvas("H_dR_Bj0_tags_16", "H_dR_Bj0_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_tags_16->SetHighLightColor(2);
   H_dR_Bj0_tags_16->Range(-1.2,-1485.488,6.8,13369.39);
   H_dR_Bj0_tags_16->SetFillColor(0);
   H_dR_Bj0_tags_16->SetBorderMode(0);
   H_dR_Bj0_tags_16->SetBorderSize(2);
   H_dR_Bj0_tags_16->SetLeftMargin(0.15);
   H_dR_Bj0_tags_16->SetFrameBorderMode(0);
   H_dR_Bj0_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dR_Bj0__153 = new TH1D("VbbHcc_tags_H_dR_Bj0__153","",30,0,6);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(1,3270);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(2,11318);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(3,11215);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(4,9455);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(5,7747);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(6,6470);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(7,5624);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(8,4737);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(9,4204);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(10,3761);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(11,3514);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(12,3302);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(13,3005);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(14,2719);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(15,2505);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(16,2220);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(17,1801);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(18,1460);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(19,1177);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(20,1067);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(21,874);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(22,635);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(23,560);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(24,413);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(25,334);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(26,274);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(27,160);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(28,136);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(29,88);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(30,46);
   VbbHcc_tags_H_dR_Bj0__153->SetBinContent(31,83);
   VbbHcc_tags_H_dR_Bj0__153->SetEntries(94174);
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_tags_16->Modified();
   H_dR_Bj0_tags_16->cd();
   H_dR_Bj0_tags_16->SetSelected(H_dR_Bj0_tags_16);
}
