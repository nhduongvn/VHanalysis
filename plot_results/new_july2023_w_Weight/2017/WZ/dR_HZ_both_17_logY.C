void dR_HZ_both_17_logY()
{
//=========Macro generated from canvas: dR_HZ_both_17/dR_HZ_both_17
//=========  (Thu Aug 10 12:21:42 2023) by ROOT version 6.14/09
   TCanvas *dR_HZ_both_17 = new TCanvas("dR_HZ_both_17", "dR_HZ_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   dR_HZ_both_17->SetHighLightColor(2);
   dR_HZ_both_17->Range(-1.2,-1.188185,6.8,0.4248648);
   dR_HZ_both_17->SetFillColor(0);
   dR_HZ_both_17->SetBorderMode(0);
   dR_HZ_both_17->SetBorderSize(2);
   dR_HZ_both_17->SetLogy();
   dR_HZ_both_17->SetLeftMargin(0.15);
   dR_HZ_both_17->SetFrameBorderMode(0);
   dR_HZ_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_dR_HZ_stack_7 = new TH1D("VbbHcc_both_dR_HZ_stack_7","",60,0,6);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(6,0.2900543);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(7,0.2655071);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(9,0.3136654);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(10,0.5983593);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(14,0.5295246);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(15,0.2572919);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(16,0.3317125);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(18,0.3138408);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(19,0.1879968);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(21,0.9683023);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(28,0.7064701);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(30,0.2891015);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(32,0.7264345);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(34,0.1940007);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(37,0.2948417);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(38,0.2861422);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(55,0.2715318);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(57,0.3047304);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(6,0.2900543);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(7,0.2655071);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(9,0.3136654);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(10,0.4233439);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(14,0.3768401);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(15,0.2572919);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(16,0.3317125);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(18,0.3138408);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(19,0.1879968);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(21,0.5601366);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(28,0.4194114);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(30,0.2891015);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(32,0.4250687);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(34,0.1940007);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(37,0.2948417);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(38,0.2861422);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(55,0.2715318);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(57,0.3047304);
   VbbHcc_both_dR_HZ_stack_7->SetEntries(26);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_dR_HZ_stack_7->SetFillColor(ci);
   VbbHcc_both_dR_HZ_stack_7->GetXaxis()->SetTitle("#DeltaR_{ZH}");
   VbbHcc_both_dR_HZ_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_dR_HZ_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_dR_HZ_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_dR_HZ_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_dR_HZ_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_dR_HZ_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_dR_HZ_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_dR_HZ_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_dR_HZ_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_dR_HZ_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_dR_HZ_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_dR_HZ_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_dR_HZ_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_dR_HZ_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_dR_HZ_stack_7->Draw("HIST");
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
