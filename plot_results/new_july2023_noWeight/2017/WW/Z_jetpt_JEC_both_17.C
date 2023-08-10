void Z_jetpt_JEC_both_17()
{
//=========Macro generated from canvas: Z_jetpt_JEC_both_17/Z_jetpt_JEC_both_17
//=========  (Thu Aug 10 12:29:45 2023) by ROOT version 6.14/09
   TCanvas *Z_jetpt_JEC_both_17 = new TCanvas("Z_jetpt_JEC_both_17", "Z_jetpt_JEC_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetpt_JEC_both_17->SetHighLightColor(2);
   Z_jetpt_JEC_both_17->Range(-60,-0.0413839,340,0.3724551);
   Z_jetpt_JEC_both_17->SetFillColor(0);
   Z_jetpt_JEC_both_17->SetBorderMode(0);
   Z_jetpt_JEC_both_17->SetBorderSize(2);
   Z_jetpt_JEC_both_17->SetLeftMargin(0.15);
   Z_jetpt_JEC_both_17->SetFrameBorderMode(0);
   Z_jetpt_JEC_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetpt_JEC_stack_6 = new TH1D("VbbHcc_both_Z_jetpt_JEC_stack_6","",150,0,300);
   VbbHcc_both_Z_jetpt_JEC_stack_6->SetBinContent(29,0.3153059);
   VbbHcc_both_Z_jetpt_JEC_stack_6->SetBinContent(48,0.3153059);
   VbbHcc_both_Z_jetpt_JEC_stack_6->SetBinContent(72,0.3153059);
   VbbHcc_both_Z_jetpt_JEC_stack_6->SetBinContent(87,0.3153059);
   VbbHcc_both_Z_jetpt_JEC_stack_6->SetBinContent(95,0.3153059);
   VbbHcc_both_Z_jetpt_JEC_stack_6->SetBinError(29,0.3153059);
   VbbHcc_both_Z_jetpt_JEC_stack_6->SetBinError(48,0.3153059);
   VbbHcc_both_Z_jetpt_JEC_stack_6->SetBinError(72,0.3153059);
   VbbHcc_both_Z_jetpt_JEC_stack_6->SetBinError(87,0.3153059);
   VbbHcc_both_Z_jetpt_JEC_stack_6->SetBinError(95,0.3153059);
   VbbHcc_both_Z_jetpt_JEC_stack_6->SetEntries(5);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_jetpt_JEC_stack_6->SetFillColor(ci);
   VbbHcc_both_Z_jetpt_JEC_stack_6->GetXaxis()->SetTitle("b-jet p_{T} (w/ JEC) [GeV]");
   VbbHcc_both_Z_jetpt_JEC_stack_6->GetXaxis()->SetRange(1,150);
   VbbHcc_both_Z_jetpt_JEC_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetpt_JEC_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetpt_JEC_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetpt_JEC_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetpt_JEC_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetpt_JEC_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetpt_JEC_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetpt_JEC_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_jetpt_JEC_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetpt_JEC_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetpt_JEC_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetpt_JEC_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetpt_JEC_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetpt_JEC_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetpt_JEC_both_17->Modified();
   Z_jetpt_JEC_both_17->cd();
   Z_jetpt_JEC_both_17->SetSelected(Z_jetpt_JEC_both_17);
}
