void Aplanarity_algo_16()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Thu Aug  3 12:24:54 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(-0.2,-4.618951,1.133333,41.57055);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLeftMargin(0.15);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_10 = new TH1D("VbbHcc_algo_Aplanarity_stack_10","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(1,35.192);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(2,4.002599);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(3,0.7740959);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(4,0.1700719);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(5,0.05800349);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(6,0.01754426);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(7,0.006086786);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(8,0.003222416);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(9,0.001790231);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(10,0.001074139);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(11,0.0003580462);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(12,0.0003580462);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(1,0.1122513);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(2,0.03785651);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(3,0.01664819);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(4,0.007803436);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(5,0.004557184);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(6,0.002506323);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(7,0.001476262);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(8,0.001074139);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(9,0.0008006157);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(10,0.0006201542);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(11,0.0003580462);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(12,0.0003580462);
   VbbHcc_algo_Aplanarity_stack_10->SetEntries(112352);

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
