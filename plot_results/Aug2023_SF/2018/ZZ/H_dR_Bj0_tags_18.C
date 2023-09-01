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
   H_dR_Bj0_tags_18->Range(-1.2,-1.246887,6.8,11.22198);
   H_dR_Bj0_tags_18->SetFillColor(0);
   H_dR_Bj0_tags_18->SetBorderMode(0);
   H_dR_Bj0_tags_18->SetBorderSize(2);
   H_dR_Bj0_tags_18->SetLeftMargin(0.15);
   H_dR_Bj0_tags_18->SetFrameBorderMode(0);
   H_dR_Bj0_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dR_Bj0__161 = new TH1D("VbbHcc_tags_H_dR_Bj0__161","",30,0,6);
   VbbHcc_tags_H_dR_Bj0__161->SetBinContent(1,1.117657);
   VbbHcc_tags_H_dR_Bj0__161->SetBinContent(2,6.985359);
   VbbHcc_tags_H_dR_Bj0__161->SetBinContent(3,8.941259);
   VbbHcc_tags_H_dR_Bj0__161->SetBinContent(4,9.500088);
   VbbHcc_tags_H_dR_Bj0__161->SetBinContent(5,5.308873);
   VbbHcc_tags_H_dR_Bj0__161->SetBinContent(6,3.073558);
   VbbHcc_tags_H_dR_Bj0__161->SetBinContent(7,1.117657);
   VbbHcc_tags_H_dR_Bj0__161->SetBinContent(8,1.397072);
   VbbHcc_tags_H_dR_Bj0__161->SetBinContent(9,3.073558);
   VbbHcc_tags_H_dR_Bj0__161->SetBinContent(10,3.632387);
   VbbHcc_tags_H_dR_Bj0__161->SetBinContent(11,4.191215);
   VbbHcc_tags_H_dR_Bj0__161->SetBinContent(12,2.794144);
   VbbHcc_tags_H_dR_Bj0__161->SetBinContent(13,3.073558);
   VbbHcc_tags_H_dR_Bj0__161->SetBinContent(14,3.073558);
   VbbHcc_tags_H_dR_Bj0__161->SetBinContent(15,2.235315);
   VbbHcc_tags_H_dR_Bj0__161->SetBinContent(16,0.8382431);
   VbbHcc_tags_H_dR_Bj0__161->SetBinContent(17,1.117657);
   VbbHcc_tags_H_dR_Bj0__161->SetBinContent(18,0.8382431);
   VbbHcc_tags_H_dR_Bj0__161->SetBinContent(19,0.8382431);
   VbbHcc_tags_H_dR_Bj0__161->SetBinContent(23,0.2794144);
   VbbHcc_tags_H_dR_Bj0__161->SetBinContent(24,0.5588287);
   VbbHcc_tags_H_dR_Bj0__161->SetBinContent(26,0.2794144);
   VbbHcc_tags_H_dR_Bj0__161->SetBinError(1,0.5588287);
   VbbHcc_tags_H_dR_Bj0__161->SetBinError(2,1.397072);
   VbbHcc_tags_H_dR_Bj0__161->SetBinError(3,1.580606);
   VbbHcc_tags_H_dR_Bj0__161->SetBinError(4,1.629252);
   VbbHcc_tags_H_dR_Bj0__161->SetBinError(5,1.217939);
   VbbHcc_tags_H_dR_Bj0__161->SetBinError(6,0.9267126);
   VbbHcc_tags_H_dR_Bj0__161->SetBinError(7,0.5588287);
   VbbHcc_tags_H_dR_Bj0__161->SetBinError(8,0.6247895);
   VbbHcc_tags_H_dR_Bj0__161->SetBinError(9,0.9267126);
   VbbHcc_tags_H_dR_Bj0__161->SetBinError(10,1.007443);
   VbbHcc_tags_H_dR_Bj0__161->SetBinError(11,1.082167);
   VbbHcc_tags_H_dR_Bj0__161->SetBinError(12,0.8835858);
   VbbHcc_tags_H_dR_Bj0__161->SetBinError(13,0.9267126);
   VbbHcc_tags_H_dR_Bj0__161->SetBinError(14,0.9267126);
   VbbHcc_tags_H_dR_Bj0__161->SetBinError(15,0.7903031);
   VbbHcc_tags_H_dR_Bj0__161->SetBinError(16,0.4839599);
   VbbHcc_tags_H_dR_Bj0__161->SetBinError(17,0.5588287);
   VbbHcc_tags_H_dR_Bj0__161->SetBinError(18,0.4839599);
   VbbHcc_tags_H_dR_Bj0__161->SetBinError(19,0.4839599);
   VbbHcc_tags_H_dR_Bj0__161->SetBinError(23,0.2794144);
   VbbHcc_tags_H_dR_Bj0__161->SetBinError(24,0.3951516);
   VbbHcc_tags_H_dR_Bj0__161->SetBinError(26,0.2794144);
   VbbHcc_tags_H_dR_Bj0__161->SetEntries(230);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_Bj0__161->SetFillColor(ci);
   VbbHcc_tags_H_dR_Bj0__161->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VbbHcc_tags_H_dR_Bj0__161->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_H_dR_Bj0__161->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__161->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0__161->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__161->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__161->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__161->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__161->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0__161->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__161->Draw("HIST");
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
