void dR_HZ_both_17()
{
//=========Macro generated from canvas: dR_HZ_both_17/dR_HZ_both_17
//=========  (Thu Aug 10 12:29:22 2023) by ROOT version 6.14/09
   TCanvas *dR_HZ_both_17 = new TCanvas("dR_HZ_both_17", "dR_HZ_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   dR_HZ_both_17->SetHighLightColor(2);
   dR_HZ_both_17->Range(-1.2,-0.0413839,6.8,0.3724551);
   dR_HZ_both_17->SetFillColor(0);
   dR_HZ_both_17->SetBorderMode(0);
   dR_HZ_both_17->SetBorderSize(2);
   dR_HZ_both_17->SetLeftMargin(0.15);
   dR_HZ_both_17->SetFrameBorderMode(0);
   dR_HZ_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_dR_HZ_stack_6 = new TH1D("VbbHcc_both_dR_HZ_stack_6","",60,0,6);
   VbbHcc_both_dR_HZ_stack_6->SetBinContent(5,0.3153059);
   VbbHcc_both_dR_HZ_stack_6->SetBinContent(14,0.3153059);
   VbbHcc_both_dR_HZ_stack_6->SetBinContent(20,0.3153059);
   VbbHcc_both_dR_HZ_stack_6->SetBinContent(29,0.3153059);
   VbbHcc_both_dR_HZ_stack_6->SetBinContent(32,0.3153059);
   VbbHcc_both_dR_HZ_stack_6->SetBinError(5,0.3153059);
   VbbHcc_both_dR_HZ_stack_6->SetBinError(14,0.3153059);
   VbbHcc_both_dR_HZ_stack_6->SetBinError(20,0.3153059);
   VbbHcc_both_dR_HZ_stack_6->SetBinError(29,0.3153059);
   VbbHcc_both_dR_HZ_stack_6->SetBinError(32,0.3153059);
   VbbHcc_both_dR_HZ_stack_6->SetEntries(5);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_dR_HZ_stack_6->SetFillColor(ci);
   VbbHcc_both_dR_HZ_stack_6->GetXaxis()->SetTitle("#DeltaR_{ZH}");
   VbbHcc_both_dR_HZ_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_dR_HZ_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_dR_HZ_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_dR_HZ_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_dR_HZ_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_dR_HZ_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_dR_HZ_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_dR_HZ_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_dR_HZ_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_dR_HZ_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_dR_HZ_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_dR_HZ_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_dR_HZ_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_dR_HZ_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_dR_HZ_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   dR_HZ_both_17->Modified();
   dR_HZ_both_17->cd();
   dR_HZ_both_17->SetSelected(dR_HZ_both_17);
}
