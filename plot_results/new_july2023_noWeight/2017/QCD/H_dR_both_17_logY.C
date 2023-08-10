void H_dR_both_17_logY()
{
//=========Macro generated from canvas: H_dR_both_17/H_dR_both_17
//=========  (Thu Aug 10 12:32:46 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_17 = new TCanvas("H_dR_both_17", "H_dR_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_17->SetHighLightColor(2);
   H_dR_both_17->Range(-1.2,0.01366063,6.8,5.197426);
   H_dR_both_17->SetFillColor(0);
   H_dR_both_17->SetBorderMode(0);
   H_dR_both_17->SetBorderSize(2);
   H_dR_both_17->SetLogy();
   H_dR_both_17->SetLeftMargin(0.15);
   H_dR_both_17->SetFrameBorderMode(0);
   H_dR_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(2,6.808747);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,25205.8);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,11430.36);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,8852.262);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,7944.704);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,6523.475);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,7266.78);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,6330.931);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,23597.13);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,9649.206);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,9492.783);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,11767.86);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,15028.47);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,16158.81);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,18819.52);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,8821.768);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,9008.05);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,6849.497);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,2422.383);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,2263.626);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,1119.069);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,1126.638);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,751.5002);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,165.8196);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,321.169);
   VbbHcc_both_H_dR_stack_1->SetBinError(2,6.808747);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,14865.74);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,1344.735);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,1195.082);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,1130.696);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,957.8486);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,1033.003);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,883.672);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,14858.17);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,1598.493);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,1171.786);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,1322.138);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,1552.369);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,1558.909);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,2030.301);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,1076.311);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,1252.309);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,1123.853);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,556.6829);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,611.7719);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,391.7069);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,469.8241);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,384.424);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,52.45741);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,270.1844);
   VbbHcc_both_H_dR_stack_1->SetEntries(10822);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_17->Modified();
   H_dR_both_17->cd();
   H_dR_both_17->SetSelected(H_dR_both_17);
}
