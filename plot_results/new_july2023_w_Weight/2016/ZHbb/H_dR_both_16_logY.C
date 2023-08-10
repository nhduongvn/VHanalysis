void H_dR_both_16_logY()
{
//=========Macro generated from canvas: H_dR_both_16/H_dR_both_16
//=========  (Thu Aug 10 10:43:03 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_16 = new TCanvas("H_dR_both_16", "H_dR_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_16->SetHighLightColor(2);
   H_dR_both_16->Range(-1.2,-3.308617,6.8,1.379529);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetLogy();
   H_dR_both_16->SetLeftMargin(0.15);
   H_dR_both_16->SetFrameBorderMode(0);
   H_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_9 = new TH1D("VbbHcc_both_H_dR_stack_9","",30,0,6);
   VbbHcc_both_H_dR_stack_9->SetBinContent(3,2.031736);
   VbbHcc_both_H_dR_stack_9->SetBinContent(4,3.843612);
   VbbHcc_both_H_dR_stack_9->SetBinContent(5,4.297);
   VbbHcc_both_H_dR_stack_9->SetBinContent(6,3.743312);
   VbbHcc_both_H_dR_stack_9->SetBinContent(7,2.729377);
   VbbHcc_both_H_dR_stack_9->SetBinContent(8,2.061052);
   VbbHcc_both_H_dR_stack_9->SetBinContent(9,1.431069);
   VbbHcc_both_H_dR_stack_9->SetBinContent(10,1.326678);
   VbbHcc_both_H_dR_stack_9->SetBinContent(11,1.470566);
   VbbHcc_both_H_dR_stack_9->SetBinContent(12,1.891783);
   VbbHcc_both_H_dR_stack_9->SetBinContent(13,2.529983);
   VbbHcc_both_H_dR_stack_9->SetBinContent(14,3.277926);
   VbbHcc_both_H_dR_stack_9->SetBinContent(15,4.093377);
   VbbHcc_both_H_dR_stack_9->SetBinContent(16,4.03193);
   VbbHcc_both_H_dR_stack_9->SetBinContent(17,1.407792);
   VbbHcc_both_H_dR_stack_9->SetBinContent(18,0.4820586);
   VbbHcc_both_H_dR_stack_9->SetBinContent(19,0.1898925);
   VbbHcc_both_H_dR_stack_9->SetBinContent(20,0.09883181);
   VbbHcc_both_H_dR_stack_9->SetBinContent(21,0.06443016);
   VbbHcc_both_H_dR_stack_9->SetBinContent(22,0.02467806);
   VbbHcc_both_H_dR_stack_9->SetBinContent(23,0.0141984);
   VbbHcc_both_H_dR_stack_9->SetBinContent(24,0.0073159);
   VbbHcc_both_H_dR_stack_9->SetBinContent(26,0.002892197);
   VbbHcc_both_H_dR_stack_9->SetBinError(3,0.05627239);
   VbbHcc_both_H_dR_stack_9->SetBinError(4,0.07717971);
   VbbHcc_both_H_dR_stack_9->SetBinError(5,0.08227846);
   VbbHcc_both_H_dR_stack_9->SetBinError(6,0.07652459);
   VbbHcc_both_H_dR_stack_9->SetBinError(7,0.06520275);
   VbbHcc_both_H_dR_stack_9->SetBinError(8,0.05597861);
   VbbHcc_both_H_dR_stack_9->SetBinError(9,0.04696006);
   VbbHcc_both_H_dR_stack_9->SetBinError(10,0.0452243);
   VbbHcc_both_H_dR_stack_9->SetBinError(11,0.04741826);
   VbbHcc_both_H_dR_stack_9->SetBinError(12,0.05410144);
   VbbHcc_both_H_dR_stack_9->SetBinError(13,0.06276481);
   VbbHcc_both_H_dR_stack_9->SetBinError(14,0.07144702);
   VbbHcc_both_H_dR_stack_9->SetBinError(15,0.07941854);
   VbbHcc_both_H_dR_stack_9->SetBinError(16,0.07935238);
   VbbHcc_both_H_dR_stack_9->SetBinError(17,0.04639982);
   VbbHcc_both_H_dR_stack_9->SetBinError(18,0.02752389);
   VbbHcc_both_H_dR_stack_9->SetBinError(19,0.01712609);
   VbbHcc_both_H_dR_stack_9->SetBinError(20,0.01212364);
   VbbHcc_both_H_dR_stack_9->SetBinError(21,0.009756063);
   VbbHcc_both_H_dR_stack_9->SetBinError(22,0.006000124);
   VbbHcc_both_H_dR_stack_9->SetBinError(23,0.00449566);
   VbbHcc_both_H_dR_stack_9->SetBinError(24,0.003280229);
   VbbHcc_both_H_dR_stack_9->SetBinError(26,0.002046462);
   VbbHcc_both_H_dR_stack_9->SetEntries(28649);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_stack_9->SetFillColor(ci);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_9->Draw("HIST");
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
