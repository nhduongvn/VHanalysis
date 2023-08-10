void Sphericity_both_17_logY()
{
//=========Macro generated from canvas: Sphericity_both_17/Sphericity_both_17
//=========  (Thu Aug 10 12:33:05 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_17 = new TCanvas("Sphericity_both_17", "Sphericity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_17->SetHighLightColor(2);
   Sphericity_both_17->Range(-0.2,-3.089172,1.133333,1.645499);
   Sphericity_both_17->SetFillColor(0);
   Sphericity_both_17->SetBorderMode(0);
   Sphericity_both_17->SetBorderSize(2);
   Sphericity_both_17->SetLogy();
   Sphericity_both_17->SetLeftMargin(0.15);
   Sphericity_both_17->SetFrameBorderMode(0);
   Sphericity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_9 = new TH1D("VbbHcc_both_Sphericity_stack_9","",25,0,1);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(1,7.104899);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(2,7.843008);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(3,5.702978);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(4,4.530403);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(5,3.86982);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(6,3.270612);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(7,2.679479);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(8,2.28216);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(9,1.970443);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(10,1.629653);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(11,1.405152);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(12,1.219413);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(13,0.9561492);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(14,0.8673178);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(15,0.6573526);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(16,0.4732292);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(17,0.4199304);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(18,0.2341919);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(19,0.1598966);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(20,0.06945003);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(21,0.0193814);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(22,0.004845351);
   VbbHcc_both_Sphericity_stack_9->SetBinError(1,0.1071226);
   VbbHcc_both_Sphericity_stack_9->SetBinError(2,0.1125494);
   VbbHcc_both_Sphericity_stack_9->SetBinError(3,0.09597383);
   VbbHcc_both_Sphericity_stack_9->SetBinError(4,0.08554023);
   VbbHcc_both_Sphericity_stack_9->SetBinError(5,0.07905828);
   VbbHcc_both_Sphericity_stack_9->SetBinError(6,0.07268026);
   VbbHcc_both_Sphericity_stack_9->SetBinError(7,0.06578504);
   VbbHcc_both_Sphericity_stack_9->SetBinError(8,0.06071207);
   VbbHcc_both_Sphericity_stack_9->SetBinError(9,0.05641361);
   VbbHcc_both_Sphericity_stack_9->SetBinError(10,0.0513038);
   VbbHcc_both_Sphericity_stack_9->SetBinError(11,0.0476391);
   VbbHcc_both_Sphericity_stack_9->SetBinError(12,0.04437899);
   VbbHcc_both_Sphericity_stack_9->SetBinError(13,0.03929749);
   VbbHcc_both_Sphericity_stack_9->SetBinError(14,0.03742752);
   VbbHcc_both_Sphericity_stack_9->SetBinError(15,0.03258376);
   VbbHcc_both_Sphericity_stack_9->SetBinError(16,0.02764635);
   VbbHcc_both_Sphericity_stack_9->SetBinError(17,0.02604298);
   VbbHcc_both_Sphericity_stack_9->SetBinError(18,0.01944858);
   VbbHcc_both_Sphericity_stack_9->SetBinError(19,0.01607021);
   VbbHcc_both_Sphericity_stack_9->SetBinError(20,0.01059103);
   VbbHcc_both_Sphericity_stack_9->SetBinError(21,0.005594929);
   VbbHcc_both_Sphericity_stack_9->SetBinError(22,0.002797464);
   VbbHcc_both_Sphericity_stack_9->SetEntries(29329);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Sphericity_stack_9->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_9->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_17->Modified();
   Sphericity_both_17->cd();
   Sphericity_both_17->SetSelected(Sphericity_both_17);
}
