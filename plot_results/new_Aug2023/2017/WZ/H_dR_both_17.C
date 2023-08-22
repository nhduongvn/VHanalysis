void H_dR_both_17()
{
//=========Macro generated from canvas: H_dR_both_17/H_dR_both_17
//=========  (Tue Aug 22 09:22:44 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_17 = new TCanvas("H_dR_both_17", "H_dR_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_17->SetHighLightColor(2);
   H_dR_both_17->Range(-1.2,-0.1781278,6.8,1.60315);
   H_dR_both_17->SetFillColor(0);
   H_dR_both_17->SetBorderMode(0);
   H_dR_both_17->SetBorderSize(2);
   H_dR_both_17->SetLeftMargin(0.15);
   H_dR_both_17->SetFrameBorderMode(0);
   H_dR_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_7 = new TH1D("VbbHcc_both_H_dR_stack_7","",30,0,6);
   VbbHcc_both_H_dR_stack_7->SetBinContent(4,0.181553);
   VbbHcc_both_H_dR_stack_7->SetBinContent(5,0.8160671);
   VbbHcc_both_H_dR_stack_7->SetBinContent(6,0.4433125);
   VbbHcc_both_H_dR_stack_7->SetBinContent(7,0.269206);
   VbbHcc_both_H_dR_stack_7->SetBinContent(11,0.2711943);
   VbbHcc_both_H_dR_stack_7->SetBinContent(12,0.8041691);
   VbbHcc_both_H_dR_stack_7->SetBinContent(13,1.357164);
   VbbHcc_both_H_dR_stack_7->SetBinContent(15,0.8766325);
   VbbHcc_both_H_dR_stack_7->SetBinContent(16,0.7838816);
   VbbHcc_both_H_dR_stack_7->SetBinContent(17,0.1680729);
   VbbHcc_both_H_dR_stack_7->SetBinContent(19,0.2454468);
   VbbHcc_both_H_dR_stack_7->SetBinContent(21,0.2962674);
   VbbHcc_both_H_dR_stack_7->SetBinError(4,0.181553);
   VbbHcc_both_H_dR_stack_7->SetBinError(5,0.4197281);
   VbbHcc_both_H_dR_stack_7->SetBinError(6,0.3218993);
   VbbHcc_both_H_dR_stack_7->SetBinError(7,0.269206);
   VbbHcc_both_H_dR_stack_7->SetBinError(11,0.2711943);
   VbbHcc_both_H_dR_stack_7->SetBinError(12,0.4678644);
   VbbHcc_both_H_dR_stack_7->SetBinError(13,0.6108934);
   VbbHcc_both_H_dR_stack_7->SetBinError(15,0.5098347);
   VbbHcc_both_H_dR_stack_7->SetBinError(16,0.4577992);
   VbbHcc_both_H_dR_stack_7->SetBinError(17,0.1680729);
   VbbHcc_both_H_dR_stack_7->SetBinError(19,0.2454468);
   VbbHcc_both_H_dR_stack_7->SetBinError(21,0.2962674);
   VbbHcc_both_H_dR_stack_7->SetEntries(26);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_stack_7->SetFillColor(ci);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_17->Modified();
   H_dR_both_17->cd();
   H_dR_both_17->SetSelected(H_dR_both_17);
}
