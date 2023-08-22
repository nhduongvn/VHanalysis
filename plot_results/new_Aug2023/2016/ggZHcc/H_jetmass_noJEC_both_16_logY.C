void H_jetmass_noJEC_both_16_logY()
{
//=========Macro generated from canvas: H_jetmass_noJEC_both_16/H_jetmass_noJEC_both_16
//=========  (Tue Aug 22 09:18:58 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_noJEC_both_16 = new TCanvas("H_jetmass_noJEC_both_16", "H_jetmass_noJEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_both_16->SetHighLightColor(2);
   H_jetmass_noJEC_both_16->Range(-60,-4.063453,340,-1.674849);
   H_jetmass_noJEC_both_16->SetFillColor(0);
   H_jetmass_noJEC_both_16->SetBorderMode(0);
   H_jetmass_noJEC_both_16->SetBorderSize(2);
   H_jetmass_noJEC_both_16->SetLogy();
   H_jetmass_noJEC_both_16->SetLeftMargin(0.15);
   H_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   H_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_noJEC_stack_12 = new TH1D("VbbHcc_both_H_jetmass_noJEC_stack_12","",150,0,300);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(3,0.001637383);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(4,0.003629063);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(5,0.006437866);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(6,0.006383453);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(7,0.005294859);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(8,0.001474368);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(9,0.003782718);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(10,0.00170819);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(11,0.001703252);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(12,0.001135888);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(13,0.001780861);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(14,0.000894444);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(16,0.0005015951);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(18,0.0006125118);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(20,0.0003214624);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(21,0.0002995277);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(26,0.0003034595);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(28,0.0003371612);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(33,0.0003153252);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(3,0.0006698701);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(4,0.001015698);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(5,0.001345423);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(6,0.001320577);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(7,0.001220655);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(8,0.0006597913);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(9,0.001055561);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(10,0.0006987881);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(11,0.0006959475);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(12,0.0005689496);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(13,0.0007280148);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(14,0.0005171069);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(16,0.0003577512);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(18,0.0004331551);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(20,0.0003214624);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(21,0.0002995277);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(26,0.0003034595);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(28,0.0003371612);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(33,0.0003153252);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetEntries(137);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetFillColor(ci);
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_12->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_both_16->Modified();
   H_jetmass_noJEC_both_16->cd();
   H_jetmass_noJEC_both_16->SetSelected(H_jetmass_noJEC_both_16);
}
