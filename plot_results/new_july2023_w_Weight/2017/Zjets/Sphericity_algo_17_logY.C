void Sphericity_algo_17_logY()
{
//=========Macro generated from canvas: Sphericity_algo_17/Sphericity_algo_17
//=========  (Thu Aug 10 12:21:03 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_17 = new TCanvas("Sphericity_algo_17", "Sphericity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_17->SetHighLightColor(2);
   Sphericity_algo_17->Range(-0.2,-2.50374,1.133333,4.463712);
   Sphericity_algo_17->SetFillColor(0);
   Sphericity_algo_17->SetBorderMode(0);
   Sphericity_algo_17->SetBorderSize(2);
   Sphericity_algo_17->SetLogy();
   Sphericity_algo_17->SetLeftMargin(0.15);
   Sphericity_algo_17->SetFrameBorderMode(0);
   Sphericity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_4 = new TH1D("VbbHcc_algo_Sphericity_stack_4","",25,0,1);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(1,3086.154);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(2,2934.204);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(3,1722.279);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(4,1011.725);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(5,506.478);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(6,217.2776);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(7,67.12396);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(8,20.37021);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(9,8.449962);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(10,4.327412);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(11,0.9172146);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(12,1.041448);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(13,0.7032459);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(14,0.3442469);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(15,0.6633152);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(16,3.419472);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(17,0.7173523);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(18,0.04054797);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(19,0.03119144);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(1,43.23733);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(2,44.66828);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(3,34.5625);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(4,27.216);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(5,16.64984);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(6,10.18415);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(7,5.322224);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(8,3.271771);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(9,1.606985);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(10,1.160623);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(11,0.2571358);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(12,0.3971429);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(13,0.2281183);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(14,0.163883);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(15,0.214612);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(16,3.267154);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(17,0.4104698);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(18,0.04054797);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(19,0.03119144);
   VbbHcc_algo_Sphericity_stack_4->SetEntries(54522);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Sphericity_stack_4->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_4->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_17->Modified();
   Sphericity_algo_17->cd();
   Sphericity_algo_17->SetSelected(Sphericity_algo_17);
}
