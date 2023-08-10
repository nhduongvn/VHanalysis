void H_dR_both_17_logY()
{
//=========Macro generated from canvas: H_dR_both_17/H_dR_both_17
//=========  (Thu Aug 10 12:21:34 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_17 = new TCanvas("H_dR_both_17", "H_dR_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_17->SetHighLightColor(2);
   H_dR_both_17->Range(-1.2,0.04997423,6.8,5.328607);
   H_dR_both_17->SetFillColor(0);
   H_dR_both_17->SetBorderMode(0);
   H_dR_both_17->SetBorderSize(2);
   H_dR_both_17->SetLogy();
   H_dR_both_17->SetLeftMargin(0.15);
   H_dR_both_17->SetFrameBorderMode(0);
   H_dR_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(2,7.566021);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,33357.61);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,12828.44);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,9988.006);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,8918.775);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,7460.878);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,8213.638);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,6795.449);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,24941.96);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,9801.212);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,10436.64);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,12953.09);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,15994.5);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,18148.28);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,20609.32);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,9315.371);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,10161.73);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,7321.12);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,2723.509);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,2394.863);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,1169.349);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,1161.354);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,814.4204);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,125.2599);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,359.5897);
   VbbHcc_both_H_dR_stack_1->SetBinError(2,7.566021);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,21715.05);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,1582.786);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,1386.537);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,1327.51);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,1174.569);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,1218.382);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,996.2259);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,15321.78);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,1318.953);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,1320.613);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,1532.43);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,1681.376);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,1822.834);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,2450.548);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,1182.409);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,1450.031);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,1209.9);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,626.1624);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,640.9733);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,479.9848);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,465.8342);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,423.4243);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,42.37503);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,304.7945);
   VbbHcc_both_H_dR_stack_1->SetEntries(10320);

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
