void H_dPhi_both_18()
{
//=========Macro generated from canvas: H_dPhi_both_18/H_dPhi_both_18
//=========  (Thu Aug 10 12:24:52 2023) by ROOT version 6.14/09
   TCanvas *H_dPhi_both_18 = new TCanvas("H_dPhi_both_18", "H_dPhi_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dPhi_both_18->SetHighLightColor(2);
   H_dPhi_both_18->Range(-0.8,-0.0660162,4.533333,0.5941458);
   H_dPhi_both_18->SetFillColor(0);
   H_dPhi_both_18->SetBorderMode(0);
   H_dPhi_both_18->SetBorderSize(2);
   H_dPhi_both_18->SetLeftMargin(0.15);
   H_dPhi_both_18->SetFrameBorderMode(0);
   H_dPhi_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dPhi_stack_6 = new TH1D("VbbHcc_both_H_dPhi_stack_6","",120,0,4);
   VbbHcc_both_H_dPhi_stack_6->SetBinContent(0,1.775753);
   VbbHcc_both_H_dPhi_stack_6->SetBinContent(22,0.5029805);
   VbbHcc_both_H_dPhi_stack_6->SetBinError(0,0.9381108);
   VbbHcc_both_H_dPhi_stack_6->SetBinError(22,0.5029805);
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dPhi_both_18->Modified();
   H_dPhi_both_18->cd();
   H_dPhi_both_18->SetSelected(H_dPhi_both_18);
}
