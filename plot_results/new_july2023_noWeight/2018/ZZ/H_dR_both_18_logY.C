void H_dR_both_18_logY()
{
//=========Macro generated from canvas: H_dR_both_18/H_dR_both_18
//=========  (Thu Aug 10 12:32:47 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_18 = new TCanvas("H_dR_both_18", "H_dR_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_18->SetHighLightColor(2);
   H_dR_both_18->Range(-1.2,-1.111744,6.8,1.457881);
   H_dR_both_18->SetFillColor(0);
   H_dR_both_18->SetBorderMode(0);
   H_dR_both_18->SetBorderSize(2);
   H_dR_both_18->SetLogy();
   H_dR_both_18->SetLeftMargin(0.15);
   H_dR_both_18->SetFrameBorderMode(0);
   H_dR_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_8 = new TH1D("VbbHcc_both_H_dR_stack_8","",30,0,6);
   VbbHcc_both_H_dR_stack_8->SetBinContent(3,6.705944);
   VbbHcc_both_H_dR_stack_8->SetBinContent(4,8.382431);
   VbbHcc_both_H_dR_stack_8->SetBinContent(5,7.823602);
   VbbHcc_both_H_dR_stack_8->SetBinContent(6,2.514729);
   VbbHcc_both_H_dR_stack_8->SetBinContent(7,1.397072);
   VbbHcc_both_H_dR_stack_8->SetBinContent(8,2.514729);
   VbbHcc_both_H_dR_stack_8->SetBinContent(9,1.676486);
   VbbHcc_both_H_dR_stack_8->SetBinContent(10,2.794144);
   VbbHcc_both_H_dR_stack_8->SetBinContent(11,3.073558);
   VbbHcc_both_H_dR_stack_8->SetBinContent(12,3.632387);
   VbbHcc_both_H_dR_stack_8->SetBinContent(13,3.073558);
   VbbHcc_both_H_dR_stack_8->SetBinContent(14,3.073558);
   VbbHcc_both_H_dR_stack_8->SetBinContent(15,6.42653);
   VbbHcc_both_H_dR_stack_8->SetBinContent(16,6.147116);
   VbbHcc_both_H_dR_stack_8->SetBinContent(17,2.514729);
   VbbHcc_both_H_dR_stack_8->SetBinContent(18,1.9559);
   VbbHcc_both_H_dR_stack_8->SetBinContent(19,0.8382431);
   VbbHcc_both_H_dR_stack_8->SetBinContent(23,0.2794144);
   VbbHcc_both_H_dR_stack_8->SetBinError(3,1.368845);
   VbbHcc_both_H_dR_stack_8->SetBinError(4,1.530415);
   VbbHcc_both_H_dR_stack_8->SetBinError(5,1.478522);
   VbbHcc_both_H_dR_stack_8->SetBinError(6,0.8382431);
   VbbHcc_both_H_dR_stack_8->SetBinError(7,0.6247895);
   VbbHcc_both_H_dR_stack_8->SetBinError(8,0.8382431);
   VbbHcc_both_H_dR_stack_8->SetBinError(9,0.6844226);
   VbbHcc_both_H_dR_stack_8->SetBinError(10,0.8835858);
   VbbHcc_both_H_dR_stack_8->SetBinError(11,0.9267126);
   VbbHcc_both_H_dR_stack_8->SetBinError(12,1.007443);
   VbbHcc_both_H_dR_stack_8->SetBinError(13,0.9267126);
   VbbHcc_both_H_dR_stack_8->SetBinError(14,0.9267126);
   VbbHcc_both_H_dR_stack_8->SetBinError(15,1.340024);
   VbbHcc_both_H_dR_stack_8->SetBinError(16,1.310569);
   VbbHcc_both_H_dR_stack_8->SetBinError(17,0.8382431);
   VbbHcc_both_H_dR_stack_8->SetBinError(18,0.7392609);
   VbbHcc_both_H_dR_stack_8->SetBinError(19,0.4839599);
   VbbHcc_both_H_dR_stack_8->SetBinError(23,0.2794144);
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
