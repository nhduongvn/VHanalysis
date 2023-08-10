void Sphericity_algo_17_logY()
{
//=========Macro generated from canvas: Sphericity_algo_17/Sphericity_algo_17
//=========  (Thu Aug 10 12:21:03 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_17 = new TCanvas("Sphericity_algo_17", "Sphericity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_17->SetHighLightColor(2);
   Sphericity_algo_17->Range(-0.2,-1.594835,1.133333,2.046405);
   Sphericity_algo_17->SetFillColor(0);
   Sphericity_algo_17->SetBorderMode(0);
   Sphericity_algo_17->SetBorderSize(2);
   Sphericity_algo_17->SetLogy();
   Sphericity_algo_17->SetLeftMargin(0.15);
   Sphericity_algo_17->SetFrameBorderMode(0);
   Sphericity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_7 = new TH1D("VbbHcc_algo_Sphericity_stack_7","",25,0,1);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(1,25.01678);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(2,25.39407);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(3,12.17008);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(4,6.142152);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(5,6.412124);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(6,2.345778);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(7,0.6467304);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(8,0.3517797);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(16,0.1175761);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(1,2.686641);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(2,2.670268);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(3,1.834299);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(4,1.305668);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(5,1.354548);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(6,0.7985484);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(7,0.464059);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(8,0.3517797);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(16,0.1175761);
   VbbHcc_algo_Sphericity_stack_7->SetEntries(290);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Sphericity_stack_7->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_7->Draw("HIST");
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
