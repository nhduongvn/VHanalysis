void H_dR_both_16_logY()
{
//=========Macro generated from canvas: H_dR_both_16/H_dR_both_16
//=========  (Thu Aug 10 12:32:46 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_16 = new TCanvas("H_dR_both_16", "H_dR_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_16->SetHighLightColor(2);
   H_dR_both_16->Range(-1.2,-0.04193332,6.8,5.060602);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetLogy();
   H_dR_both_16->SetLeftMargin(0.15);
   H_dR_both_16->SetFrameBorderMode(0);
   H_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(2,5.879633);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,13219.47);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,10332.56);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,8047.159);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,6747.838);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,7622.682);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,7753.205);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,6842.545);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,10304.02);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,6274.59);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,9151.331);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,12546.38);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,14159.37);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,18741.29);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,17806.06);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,8903.769);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,5236.538);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,3506.527);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,3953.368);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,2966.538);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,1340.582);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,325.1512);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,163.1487);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,338.8892);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,29.72668);
   VbbHcc_both_H_dR_stack_1->SetBinError(2,5.879633);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,2412.288);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,1873.176);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,1732.225);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,1061.008);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,1749.373);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,1750.493);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,1062.233);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,1892.776);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,883.1811);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,1226.931);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,2353.136);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,2387.731);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,2238.541);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,2536.728);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,1774.203);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,873.3192);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,729.0422);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,862.2234);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,1496.664);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,474.8821);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,71.27608);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,52.48517);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,270.1474);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,22.76318);
   VbbHcc_both_H_dR_stack_1->SetEntries(10203);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_stack_1->SetFillColor(ci);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_16->Modified();
   H_dR_both_16->cd();
   H_dR_both_16->SetSelected(H_dR_both_16);
}
