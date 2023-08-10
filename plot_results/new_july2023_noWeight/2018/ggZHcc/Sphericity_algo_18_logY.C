void Sphericity_algo_18_logY()
{
//=========Macro generated from canvas: Sphericity_algo_18/Sphericity_algo_18
//=========  (Thu Aug 10 12:32:17 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_18 = new TCanvas("Sphericity_algo_18", "Sphericity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_18->SetHighLightColor(2);
   Sphericity_algo_18->Range(-0.2,-4.222257,1.133333,-0.2437503);
   Sphericity_algo_18->SetFillColor(0);
   Sphericity_algo_18->SetBorderMode(0);
   Sphericity_algo_18->SetBorderSize(2);
   Sphericity_algo_18->SetLogy();
   Sphericity_algo_18->SetLeftMargin(0.15);
   Sphericity_algo_18->SetFrameBorderMode(0);
   Sphericity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_12 = new TH1D("VbbHcc_algo_Sphericity_stack_12","",25,0,1);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(1,0.1177651);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(2,0.120462);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(3,0.06142964);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(4,0.04315058);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(5,0.02247426);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(6,0.007791077);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(7,0.003895538);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(8,0.002097598);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(9,0.0002996568);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(10,0.0002996568);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(11,0.0002996568);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(12,0.0002996568);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(13,0.0002996568);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(1,0.005940465);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(2,0.0060081);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(3,0.004290432);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(4,0.003595882);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(5,0.002595104);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(6,0.001527956);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(7,0.001080428);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(8,0.0007928174);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(9,0.0002996568);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(10,0.0002996568);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(11,0.0002996568);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(12,0.0002996568);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(13,0.0002996568);
   VbbHcc_algo_Sphericity_stack_12->SetEntries(1270);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Sphericity_stack_12->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_12->Draw("HIST");
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
