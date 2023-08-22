void Aplanarity_algo_16_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Tue Aug 22 09:17:34 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(-0.2,-4.964811,1.133333,2.444573);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLogy();
   Aplanarity_algo_16->SetLeftMargin(0.15);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_10 = new TH1D("VbbHcc_algo_Aplanarity_stack_10","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(1,26.67386);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(2,2.967375);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(3,0.5799245);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(4,0.1225314);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(5,0.04359606);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(6,0.01086407);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(7,0.004177864);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(8,0.002334091);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(9,0.001483263);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(10,0.0006629237);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(11,0.0002360098);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(12,0.000119442);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(1,0.09387418);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(2,0.03099859);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(3,0.01369612);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(4,0.006244898);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(5,0.003726795);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(6,0.001852013);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(7,0.00112517);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(8,0.0008323871);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(9,0.0006711174);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(10,0.0004246696);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(11,0.0002360098);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(12,0.000119442);
   VbbHcc_algo_Aplanarity_stack_10->SetEntries(94157);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Aplanarity_stack_10->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_10->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_16->Modified();
   Aplanarity_algo_16->cd();
   Aplanarity_algo_16->SetSelected(Aplanarity_algo_16);
}
