void Sphericity_algo_18_logY()
{
//=========Macro generated from canvas: Sphericity_algo_18/Sphericity_algo_18
//=========  (Thu Aug 10 12:32:17 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_18 = new TCanvas("Sphericity_algo_18", "Sphericity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_18->SetHighLightColor(2);
   Sphericity_algo_18->Range(-0.2,-2.475918,1.133333,5.992149);
   Sphericity_algo_18->SetFillColor(0);
   Sphericity_algo_18->SetBorderMode(0);
   Sphericity_algo_18->SetBorderSize(2);
   Sphericity_algo_18->SetLogy();
   Sphericity_algo_18->SetLeftMargin(0.15);
   Sphericity_algo_18->SetFrameBorderMode(0);
   Sphericity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_3 = new TH1D("VbbHcc_algo_Sphericity_stack_3","",25,0,1);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(1,73366.94);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(2,73755.39);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(3,39398.44);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(4,21873.67);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(5,11757.64);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(6,5642.331);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(7,2442.3);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(8,1069.744);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(9,519.6354);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(10,278.3159);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(11,165.0585);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(12,102.2654);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(13,65.95218);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(14,46.07306);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(15,30.18992);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(16,22.16706);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(17,14.15536);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(18,10.93797);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(19,5.745606);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(20,2.73738);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(21,0.9718764);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(22,0.3155173);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(23,0.04698062);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(1,67.07186);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(2,67.44408);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(3,49.21915);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(4,36.65143);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(5,26.84165);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(6,18.5208);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(7,12.0646);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(8,7.903623);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(9,5.442726);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(10,3.970263);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(11,3.047407);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(12,2.402956);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(13,1.916104);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(14,1.619076);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(15,1.309207);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(16,1.119374);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(17,0.8969716);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(18,0.7773557);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(19,0.5829351);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(20,0.3988566);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(21,0.2398889);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(22,0.132039);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(23,0.04698062);
   VbbHcc_algo_Sphericity_stack_3->SetEntries(3891102);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Sphericity_stack_3->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_3->Draw("HIST");
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
