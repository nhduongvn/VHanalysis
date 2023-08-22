void H_dR_both_16()
{
//=========Macro generated from canvas: H_dR_both_16/H_dR_both_16
//=========  (Tue Aug 22 09:22:43 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_16 = new TCanvas("H_dR_both_16", "H_dR_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_16->SetHighLightColor(2);
   H_dR_both_16->Range(-1.2,-0.1828284,6.8,1.645455);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetLeftMargin(0.15);
   H_dR_both_16->SetFrameBorderMode(0);
   H_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_10 = new TH1D("VbbHcc_both_H_dR_stack_10","",30,0,6);
   VbbHcc_both_H_dR_stack_10->SetBinContent(3,0.5597447);
   VbbHcc_both_H_dR_stack_10->SetBinContent(4,1.192739);
   VbbHcc_both_H_dR_stack_10->SetBinContent(5,1.392978);
   VbbHcc_both_H_dR_stack_10->SetBinContent(6,1.343089);
   VbbHcc_both_H_dR_stack_10->SetBinContent(7,1.045756);
   VbbHcc_both_H_dR_stack_10->SetBinContent(8,0.7876059);
   VbbHcc_both_H_dR_stack_10->SetBinContent(9,0.5897016);
   VbbHcc_both_H_dR_stack_10->SetBinContent(10,0.5270603);
   VbbHcc_both_H_dR_stack_10->SetBinContent(11,0.5929673);
   VbbHcc_both_H_dR_stack_10->SetBinContent(12,0.7438585);
   VbbHcc_both_H_dR_stack_10->SetBinContent(13,0.8755547);
   VbbHcc_both_H_dR_stack_10->SetBinContent(14,1.017809);
   VbbHcc_both_H_dR_stack_10->SetBinContent(15,1.150406);
   VbbHcc_both_H_dR_stack_10->SetBinContent(16,1.110254);
   VbbHcc_both_H_dR_stack_10->SetBinContent(17,0.4590406);
   VbbHcc_both_H_dR_stack_10->SetBinContent(18,0.2000048);
   VbbHcc_both_H_dR_stack_10->SetBinContent(19,0.09508065);
   VbbHcc_both_H_dR_stack_10->SetBinContent(20,0.05181575);
   VbbHcc_both_H_dR_stack_10->SetBinContent(21,0.02987178);
   VbbHcc_both_H_dR_stack_10->SetBinContent(22,0.01561024);
   VbbHcc_both_H_dR_stack_10->SetBinContent(23,0.007072915);
   VbbHcc_both_H_dR_stack_10->SetBinContent(24,0.004240977);
   VbbHcc_both_H_dR_stack_10->SetBinContent(25,0.002036013);
   VbbHcc_both_H_dR_stack_10->SetBinContent(26,0.000677755);
   VbbHcc_both_H_dR_stack_10->SetBinContent(27,0.0003242378);
   VbbHcc_both_H_dR_stack_10->SetBinError(3,0.01409889);
   VbbHcc_both_H_dR_stack_10->SetBinError(4,0.02033273);
   VbbHcc_both_H_dR_stack_10->SetBinError(5,0.02165941);
   VbbHcc_both_H_dR_stack_10->SetBinError(6,0.02109365);
   VbbHcc_both_H_dR_stack_10->SetBinError(7,0.01851005);
   VbbHcc_both_H_dR_stack_10->SetBinError(8,0.01610458);
   VbbHcc_both_H_dR_stack_10->SetBinError(9,0.014028);
   VbbHcc_both_H_dR_stack_10->SetBinError(10,0.01330654);
   VbbHcc_both_H_dR_stack_10->SetBinError(11,0.01409679);
   VbbHcc_both_H_dR_stack_10->SetBinError(12,0.01579129);
   VbbHcc_both_H_dR_stack_10->SetBinError(13,0.01709659);
   VbbHcc_both_H_dR_stack_10->SetBinError(14,0.01844207);
   VbbHcc_both_H_dR_stack_10->SetBinError(15,0.01965662);
   VbbHcc_both_H_dR_stack_10->SetBinError(16,0.01930796);
   VbbHcc_both_H_dR_stack_10->SetBinError(17,0.0123928);
   VbbHcc_both_H_dR_stack_10->SetBinError(18,0.008200492);
   VbbHcc_both_H_dR_stack_10->SetBinError(19,0.005663641);
   VbbHcc_both_H_dR_stack_10->SetBinError(20,0.004161967);
   VbbHcc_both_H_dR_stack_10->SetBinError(21,0.003182447);
   VbbHcc_both_H_dR_stack_10->SetBinError(22,0.002290383);
   VbbHcc_both_H_dR_stack_10->SetBinError(23,0.001521719);
   VbbHcc_both_H_dR_stack_10->SetBinError(24,0.001192382);
   VbbHcc_both_H_dR_stack_10->SetBinError(25,0.0008334811);
   VbbHcc_both_H_dR_stack_10->SetBinError(26,0.0004792731);
   VbbHcc_both_H_dR_stack_10->SetBinError(27,0.0003242378);
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
