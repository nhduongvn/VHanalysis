void Aplanarity_both_17()
{
//=========Macro generated from canvas: Aplanarity_both_17/Aplanarity_both_17
//=========  (Tue Aug 22 09:23:18 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_17 = new TCanvas("Aplanarity_both_17", "Aplanarity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_17->SetHighLightColor(2);
   Aplanarity_both_17->Range(-0.2,-1.171461,1.133333,10.54314);
   Aplanarity_both_17->SetFillColor(0);
   Aplanarity_both_17->SetBorderMode(0);
   Aplanarity_both_17->SetBorderSize(2);
   Aplanarity_both_17->SetLeftMargin(0.15);
   Aplanarity_both_17->SetFrameBorderMode(0);
   Aplanarity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_10 = new TH1D("VbbHcc_both_Aplanarity_stack_10","",50,0,1);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(1,8.925413);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(2,2.949465);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(3,1.527879);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(4,0.8966594);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(5,0.5622014);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(6,0.3595202);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(7,0.2493716);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(8,0.1796035);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(9,0.1106672);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(10,0.07487223);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(11,0.04147168);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(12,0.03687771);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(13,0.02489949);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(14,0.01883024);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(15,0.005290926);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(16,0.004959349);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(17,0.004610623);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(18,0.0007293015);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(19,0.001594355);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(21,0.0003480914);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(1,0.05911572);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(2,0.03377771);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(3,0.02428677);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(4,0.01856807);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(5,0.01470762);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(6,0.01172774);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(7,0.00976643);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(8,0.008289277);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(9,0.006496538);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(10,0.005339579);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(11,0.003931112);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(12,0.003779043);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(13,0.003071934);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(14,0.002658745);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(15,0.001420727);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(16,0.001384699);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(17,0.001292355);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(18,0.0005212042);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(19,0.0008000887);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(21,0.0003480914);
   VbbHcc_both_Aplanarity_stack_10->SetEntries(41891);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Aplanarity_stack_10->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_10->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_17->Modified();
   Aplanarity_both_17->cd();
   Aplanarity_both_17->SetSelected(Aplanarity_both_17);
}
