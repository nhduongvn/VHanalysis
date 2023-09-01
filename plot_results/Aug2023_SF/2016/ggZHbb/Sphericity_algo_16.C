#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_algo_16()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Fri Sep  1 13:23:38 2023) by ROOT version 6.28/04
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2,-1.382284,1.133333,12.44055);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity__583 = new TH1D("VbbHcc_algo_Sphericity__583","",25,0,1);
   VbbHcc_algo_Sphericity__583->SetBinContent(1,10.53168);
   VbbHcc_algo_Sphericity__583->SetBinContent(2,10.52263);
   VbbHcc_algo_Sphericity__583->SetBinContent(3,5.941078);
   VbbHcc_algo_Sphericity__583->SetBinContent(4,3.642351);
   VbbHcc_algo_Sphericity__583->SetBinContent(5,2.072899);
   VbbHcc_algo_Sphericity__583->SetBinContent(6,0.9806725);
   VbbHcc_algo_Sphericity__583->SetBinContent(7,0.3287063);
   VbbHcc_algo_Sphericity__583->SetBinContent(8,0.1169956);
   VbbHcc_algo_Sphericity__583->SetBinContent(9,0.03971541);
   VbbHcc_algo_Sphericity__583->SetBinContent(10,0.0287661);
   VbbHcc_algo_Sphericity__583->SetBinContent(11,0.0121784);
   VbbHcc_algo_Sphericity__583->SetBinContent(12,0.007407818);
   VbbHcc_algo_Sphericity__583->SetBinContent(13,0.006580032);
   VbbHcc_algo_Sphericity__583->SetBinContent(14,0.002874895);
   VbbHcc_algo_Sphericity__583->SetBinContent(15,0.002863543);
   VbbHcc_algo_Sphericity__583->SetBinContent(16,0.00123575);
   VbbHcc_algo_Sphericity__583->SetBinContent(17,0.002136852);
   VbbHcc_algo_Sphericity__583->SetBinContent(18,0.001051511);
   VbbHcc_algo_Sphericity__583->SetBinContent(19,0.0009095463);
   VbbHcc_algo_Sphericity__583->SetBinError(1,0.05797729);
   VbbHcc_algo_Sphericity__583->SetBinError(2,0.05763467);
   VbbHcc_algo_Sphericity__583->SetBinError(3,0.04336446);
   VbbHcc_algo_Sphericity__583->SetBinError(4,0.03405874);
   VbbHcc_algo_Sphericity__583->SetBinError(5,0.02573357);
   VbbHcc_algo_Sphericity__583->SetBinError(6,0.01774635);
   VbbHcc_algo_Sphericity__583->SetBinError(7,0.01026973);
   VbbHcc_algo_Sphericity__583->SetBinError(8,0.006157636);
   VbbHcc_algo_Sphericity__583->SetBinError(9,0.003505167);
   VbbHcc_algo_Sphericity__583->SetBinError(10,0.002977275);
   VbbHcc_algo_Sphericity__583->SetBinError(11,0.001896866);
   VbbHcc_algo_Sphericity__583->SetBinError(12,0.001451347);
   VbbHcc_algo_Sphericity__583->SetBinError(13,0.00141396);
   VbbHcc_algo_Sphericity__583->SetBinError(14,0.0008714033);
   VbbHcc_algo_Sphericity__583->SetBinError(15,0.0008900688);
   VbbHcc_algo_Sphericity__583->SetBinError(16,0.0005382876);
   VbbHcc_algo_Sphericity__583->SetBinError(17,0.0008236336);
   VbbHcc_algo_Sphericity__583->SetBinError(18,0.0006188037);
   VbbHcc_algo_Sphericity__583->SetBinError(19,0.0004588776);
   VbbHcc_algo_Sphericity__583->SetEntries(112352);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Sphericity__583->SetFillColor(ci);
   VbbHcc_algo_Sphericity__583->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity__583->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity__583->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__583->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity__583->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__583->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__583->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__583->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__583->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity__583->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__583->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_16->Modified();
   Sphericity_algo_16->cd();
   Sphericity_algo_16->SetSelected(Sphericity_algo_16);
}
