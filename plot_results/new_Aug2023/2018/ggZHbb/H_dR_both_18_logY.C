void H_dR_both_18_logY()
{
//=========Macro generated from canvas: H_dR_both_18/H_dR_both_18
//=========  (Tue Aug 22 09:18:19 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_18 = new TCanvas("H_dR_both_18", "H_dR_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_18->SetHighLightColor(2);
   H_dR_both_18->Range(-1.2,-4.095211,6.8,1.169363);
   H_dR_both_18->SetFillColor(0);
   H_dR_both_18->SetBorderMode(0);
   H_dR_both_18->SetBorderSize(2);
   H_dR_both_18->SetLogy();
   H_dR_both_18->SetLeftMargin(0.15);
   H_dR_both_18->SetFrameBorderMode(0);
   H_dR_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_10 = new TH1D("VbbHcc_both_H_dR_stack_10","",30,0,6);
   VbbHcc_both_H_dR_stack_10->SetBinContent(3,0.9319714);
   VbbHcc_both_H_dR_stack_10->SetBinContent(4,1.985903);
   VbbHcc_both_H_dR_stack_10->SetBinContent(5,2.319299);
   VbbHcc_both_H_dR_stack_10->SetBinContent(6,2.236234);
   VbbHcc_both_H_dR_stack_10->SetBinContent(7,1.741177);
   VbbHcc_both_H_dR_stack_10->SetBinContent(8,1.311359);
   VbbHcc_both_H_dR_stack_10->SetBinContent(9,0.9818494);
   VbbHcc_both_H_dR_stack_10->SetBinContent(10,0.877552);
   VbbHcc_both_H_dR_stack_10->SetBinContent(11,0.9872867);
   VbbHcc_both_H_dR_stack_10->SetBinContent(12,1.23852);
   VbbHcc_both_H_dR_stack_10->SetBinContent(13,1.457793);
   VbbHcc_both_H_dR_stack_10->SetBinContent(14,1.694645);
   VbbHcc_both_H_dR_stack_10->SetBinContent(15,1.915419);
   VbbHcc_both_H_dR_stack_10->SetBinContent(16,1.848565);
   VbbHcc_both_H_dR_stack_10->SetBinContent(17,0.7642997);
   VbbHcc_both_H_dR_stack_10->SetBinContent(18,0.3330067);
   VbbHcc_both_H_dR_stack_10->SetBinContent(19,0.1583087);
   VbbHcc_both_H_dR_stack_10->SetBinContent(20,0.08627289);
   VbbHcc_both_H_dR_stack_10->SetBinContent(21,0.04973633);
   VbbHcc_both_H_dR_stack_10->SetBinContent(22,0.02599095);
   VbbHcc_both_H_dR_stack_10->SetBinContent(23,0.01177636);
   VbbHcc_both_H_dR_stack_10->SetBinContent(24,0.007061199);
   VbbHcc_both_H_dR_stack_10->SetBinContent(25,0.003389949);
   VbbHcc_both_H_dR_stack_10->SetBinContent(26,0.001128458);
   VbbHcc_both_H_dR_stack_10->SetBinContent(27,0.0005398539);
   VbbHcc_both_H_dR_stack_10->SetBinError(3,0.02347456);
   VbbHcc_both_H_dR_stack_10->SetBinError(4,0.03385387);
   VbbHcc_both_H_dR_stack_10->SetBinError(5,0.03606278);
   VbbHcc_both_H_dR_stack_10->SetBinError(6,0.03512079);
   VbbHcc_both_H_dR_stack_10->SetBinError(7,0.03081912);
   VbbHcc_both_H_dR_stack_10->SetBinError(8,0.02681402);
   VbbHcc_both_H_dR_stack_10->SetBinError(9,0.02335653);
   VbbHcc_both_H_dR_stack_10->SetBinError(10,0.0221553);
   VbbHcc_both_H_dR_stack_10->SetBinError(11,0.02347107);
   VbbHcc_both_H_dR_stack_10->SetBinError(12,0.02629239);
   VbbHcc_both_H_dR_stack_10->SetBinError(13,0.02846572);
   VbbHcc_both_H_dR_stack_10->SetBinError(14,0.03070592);
   VbbHcc_both_H_dR_stack_10->SetBinError(15,0.03272814);
   VbbHcc_both_H_dR_stack_10->SetBinError(16,0.03214762);
   VbbHcc_both_H_dR_stack_10->SetBinError(17,0.02063393);
   VbbHcc_both_H_dR_stack_10->SetBinError(18,0.01365377);
   VbbHcc_both_H_dR_stack_10->SetBinError(19,0.009429925);
   VbbHcc_both_H_dR_stack_10->SetBinError(20,0.006929648);
   VbbHcc_both_H_dR_stack_10->SetBinError(21,0.005298753);
   VbbHcc_both_H_dR_stack_10->SetBinError(22,0.003813473);
   VbbHcc_both_H_dR_stack_10->SetBinError(23,0.002533652);
   VbbHcc_both_H_dR_stack_10->SetBinError(24,0.001985308);
   VbbHcc_both_H_dR_stack_10->SetBinError(25,0.001387741);
   VbbHcc_both_H_dR_stack_10->SetBinError(26,0.0007979867);
   VbbHcc_both_H_dR_stack_10->SetBinError(27,0.0005398539);
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
