void H_dR_both_16()
{
//=========Macro generated from canvas: H_dR_both_16/H_dR_both_16
//=========  (Tue Aug 22 09:22:43 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_16 = new TCanvas("H_dR_both_16", "H_dR_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_16->SetHighLightColor(2);
   H_dR_both_16->Range(-1.2,-0.001780911,6.8,0.0160282);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetLeftMargin(0.15);
   H_dR_both_16->SetFrameBorderMode(0);
   H_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_11 = new TH1D("VbbHcc_both_H_dR_stack_11","",30,0,6);
   VbbHcc_both_H_dR_stack_11->SetBinContent(4,0.006864318);
   VbbHcc_both_H_dR_stack_11->SetBinContent(5,0.01356885);
   VbbHcc_both_H_dR_stack_11->SetBinContent(6,0.007848424);
   VbbHcc_both_H_dR_stack_11->SetBinContent(7,0.005169042);
   VbbHcc_both_H_dR_stack_11->SetBinContent(8,0.00218387);
   VbbHcc_both_H_dR_stack_11->SetBinContent(9,0.008411953);
   VbbHcc_both_H_dR_stack_11->SetBinContent(10,0.004122407);
   VbbHcc_both_H_dR_stack_11->SetBinContent(11,0.002422398);
   VbbHcc_both_H_dR_stack_11->SetBinContent(13,0.006351877);
   VbbHcc_both_H_dR_stack_11->SetBinContent(14,0.001765897);
   VbbHcc_both_H_dR_stack_11->SetBinContent(15,0.008585443);
   VbbHcc_both_H_dR_stack_11->SetBinContent(16,0.006196313);
   VbbHcc_both_H_dR_stack_11->SetBinContent(17,0.002123896);
   VbbHcc_both_H_dR_stack_11->SetBinContent(23,0.001982459);
   VbbHcc_both_H_dR_stack_11->SetBinError(4,0.003964777);
   VbbHcc_both_H_dR_stack_11->SetBinError(5,0.005552035);
   VbbHcc_both_H_dR_stack_11->SetBinError(6,0.003969299);
   VbbHcc_both_H_dR_stack_11->SetBinError(7,0.003734477);
   VbbHcc_both_H_dR_stack_11->SetBinError(8,0.00218387);
   VbbHcc_both_H_dR_stack_11->SetBinError(9,0.004217589);
   VbbHcc_both_H_dR_stack_11->SetBinError(10,0.00292035);
   VbbHcc_both_H_dR_stack_11->SetBinError(11,0.002422398);
   VbbHcc_both_H_dR_stack_11->SetBinError(13,0.003667628);
   VbbHcc_both_H_dR_stack_11->SetBinError(14,0.001765897);
   VbbHcc_both_H_dR_stack_11->SetBinError(15,0.004297181);
   VbbHcc_both_H_dR_stack_11->SetBinError(16,0.003602834);
   VbbHcc_both_H_dR_stack_11->SetBinError(17,0.002123896);
   VbbHcc_both_H_dR_stack_11->SetBinError(23,0.001982459);
   VbbHcc_both_H_dR_stack_11->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_stack_11->SetFillColor(ci);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_11->Draw("HIST");
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
