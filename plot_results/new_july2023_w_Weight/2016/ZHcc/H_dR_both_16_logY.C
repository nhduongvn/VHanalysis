void H_dR_both_16_logY()
{
//=========Macro generated from canvas: H_dR_both_16/H_dR_both_16
//=========  (Thu Aug 10 10:43:03 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_16 = new TCanvas("H_dR_both_16", "H_dR_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_16->SetHighLightColor(2);
   H_dR_both_16->Range(-1.2,-3.00855,6.8,-1.295578);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetLogy();
   H_dR_both_16->SetLeftMargin(0.15);
   H_dR_both_16->SetFrameBorderMode(0);
   H_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_11 = new TH1D("VbbHcc_both_H_dR_stack_11","",30,0,6);
   VbbHcc_both_H_dR_stack_11->SetBinContent(4,0.009008292);
   VbbHcc_both_H_dR_stack_11->SetBinContent(5,0.01801258);
   VbbHcc_both_H_dR_stack_11->SetBinContent(6,0.01057764);
   VbbHcc_both_H_dR_stack_11->SetBinContent(7,0.005999398);
   VbbHcc_both_H_dR_stack_11->SetBinContent(8,0.002959173);
   VbbHcc_both_H_dR_stack_11->SetBinContent(9,0.0114998);
   VbbHcc_both_H_dR_stack_11->SetBinContent(10,0.005802646);
   VbbHcc_both_H_dR_stack_11->SetBinContent(11,0.002994311);
   VbbHcc_both_H_dR_stack_11->SetBinContent(13,0.008503787);
   VbbHcc_both_H_dR_stack_11->SetBinContent(14,0.002909221);
   VbbHcc_both_H_dR_stack_11->SetBinContent(15,0.01119501);
   VbbHcc_both_H_dR_stack_11->SetBinContent(16,0.009012555);
   VbbHcc_both_H_dR_stack_11->SetBinContent(17,0.003218024);
   VbbHcc_both_H_dR_stack_11->SetBinContent(23,0.003003725);
   VbbHcc_both_H_dR_stack_11->SetBinError(4,0.005203119);
   VbbHcc_both_H_dR_stack_11->SetBinError(5,0.007364174);
   VbbHcc_both_H_dR_stack_11->SetBinError(6,0.00532004);
   VbbHcc_both_H_dR_stack_11->SetBinError(7,0.004245985);
   VbbHcc_both_H_dR_stack_11->SetBinError(8,0.002959173);
   VbbHcc_both_H_dR_stack_11->SetBinError(9,0.00575194);
   VbbHcc_both_H_dR_stack_11->SetBinError(10,0.004103342);
   VbbHcc_both_H_dR_stack_11->SetBinError(11,0.002994311);
   VbbHcc_both_H_dR_stack_11->SetBinError(13,0.004909802);
   VbbHcc_both_H_dR_stack_11->SetBinError(14,0.002909221);
   VbbHcc_both_H_dR_stack_11->SetBinError(15,0.005611966);
   VbbHcc_both_H_dR_stack_11->SetBinError(16,0.005210144);
   VbbHcc_both_H_dR_stack_11->SetBinError(17,0.003218024);
   VbbHcc_both_H_dR_stack_11->SetBinError(23,0.003003725);
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
