void H_dR_both_17()
{
//=========Macro generated from canvas: H_dR_both_17/H_dR_both_17
//=========  (Tue Aug 22 09:22:44 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_17 = new TCanvas("H_dR_both_17", "H_dR_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_17->SetHighLightColor(2);
   H_dR_both_17->Range(-1.2,-0.0008654909,6.8,0.007789417);
   H_dR_both_17->SetFillColor(0);
   H_dR_both_17->SetBorderMode(0);
   H_dR_both_17->SetBorderSize(2);
   H_dR_both_17->SetLeftMargin(0.15);
   H_dR_both_17->SetFrameBorderMode(0);
   H_dR_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_12 = new TH1D("VbbHcc_both_H_dR_stack_12","",30,0,6);
   VbbHcc_both_H_dR_stack_12->SetBinContent(3,0.002158506);
   VbbHcc_both_H_dR_stack_12->SetBinContent(4,0.003377075);
   VbbHcc_both_H_dR_stack_12->SetBinContent(5,0.005281305);
   VbbHcc_both_H_dR_stack_12->SetBinContent(6,0.005336965);
   VbbHcc_both_H_dR_stack_12->SetBinContent(7,0.006594216);
   VbbHcc_both_H_dR_stack_12->SetBinContent(8,0.003750005);
   VbbHcc_both_H_dR_stack_12->SetBinContent(9,0.003017898);
   VbbHcc_both_H_dR_stack_12->SetBinContent(10,0.003601316);
   VbbHcc_both_H_dR_stack_12->SetBinContent(11,0.004087504);
   VbbHcc_both_H_dR_stack_12->SetBinContent(12,0.003451191);
   VbbHcc_both_H_dR_stack_12->SetBinContent(13,0.003415688);
   VbbHcc_both_H_dR_stack_12->SetBinContent(14,0.003130115);
   VbbHcc_both_H_dR_stack_12->SetBinContent(15,0.005004747);
   VbbHcc_both_H_dR_stack_12->SetBinContent(16,0.004268586);
   VbbHcc_both_H_dR_stack_12->SetBinContent(17,0.001589554);
   VbbHcc_both_H_dR_stack_12->SetBinContent(18,0.001502024);
   VbbHcc_both_H_dR_stack_12->SetBinContent(19,0.0006292953);
   VbbHcc_both_H_dR_stack_12->SetBinContent(20,0.0006385123);
   VbbHcc_both_H_dR_stack_12->SetBinContent(21,0.0004687398);
   VbbHcc_both_H_dR_stack_12->SetBinContent(23,0.0002869359);
   VbbHcc_both_H_dR_stack_12->SetBinContent(24,8.991818e-05);
   VbbHcc_both_H_dR_stack_12->SetBinError(3,0.0006909836);
   VbbHcc_both_H_dR_stack_12->SetBinError(4,0.0008789628);
   VbbHcc_both_H_dR_stack_12->SetBinError(5,0.001043801);
   VbbHcc_both_H_dR_stack_12->SetBinError(6,0.001025572);
   VbbHcc_both_H_dR_stack_12->SetBinError(7,0.00116345);
   VbbHcc_both_H_dR_stack_12->SetBinError(8,0.0008910617);
   VbbHcc_both_H_dR_stack_12->SetBinError(9,0.0007976254);
   VbbHcc_both_H_dR_stack_12->SetBinError(10,0.0008515713);
   VbbHcc_both_H_dR_stack_12->SetBinError(11,0.0009277738);
   VbbHcc_both_H_dR_stack_12->SetBinError(12,0.0008494566);
   VbbHcc_both_H_dR_stack_12->SetBinError(13,0.0008631087);
   VbbHcc_both_H_dR_stack_12->SetBinError(14,0.0007882734);
   VbbHcc_both_H_dR_stack_12->SetBinError(15,0.001030938);
   VbbHcc_both_H_dR_stack_12->SetBinError(16,0.0009499311);
   VbbHcc_both_H_dR_stack_12->SetBinError(17,0.0005805716);
   VbbHcc_both_H_dR_stack_12->SetBinError(18,0.0005784081);
   VbbHcc_both_H_dR_stack_12->SetBinError(19,0.0003644404);
   VbbHcc_both_H_dR_stack_12->SetBinError(20,0.000368734);
   VbbHcc_both_H_dR_stack_12->SetBinError(21,0.0002750223);
   VbbHcc_both_H_dR_stack_12->SetBinError(23,0.0002869359);
   VbbHcc_both_H_dR_stack_12->SetBinError(24,8.991818e-05);
   VbbHcc_both_H_dR_stack_12->SetEntries(308);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_stack_12->SetFillColor(ci);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->Draw("HIST");
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
