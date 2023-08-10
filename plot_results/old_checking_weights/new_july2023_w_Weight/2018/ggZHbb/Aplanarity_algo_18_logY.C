void Aplanarity_algo_18_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_18/Aplanarity_algo_18
//=========  (Thu Aug 10 10:42:30 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_18 = new TCanvas("Aplanarity_algo_18", "Aplanarity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_18->SetHighLightColor(2);
   Aplanarity_algo_18->Range(-0.2,-4.712903,1.133333,2.824652);
   Aplanarity_algo_18->SetFillColor(0);
   Aplanarity_algo_18->SetBorderMode(0);
   Aplanarity_algo_18->SetBorderSize(2);
   Aplanarity_algo_18->SetLogy();
   Aplanarity_algo_18->SetLeftMargin(0.15);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_10 = new TH1D("VbbHcc_algo_Aplanarity_stack_10","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(1,62.13663);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(2,7.070632);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(3,1.357127);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(4,0.2934593);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(5,0.09959767);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(6,0.0292358);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(7,0.009956219);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(8,0.005146865);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(9,0.002820744);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(10,0.001232015);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(11,0.0004500496);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(12,0.0002197265);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(1,0.1999829);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(2,0.06745093);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(3,0.0295041);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(4,0.01364789);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(5,0.007901695);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(6,0.004246857);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(7,0.002464048);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(8,0.001735126);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(9,0.001275569);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(10,0.0007936414);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(11,0.0004500496);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(12,0.0002197265);
   VbbHcc_algo_Aplanarity_stack_10->SetEntries(112076);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_18->Modified();
   Aplanarity_algo_18->cd();
   Aplanarity_algo_18->SetSelected(Aplanarity_algo_18);
}
