void Z_dPhi_both_18()
{
//=========Macro generated from canvas: Z_dPhi_both_18/Z_dPhi_both_18
//=========  (Thu Aug 10 12:24:50 2023) by ROOT version 6.14/09
   TCanvas *Z_dPhi_both_18 = new TCanvas("Z_dPhi_both_18", "Z_dPhi_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dPhi_both_18->SetHighLightColor(2);
   Z_dPhi_both_18->Range(-0.8,-0.001077574,4.533333,0.009698162);
   Z_dPhi_both_18->SetFillColor(0);
   Z_dPhi_both_18->SetBorderMode(0);
   Z_dPhi_both_18->SetBorderSize(2);
   Z_dPhi_both_18->SetLeftMargin(0.15);
   Z_dPhi_both_18->SetFrameBorderMode(0);
   Z_dPhi_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dPhi_stack_11 = new TH1D("VbbHcc_both_Z_dPhi_stack_11","",120,0,4);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(0,0.1096148);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(2,0.001269256);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(3,0.008198668);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(6,0.006761343);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(7,0.005653624);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(8,0.008210084);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(9,0.005871203);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(10,0.001999389);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(11,0.003682377);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(12,0.005418537);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(13,0.003965134);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(16,0.004351951);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(21,0.005534038);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(26,0.006362516);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(28,0.005705165);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(35,0.00283147);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(37,0.00283147);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(47,0.00272295);
   VbbHcc_both_Z_dPhi_stack_11->SetBinContent(87,0.003551429);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(0,0.01799706);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(2,0.001269256);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(3,0.004737377);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(6,0.004814085);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(7,0.003998583);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(8,0.004845291);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(9,0.0041553);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(10,0.001999389);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(11,0.003682377);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(12,0.003836083);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(13,0.003965134);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(16,0.003077294);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(21,0.003913652);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(26,0.004529333);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(28,0.004038324);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(35,0.00283147);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(37,0.00283147);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(47,0.00272295);
   VbbHcc_both_Z_dPhi_stack_11->SetBinError(87,0.003551429);
   VbbHcc_both_Z_dPhi_stack_11->SetEntries(69);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dPhi_stack_11->SetFillColor(ci);
   VbbHcc_both_Z_dPhi_stack_11->GetXaxis()->SetTitle("#Delta#phi(b,b)");
   VbbHcc_both_Z_dPhi_stack_11->GetXaxis()->SetRange(1,120);
   VbbHcc_both_Z_dPhi_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dPhi_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dPhi_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dPhi_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dPhi_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dPhi_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dPhi_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dPhi_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dPhi_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dPhi_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dPhi_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dPhi_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dPhi_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dPhi_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dPhi_both_18->Modified();
   Z_dPhi_both_18->cd();
   Z_dPhi_both_18->SetSelected(Z_dPhi_both_18);
}
