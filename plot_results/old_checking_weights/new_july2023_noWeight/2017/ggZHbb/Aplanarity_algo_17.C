void Aplanarity_algo_17()
{
//=========Macro generated from canvas: Aplanarity_algo_17/Aplanarity_algo_17
//=========  (Thu Aug  3 12:24:55 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_17 = new TCanvas("Aplanarity_algo_17", "Aplanarity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_17->SetHighLightColor(2);
   Aplanarity_algo_17->Range(-0.2,-5.348849,1.133333,48.13963);
   Aplanarity_algo_17->SetFillColor(0);
   Aplanarity_algo_17->SetBorderMode(0);
   Aplanarity_algo_17->SetBorderSize(2);
   Aplanarity_algo_17->SetLeftMargin(0.15);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_10 = new TH1D("VbbHcc_algo_Aplanarity_stack_10","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(1,40.75313);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(2,4.635099);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(3,0.8964204);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(4,0.1969471);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(5,0.06716934);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(6,0.02031665);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(7,0.007048634);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(8,0.00373163);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(9,0.002073128);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(10,0.001243877);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(11,0.0004146255);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(12,0.0004146255);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(1,0.1299896);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(2,0.04383869);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(3,0.01927897);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(4,0.009036554);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(5,0.005277322);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(6,0.002902379);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(7,0.001709545);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(8,0.001243877);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(9,0.0009271309);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(10,0.0007181525);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(11,0.0004146255);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(12,0.0004146255);
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_17->Modified();
   Aplanarity_algo_17->cd();
   Aplanarity_algo_17->SetSelected(Aplanarity_algo_17);
}
