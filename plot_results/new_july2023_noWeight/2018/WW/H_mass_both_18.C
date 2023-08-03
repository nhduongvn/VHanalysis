void H_mass_both_18()
{
//=========Macro generated from canvas: H_mass_both_18/H_mass_both_18
//=========  (Thu Aug  3 12:25:30 2023) by ROOT version 6.14/09
   TCanvas *H_mass_both_18 = new TCanvas("H_mass_both_18", "H_mass_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_both_18->SetHighLightColor(2);
   H_mass_both_18->Range(-80,-0.0593306,453.3333,0.5339754);
   H_mass_both_18->SetFillColor(0);
   H_mass_both_18->SetBorderMode(0);
   H_mass_both_18->SetBorderSize(2);
   H_mass_both_18->SetLeftMargin(0.15);
   H_mass_both_18->SetFrameBorderMode(0);
   H_mass_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_mass_stack_6 = new TH1D("VbbHcc_both_H_mass_stack_6","",40,0,400);
   VbbHcc_both_H_mass_stack_6->SetBinContent(7,0.4520427);
   VbbHcc_both_H_mass_stack_6->SetBinContent(11,0.4520427);
   VbbHcc_both_H_mass_stack_6->SetBinContent(19,0.4520427);
   VbbHcc_both_H_mass_stack_6->SetBinContent(22,0.4520427);
   VbbHcc_both_H_mass_stack_6->SetBinContent(23,0.4520427);
   VbbHcc_both_H_mass_stack_6->SetBinError(7,0.4520427);
   VbbHcc_both_H_mass_stack_6->SetBinError(11,0.4520427);
   VbbHcc_both_H_mass_stack_6->SetBinError(19,0.4520427);
   VbbHcc_both_H_mass_stack_6->SetBinError(22,0.4520427);
   VbbHcc_both_H_mass_stack_6->SetBinError(23,0.4520427);
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_both_18->Modified();
   H_mass_both_18->cd();
   H_mass_both_18->SetSelected(H_mass_both_18);
}
