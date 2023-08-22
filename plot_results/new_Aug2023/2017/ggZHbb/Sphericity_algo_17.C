void Sphericity_algo_17()
{
//=========Macro generated from canvas: Sphericity_algo_17/Sphericity_algo_17
//=========  (Tue Aug 22 09:21:54 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_17 = new TCanvas("Sphericity_algo_17", "Sphericity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_17->SetHighLightColor(2);
   Sphericity_algo_17->Range(-0.2,-1.42127,1.133333,12.79143);
   Sphericity_algo_17->SetFillColor(0);
   Sphericity_algo_17->SetBorderMode(0);
   Sphericity_algo_17->SetBorderSize(2);
   Sphericity_algo_17->SetLeftMargin(0.15);
   Sphericity_algo_17->SetFrameBorderMode(0);
   Sphericity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_10 = new TH1D("VbbHcc_algo_Sphericity_stack_10","",25,0,1);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(1,10.82872);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(2,10.82576);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(3,6.099177);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(4,3.744092);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(5,2.13671);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(6,1.015169);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(7,0.3347831);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(8,0.1168556);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(9,0.04116187);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(10,0.03018965);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(11,0.01399592);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(12,0.007092851);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(13,0.007517725);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(14,0.00279373);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(15,0.002455599);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(16,0.001628482);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(17,0.00252993);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(18,0.0004217808);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(19,0.00112141);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(1,0.06444165);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(2,0.06405249);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(3,0.048186);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(4,0.03786216);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(5,0.02864351);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(6,0.01981122);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(7,0.01132229);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(8,0.006652976);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(9,0.003905824);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(10,0.00336102);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(11,0.002267396);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(12,0.001577967);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(13,0.001661697);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(14,0.0009467166);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(15,0.0008497964);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(16,0.0007058213);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(17,0.0009640998);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(18,0.0004217808);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(19,0.0005629673);
   VbbHcc_algo_Sphericity_stack_10->SetEntries(94157);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Sphericity_stack_10->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_10->Draw("HIST");
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
