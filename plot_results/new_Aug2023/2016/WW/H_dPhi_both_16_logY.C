void H_dPhi_both_16_logY()
{
//=========Macro generated from canvas: H_dPhi_both_16/H_dPhi_both_16
//=========  (Tue Aug 22 09:18:23 2023) by ROOT version 6.14/09
   TCanvas *H_dPhi_both_16 = new TCanvas("H_dPhi_both_16", "H_dPhi_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dPhi_both_16->SetHighLightColor(2);
   H_dPhi_both_16->Range(-0.8,-1.323847,4.533333,-0.5160427);
   H_dPhi_both_16->SetFillColor(0);
   H_dPhi_both_16->SetBorderMode(0);
   H_dPhi_both_16->SetBorderSize(2);
   H_dPhi_both_16->SetLogy();
   H_dPhi_both_16->SetLeftMargin(0.15);
   H_dPhi_both_16->SetFrameBorderMode(0);
   H_dPhi_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dPhi_stack_6 = new TH1D("VbbHcc_both_H_dPhi_stack_6","",120,0,4);
   VbbHcc_both_H_dPhi_stack_6->SetBinContent(0,0.3166985);
   VbbHcc_both_H_dPhi_stack_6->SetBinContent(26,0.1195687);
   VbbHcc_both_H_dPhi_stack_6->SetBinContent(27,0.1173155);
   VbbHcc_both_H_dPhi_stack_6->SetBinContent(47,0.1243737);
   VbbHcc_both_H_dPhi_stack_6->SetBinContent(58,0.1335451);
   VbbHcc_both_H_dPhi_stack_6->SetBinContent(69,0.1142782);
   VbbHcc_both_H_dPhi_stack_6->SetBinContent(90,0.1297649);
   VbbHcc_both_H_dPhi_stack_6->SetBinContent(92,0.1294336);
   VbbHcc_both_H_dPhi_stack_6->SetBinError(0,0.1860197);
   VbbHcc_both_H_dPhi_stack_6->SetBinError(26,0.1195687);
   VbbHcc_both_H_dPhi_stack_6->SetBinError(27,0.1173155);
   VbbHcc_both_H_dPhi_stack_6->SetBinError(47,0.1243737);
   VbbHcc_both_H_dPhi_stack_6->SetBinError(58,0.1335451);
   VbbHcc_both_H_dPhi_stack_6->SetBinError(69,0.1142782);
   VbbHcc_both_H_dPhi_stack_6->SetBinError(90,0.1297649);
   VbbHcc_both_H_dPhi_stack_6->SetBinError(92,0.1294336);
   VbbHcc_both_H_dPhi_stack_6->SetEntries(10);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dPhi_both_16->Modified();
   H_dPhi_both_16->cd();
   H_dPhi_both_16->SetSelected(H_dPhi_both_16);
}
