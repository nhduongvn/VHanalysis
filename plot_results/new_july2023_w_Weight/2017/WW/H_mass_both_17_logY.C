void H_mass_both_17_logY()
{
//=========Macro generated from canvas: H_mass_both_17/H_mass_both_17
//=========  (Thu Aug 10 12:21:22 2023) by ROOT version 6.14/09
   TCanvas *H_mass_both_17 = new TCanvas("H_mass_both_17", "H_mass_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_both_17->SetHighLightColor(2);
   H_mass_both_17->Range(-80,-1.007231,453.3333,-0.02382187);
   H_mass_both_17->SetFillColor(0);
   H_mass_both_17->SetBorderMode(0);
   H_mass_both_17->SetBorderSize(2);
   H_mass_both_17->SetLogy();
   H_mass_both_17->SetLeftMargin(0.15);
   H_mass_both_17->SetFrameBorderMode(0);
   H_mass_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_mass_stack_6 = new TH1D("VbbHcc_both_H_mass_stack_6","",40,0,400);
   VbbHcc_both_H_mass_stack_6->SetBinContent(5,0.3608682);
   VbbHcc_both_H_mass_stack_6->SetBinContent(19,0.2466832);
   VbbHcc_both_H_mass_stack_6->SetBinContent(28,0.3402984);
   VbbHcc_both_H_mass_stack_6->SetBinContent(31,0.3983715);
   VbbHcc_both_H_mass_stack_6->SetBinContent(41,0.268632);
   VbbHcc_both_H_mass_stack_6->SetBinError(5,0.3608682);
   VbbHcc_both_H_mass_stack_6->SetBinError(19,0.2466832);
   VbbHcc_both_H_mass_stack_6->SetBinError(28,0.3402984);
   VbbHcc_both_H_mass_stack_6->SetBinError(31,0.3983715);
   VbbHcc_both_H_mass_stack_6->SetBinError(41,0.268632);
   VbbHcc_both_H_mass_stack_6->SetEntries(5);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_mass_stack_6->SetFillColor(ci);
   VbbHcc_both_H_mass_stack_6->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_both_H_mass_stack_6->GetXaxis()->SetRange(1,40);
   VbbHcc_both_H_mass_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_mass_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_both_17->Modified();
   H_mass_both_17->cd();
   H_mass_both_17->SetSelected(H_mass_both_17);
}
