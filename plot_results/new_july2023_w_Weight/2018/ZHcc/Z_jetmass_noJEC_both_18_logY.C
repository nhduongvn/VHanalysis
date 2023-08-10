void Z_jetmass_noJEC_both_18_logY()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_both_18/Z_jetmass_noJEC_both_18
//=========  (Thu Aug 10 12:22:08 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_noJEC_both_18 = new TCanvas("Z_jetmass_noJEC_both_18", "Z_jetmass_noJEC_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_both_18->SetHighLightColor(2);
   Z_jetmass_noJEC_both_18->Range(-60,-3.062389,340,-0.8463314);
   Z_jetmass_noJEC_both_18->SetFillColor(0);
   Z_jetmass_noJEC_both_18->SetBorderMode(0);
   Z_jetmass_noJEC_both_18->SetBorderSize(2);
   Z_jetmass_noJEC_both_18->SetLogy();
   Z_jetmass_noJEC_both_18->SetLeftMargin(0.15);
   Z_jetmass_noJEC_both_18->SetFrameBorderMode(0);
   Z_jetmass_noJEC_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_noJEC_stack_11 = new TH1D("VbbHcc_both_Z_jetmass_noJEC_stack_11","",150,0,300);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(3,0.002885672);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(4,0.009030483);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(5,0.02292345);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(6,0.04513505);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(7,0.02823251);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(8,0.0237442);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(9,0.01662979);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(10,0.0148817);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(11,0.01005583);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(12,0.005504087);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(13,0.005399574);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(14,0.005636807);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(17,0.004476201);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(3,0.002885672);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(4,0.005226436);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(5,0.008166591);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(6,0.01169838);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(7,0.009492225);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(8,0.008186775);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(9,0.006864446);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(10,0.006710796);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(11,0.005352094);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(12,0.003894058);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(13,0.003822055);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(14,0.003985965);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(17,0.003278366);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetEntries(69);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetFillColor(ci);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetXaxis()->SetRange(1,150);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_both_18->Modified();
   Z_jetmass_noJEC_both_18->cd();
   Z_jetmass_noJEC_both_18->SetSelected(Z_jetmass_noJEC_both_18);
}
