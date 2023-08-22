void H_jetmass_JEC_both_16_logY()
{
//=========Macro generated from canvas: H_jetmass_JEC_both_16/H_jetmass_JEC_both_16
//=========  (Tue Aug 22 09:19:01 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_JEC_both_16 = new TCanvas("H_jetmass_JEC_both_16", "H_jetmass_JEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_both_16->SetHighLightColor(2);
   H_jetmass_JEC_both_16->Range(-60,-3.21362,340,2.036241);
   H_jetmass_JEC_both_16->SetFillColor(0);
   H_jetmass_JEC_both_16->SetBorderMode(0);
   H_jetmass_JEC_both_16->SetBorderSize(2);
   H_jetmass_JEC_both_16->SetLogy();
   H_jetmass_JEC_both_16->SetLeftMargin(0.15);
   H_jetmass_JEC_both_16->SetFrameBorderMode(0);
   H_jetmass_JEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_JEC_stack_9 = new TH1D("VbbHcc_both_H_jetmass_JEC_stack_9","",150,0,300);
   VbbHcc_both_H_jetmass_JEC_stack_9->SetBinContent(1,0.004096339);
   VbbHcc_both_H_jetmass_JEC_stack_9->SetBinContent(2,17.12799);
   VbbHcc_both_H_jetmass_JEC_stack_9->SetBinContent(3,12.14811);
   VbbHcc_both_H_jetmass_JEC_stack_9->SetBinContent(151,0.003358026);
   VbbHcc_both_H_jetmass_JEC_stack_9->SetBinError(1,0.002074901);
   VbbHcc_both_H_jetmass_JEC_stack_9->SetBinError(2,0.1372696);
   VbbHcc_both_H_jetmass_JEC_stack_9->SetBinError(3,0.1158555);
   VbbHcc_both_H_jetmass_JEC_stack_9->SetBinError(151,0.001942175);
   VbbHcc_both_H_jetmass_JEC_stack_9->SetEntries(28929);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_jetmass_JEC_stack_9->SetFillColor(ci);
   VbbHcc_both_H_jetmass_JEC_stack_9->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_both_H_jetmass_JEC_stack_9->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetmass_JEC_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetmass_JEC_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_9->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_9->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_both_16->Modified();
   H_jetmass_JEC_both_16->cd();
   H_jetmass_JEC_both_16->SetSelected(H_jetmass_JEC_both_16);
}
