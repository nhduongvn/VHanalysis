void H_dPhi_both_17()
{
//=========Macro generated from canvas: H_dPhi_both_17/H_dPhi_both_17
//=========  (Thu Aug 10 12:29:17 2023) by ROOT version 6.14/09
   TCanvas *H_dPhi_both_17 = new TCanvas("H_dPhi_both_17", "H_dPhi_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dPhi_both_17->SetHighLightColor(2);
   H_dPhi_both_17->Range(-0.8,-0.0413839,4.533333,0.3724551);
   H_dPhi_both_17->SetFillColor(0);
   H_dPhi_both_17->SetBorderMode(0);
   H_dPhi_both_17->SetBorderSize(2);
   H_dPhi_both_17->SetLeftMargin(0.15);
   H_dPhi_both_17->SetFrameBorderMode(0);
   H_dPhi_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dPhi_stack_6 = new TH1D("VbbHcc_both_H_dPhi_stack_6","",120,0,4);
   VbbHcc_both_H_dPhi_stack_6->SetBinContent(0,0.9459177);
   VbbHcc_both_H_dPhi_stack_6->SetBinContent(79,0.3153059);
   VbbHcc_both_H_dPhi_stack_6->SetBinContent(93,0.3153059);
   VbbHcc_both_H_dPhi_stack_6->SetBinError(0,0.5461258);
   VbbHcc_both_H_dPhi_stack_6->SetBinError(79,0.3153059);
   VbbHcc_both_H_dPhi_stack_6->SetBinError(93,0.3153059);
   VbbHcc_both_H_dPhi_stack_6->SetEntries(5);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dPhi_stack_6->SetFillColor(ci);
   VbbHcc_both_H_dPhi_stack_6->GetXaxis()->SetTitle("#Delta#phi(c,c)");
   VbbHcc_both_H_dPhi_stack_6->GetXaxis()->SetRange(1,120);
   VbbHcc_both_H_dPhi_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dPhi_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dPhi_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dPhi_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dPhi_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dPhi_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dPhi_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dPhi_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dPhi_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dPhi_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dPhi_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dPhi_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dPhi_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dPhi_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dPhi_both_17->Modified();
   H_dPhi_both_17->cd();
   H_dPhi_both_17->SetSelected(H_dPhi_both_17);
}
