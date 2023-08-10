void H_dR_both_18_logY()
{
//=========Macro generated from canvas: H_dR_both_18/H_dR_both_18
//=========  (Thu Aug 10 10:43:04 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_18 = new TCanvas("H_dR_both_18", "H_dR_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_18->SetHighLightColor(2);
   H_dR_both_18->Range(-1.2,-1.081522,6.8,1.510101);
   H_dR_both_18->SetFillColor(0);
   H_dR_both_18->SetBorderMode(0);
   H_dR_both_18->SetBorderSize(2);
   H_dR_both_18->SetLogy();
   H_dR_both_18->SetLeftMargin(0.15);
   H_dR_both_18->SetFrameBorderMode(0);
   H_dR_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_8 = new TH1D("VbbHcc_both_H_dR_stack_8","",30,0,6);
   VbbHcc_both_H_dR_stack_8->SetBinContent(3,7.586486);
   VbbHcc_both_H_dR_stack_8->SetBinContent(4,9.405665);
   VbbHcc_both_H_dR_stack_8->SetBinContent(5,9.195686);
   VbbHcc_both_H_dR_stack_8->SetBinContent(6,2.730323);
   VbbHcc_both_H_dR_stack_8->SetBinContent(7,1.45997);
   VbbHcc_both_H_dR_stack_8->SetBinContent(8,2.574224);
   VbbHcc_both_H_dR_stack_8->SetBinContent(9,1.920641);
   VbbHcc_both_H_dR_stack_8->SetBinContent(10,2.940722);
   VbbHcc_both_H_dR_stack_8->SetBinContent(11,4.106456);
   VbbHcc_both_H_dR_stack_8->SetBinContent(12,4.194775);
   VbbHcc_both_H_dR_stack_8->SetBinContent(13,3.128945);
   VbbHcc_both_H_dR_stack_8->SetBinContent(14,3.699037);
   VbbHcc_both_H_dR_stack_8->SetBinContent(15,7.202937);
   VbbHcc_both_H_dR_stack_8->SetBinContent(16,7.003343);
   VbbHcc_both_H_dR_stack_8->SetBinContent(17,2.676263);
   VbbHcc_both_H_dR_stack_8->SetBinContent(18,2.381264);
   VbbHcc_both_H_dR_stack_8->SetBinContent(19,0.7260518);
   VbbHcc_both_H_dR_stack_8->SetBinContent(23,0.3010719);
   VbbHcc_both_H_dR_stack_8->SetBinError(3,1.562072);
   VbbHcc_both_H_dR_stack_8->SetBinError(4,1.758614);
   VbbHcc_both_H_dR_stack_8->SetBinError(5,1.765476);
   VbbHcc_both_H_dR_stack_8->SetBinError(6,0.9175467);
   VbbHcc_both_H_dR_stack_8->SetBinError(7,0.692426);
   VbbHcc_both_H_dR_stack_8->SetBinError(8,0.8974122);
   VbbHcc_both_H_dR_stack_8->SetBinError(9,0.7935502);
   VbbHcc_both_H_dR_stack_8->SetBinError(10,0.9632968);
   VbbHcc_both_H_dR_stack_8->SetBinError(11,1.253349);
   VbbHcc_both_H_dR_stack_8->SetBinError(12,1.200303);
   VbbHcc_both_H_dR_stack_8->SetBinError(13,0.9581537);
   VbbHcc_both_H_dR_stack_8->SetBinError(14,1.122274);
   VbbHcc_both_H_dR_stack_8->SetBinError(15,1.548186);
   VbbHcc_both_H_dR_stack_8->SetBinError(16,1.542964);
   VbbHcc_both_H_dR_stack_8->SetBinError(17,0.9049776);
   VbbHcc_both_H_dR_stack_8->SetBinError(18,0.9096537);
   VbbHcc_both_H_dR_stack_8->SetBinError(19,0.4262175);
   VbbHcc_both_H_dR_stack_8->SetBinError(23,0.3010719);
   VbbHcc_both_H_dR_stack_8->SetEntries(232);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_stack_8->SetFillColor(ci);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_18->Modified();
   H_dR_both_18->cd();
   H_dR_both_18->SetSelected(H_dR_both_18);
}
