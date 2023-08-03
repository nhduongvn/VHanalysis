void H_pt_both_18()
{
//=========Macro generated from canvas: H_pt_both_18/H_pt_both_18
//=========  (Thu Aug  3 12:25:42 2023) by ROOT version 6.14/09
   TCanvas *H_pt_both_18 = new TCanvas("H_pt_both_18", "H_pt_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_pt_both_18->SetHighLightColor(2);
   H_pt_both_18->Range(-400,-0.0593306,2266.667,0.5339754);
   H_pt_both_18->SetFillColor(0);
   H_pt_both_18->SetBorderMode(0);
   H_pt_both_18->SetBorderSize(2);
   H_pt_both_18->SetLeftMargin(0.15);
   H_pt_both_18->SetFrameBorderMode(0);
   H_pt_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_pt_stack_6 = new TH1D("VbbHcc_both_H_pt_stack_6","",1000,0,2000);
   VbbHcc_both_H_pt_stack_6->SetBinContent(36,0.4520427);
   VbbHcc_both_H_pt_stack_6->SetBinContent(40,0.4520427);
   VbbHcc_both_H_pt_stack_6->SetBinContent(58,0.4520427);
   VbbHcc_both_H_pt_stack_6->SetBinContent(90,0.4520427);
   VbbHcc_both_H_pt_stack_6->SetBinContent(139,0.4520427);
   VbbHcc_both_H_pt_stack_6->SetBinError(36,0.4520427);
   VbbHcc_both_H_pt_stack_6->SetBinError(40,0.4520427);
   VbbHcc_both_H_pt_stack_6->SetBinError(58,0.4520427);
   VbbHcc_both_H_pt_stack_6->SetBinError(90,0.4520427);
   VbbHcc_both_H_pt_stack_6->SetBinError(139,0.4520427);
   VbbHcc_both_H_pt_stack_6->SetEntries(5);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_pt_stack_6->SetFillColor(ci);
   VbbHcc_both_H_pt_stack_6->GetXaxis()->SetTitle("H p_{T} [GeV]");
   VbbHcc_both_H_pt_stack_6->GetXaxis()->SetRange(1,1000);
   VbbHcc_both_H_pt_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_pt_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_pt_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_pt_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_pt_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_pt_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_pt_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_pt_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_both_18->Modified();
   H_pt_both_18->cd();
   H_pt_both_18->SetSelected(H_pt_both_18);
}
