void Sphericity_algo_16()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Tue Aug 22 09:21:53 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2,-267.8748,1.133333,2410.873);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_5 = new TH1D("VbbHcc_algo_Sphericity_stack_5","",25,0,1);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(1,2040.951);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(2,1773.181);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(3,1036.331);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(4,626.7658);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(5,271.9714);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(6,132.8788);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(7,49.28865);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(8,8.402827);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(9,3.263955);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(10,3.169116);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(11,2.489546);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(12,7.45095);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(13,0.7162233);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(14,0.7887262);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(15,0.3810531);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(16,0.06990341);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(17,0.0286276);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(18,4.620989e-06);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(1,50.59174);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(2,50.5403);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(3,38.31279);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(4,29.65673);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(5,14.33628);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(6,10.33063);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(7,8.728658);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(8,1.231189);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(9,0.7070897);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(10,0.8221857);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(11,1.182489);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(12,5.600313);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(13,0.4005934);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(14,0.4436725);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(15,0.1808028);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(16,0.04925569);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(17,0.02490504);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(18,4.620989e-06);
   VbbHcc_algo_Sphericity_stack_5->SetEntries(66273);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Sphericity_stack_5->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_5->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_16->Modified();
   Sphericity_algo_16->cd();
   Sphericity_algo_16->SetSelected(Sphericity_algo_16);
}
