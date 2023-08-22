void Sphericity_algo_17_logY()
{
//=========Macro generated from canvas: Sphericity_algo_17/Sphericity_algo_17
//=========  (Tue Aug 22 09:17:32 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_17 = new TCanvas("Sphericity_algo_17", "Sphericity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_17->SetHighLightColor(2);
   Sphericity_algo_17->Range(-0.2,-1.292462,1.133333,2.117904);
   Sphericity_algo_17->SetFillColor(0);
   Sphericity_algo_17->SetBorderMode(0);
   Sphericity_algo_17->SetBorderSize(2);
   Sphericity_algo_17->SetLogy();
   Sphericity_algo_17->SetLeftMargin(0.15);
   Sphericity_algo_17->SetFrameBorderMode(0);
   Sphericity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_8 = new TH1D("VbbHcc_algo_Sphericity_stack_8","",25,0,1);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(1,31.5732);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(2,31.00736);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(3,16.37364);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(4,11.60965);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(5,8.768016);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(6,3.668928);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(8,0.7202464);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(9,0.2236683);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(1,2.80334);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(2,2.750167);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(3,1.992817);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(4,1.702775);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(5,1.46581);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(6,0.9454316);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(8,0.4173098);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(9,0.2236683);
   VbbHcc_algo_Sphericity_stack_8->SetEntries(443);

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
