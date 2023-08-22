void H_dR_both_17_logY()
{
//=========Macro generated from canvas: H_dR_both_17/H_dR_both_17
//=========  (Tue Aug 22 09:18:18 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_17 = new TCanvas("H_dR_both_17", "H_dR_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_17->SetHighLightColor(2);
   H_dR_both_17->Range(-1.2,-4.252907,6.8,1.011668);
   H_dR_both_17->SetFillColor(0);
   H_dR_both_17->SetBorderMode(0);
   H_dR_both_17->SetBorderSize(2);
   H_dR_both_17->SetLogy();
   H_dR_both_17->SetLeftMargin(0.15);
   H_dR_both_17->SetFrameBorderMode(0);
   H_dR_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_10 = new TH1D("VbbHcc_both_H_dR_stack_10","",30,0,6);
   VbbHcc_both_H_dR_stack_10->SetBinContent(3,0.648197);
   VbbHcc_both_H_dR_stack_10->SetBinContent(4,1.381218);
   VbbHcc_both_H_dR_stack_10->SetBinContent(5,1.6131);
   VbbHcc_both_H_dR_stack_10->SetBinContent(6,1.555327);
   VbbHcc_both_H_dR_stack_10->SetBinContent(7,1.211009);
   VbbHcc_both_H_dR_stack_10->SetBinContent(8,0.9120653);
   VbbHcc_both_H_dR_stack_10->SetBinContent(9,0.6828877);
   VbbHcc_both_H_dR_stack_10->SetBinContent(10,0.6103476);
   VbbHcc_both_H_dR_stack_10->SetBinContent(11,0.6866694);
   VbbHcc_both_H_dR_stack_10->SetBinContent(12,0.8614048);
   VbbHcc_both_H_dR_stack_10->SetBinContent(13,1.013912);
   VbbHcc_both_H_dR_stack_10->SetBinContent(14,1.178645);
   VbbHcc_both_H_dR_stack_10->SetBinContent(15,1.332196);
   VbbHcc_both_H_dR_stack_10->SetBinContent(16,1.285699);
   VbbHcc_both_H_dR_stack_10->SetBinContent(17,0.5315794);
   VbbHcc_both_H_dR_stack_10->SetBinContent(18,0.23161);
   VbbHcc_both_H_dR_stack_10->SetBinContent(19,0.1101055);
   VbbHcc_both_H_dR_stack_10->SetBinContent(20,0.0600038);
   VbbHcc_both_H_dR_stack_10->SetBinContent(21,0.0345922);
   VbbHcc_both_H_dR_stack_10->SetBinContent(22,0.01807701);
   VbbHcc_both_H_dR_stack_10->SetBinContent(23,0.008190594);
   VbbHcc_both_H_dR_stack_10->SetBinContent(24,0.004911146);
   VbbHcc_both_H_dR_stack_10->SetBinContent(25,0.002357749);
   VbbHcc_both_H_dR_stack_10->SetBinContent(26,0.0007848554);
   VbbHcc_both_H_dR_stack_10->SetBinContent(27,0.0003754747);
   VbbHcc_both_H_dR_stack_10->SetBinError(3,0.01632683);
   VbbHcc_both_H_dR_stack_10->SetBinError(4,0.02354576);
   VbbHcc_both_H_dR_stack_10->SetBinError(5,0.02508208);
   VbbHcc_both_H_dR_stack_10->SetBinError(6,0.02442692);
   VbbHcc_both_H_dR_stack_10->SetBinError(7,0.02143506);
   VbbHcc_both_H_dR_stack_10->SetBinError(8,0.01864946);
   VbbHcc_both_H_dR_stack_10->SetBinError(9,0.01624474);
   VbbHcc_both_H_dR_stack_10->SetBinError(10,0.01540927);
   VbbHcc_both_H_dR_stack_10->SetBinError(11,0.0163244);
   VbbHcc_both_H_dR_stack_10->SetBinError(12,0.01828666);
   VbbHcc_both_H_dR_stack_10->SetBinError(13,0.01979824);
   VbbHcc_both_H_dR_stack_10->SetBinError(14,0.02135632);
   VbbHcc_both_H_dR_stack_10->SetBinError(15,0.02276281);
   VbbHcc_both_H_dR_stack_10->SetBinError(16,0.02235905);
   VbbHcc_both_H_dR_stack_10->SetBinError(17,0.01435114);
   VbbHcc_both_H_dR_stack_10->SetBinError(18,0.009496353);
   VbbHcc_both_H_dR_stack_10->SetBinError(19,0.006558623);
   VbbHcc_both_H_dR_stack_10->SetBinError(20,0.004819651);
   VbbHcc_both_H_dR_stack_10->SetBinError(21,0.003685345);
   VbbHcc_both_H_dR_stack_10->SetBinError(22,0.002652315);
   VbbHcc_both_H_dR_stack_10->SetBinError(23,0.001762185);
   VbbHcc_both_H_dR_stack_10->SetBinError(24,0.001380805);
   VbbHcc_both_H_dR_stack_10->SetBinError(25,0.0009651898);
   VbbHcc_both_H_dR_stack_10->SetBinError(26,0.000555009);
   VbbHcc_both_H_dR_stack_10->SetBinError(27,0.0003754747);
   VbbHcc_both_H_dR_stack_10->SetEntries(41891);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR_stack_10->SetFillColor(ci);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_10->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_10->Draw("HIST");
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
