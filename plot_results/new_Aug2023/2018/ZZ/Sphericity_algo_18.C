void Sphericity_algo_18()
{
//=========Macro generated from canvas: Sphericity_algo_18/Sphericity_algo_18
//=========  (Tue Aug 22 09:21:55 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_18 = new TCanvas("Sphericity_algo_18", "Sphericity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_18->SetHighLightColor(2);
   Sphericity_algo_18->Range(-0.2,-7.729343,1.133333,69.56408);
   Sphericity_algo_18->SetFillColor(0);
   Sphericity_algo_18->SetBorderMode(0);
   Sphericity_algo_18->SetBorderSize(2);
   Sphericity_algo_18->SetLeftMargin(0.15);
   Sphericity_algo_18->SetFrameBorderMode(0);
   Sphericity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_8 = new TH1D("VbbHcc_algo_Sphericity_stack_8","",25,0,1);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(1,58.89023);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(2,42.10016);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(3,24.50113);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(4,14.84873);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(5,10.03354);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(6,5.858991);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(7,0.8900214);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(8,0.2743643);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(11,0.275309);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(1,4.287907);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(2,3.540766);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(3,2.690238);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(4,2.193994);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(5,1.743442);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(6,1.330304);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(7,0.5182105);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(8,0.2743643);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(11,0.275309);
   VbbHcc_algo_Sphericity_stack_8->SetEntries(543);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Sphericity_stack_8->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_18->Modified();
   Sphericity_algo_18->cd();
   Sphericity_algo_18->SetSelected(Sphericity_algo_18);
}
