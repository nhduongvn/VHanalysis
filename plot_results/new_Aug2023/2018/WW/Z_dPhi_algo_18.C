void Z_dPhi_algo_18()
{
//=========Macro generated from canvas: Z_dPhi_algo_18/Z_dPhi_algo_18
//=========  (Tue Aug 22 09:21:32 2023) by ROOT version 6.14/09
   TCanvas *Z_dPhi_algo_18 = new TCanvas("Z_dPhi_algo_18", "Z_dPhi_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dPhi_algo_18->SetHighLightColor(2);
   Z_dPhi_algo_18->Range(-0.8,-0.1725957,4.533333,1.553361);
   Z_dPhi_algo_18->SetFillColor(0);
   Z_dPhi_algo_18->SetBorderMode(0);
   Z_dPhi_algo_18->SetBorderSize(2);
   Z_dPhi_algo_18->SetLeftMargin(0.15);
   Z_dPhi_algo_18->SetFrameBorderMode(0);
   Z_dPhi_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_dPhi_stack_6 = new TH1D("VbbHcc_algo_Z_dPhi_stack_6","",120,0,4);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinContent(0,24.48268);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinContent(3,0.7240563);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinContent(4,0.5883291);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinContent(5,0.7561791);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinContent(6,0.5574209);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinContent(7,0.555095);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinContent(9,0.5606153);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinContent(10,0.5692831);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinContent(12,1.315014);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinContent(13,0.7455435);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinContent(16,0.3245155);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinContent(17,0.5797773);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinContent(23,0.5520734);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinContent(24,0.5567447);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinContent(26,0.5527369);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinContent(28,0.5234306);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinContent(32,0.8161531);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinContent(42,0.528636);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinContent(51,0.4939036);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinContent(56,0.7643472);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinContent(58,0.7520305);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinContent(66,0.8153595);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinContent(83,0.3580201);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinContent(87,0.784061);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinContent(91,0.4321114);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinError(0,4.66608);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinError(3,0.7240563);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinError(4,0.5883291);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinError(5,0.7561791);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinError(6,0.5574209);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinError(7,0.555095);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinError(9,0.5606153);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinError(10,0.5692831);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinError(12,0.9402704);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinError(13,0.7455435);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinError(16,0.3245155);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinError(17,0.5797773);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinError(23,0.5520734);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinError(24,0.5567447);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinError(26,0.5527369);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinError(28,0.5234306);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinError(32,0.8161531);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinError(42,0.528636);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinError(51,0.4939036);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinError(56,0.7643472);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinError(58,0.7520305);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinError(66,0.8153595);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinError(83,0.3580201);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinError(87,0.784061);
   VbbHcc_algo_Z_dPhi_stack_6->SetBinError(91,0.4321114);
   VbbHcc_algo_Z_dPhi_stack_6->SetEntries(60);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dPhi_stack_6->SetFillColor(ci);
   VbbHcc_algo_Z_dPhi_stack_6->GetXaxis()->SetTitle("#Delta#phi(b,b)");
   VbbHcc_algo_Z_dPhi_stack_6->GetXaxis()->SetRange(1,120);
   VbbHcc_algo_Z_dPhi_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dPhi_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dPhi_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dPhi_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dPhi_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dPhi_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dPhi_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dPhi_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dPhi_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dPhi_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dPhi_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dPhi_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dPhi_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dPhi_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dPhi_algo_18->Modified();
   Z_dPhi_algo_18->cd();
   Z_dPhi_algo_18->SetSelected(Z_dPhi_algo_18);
}
