void Sphericity_algo_18()
{
//=========Macro generated from canvas: Sphericity_algo_18/Sphericity_algo_18
//=========  (Thu Aug 10 12:28:43 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_18 = new TCanvas("Sphericity_algo_18", "Sphericity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_18->SetHighLightColor(2);
   Sphericity_algo_18->Range(-0.2,-566.8843,1.133333,5101.959);
   Sphericity_algo_18->SetFillColor(0);
   Sphericity_algo_18->SetBorderMode(0);
   Sphericity_algo_18->SetBorderSize(2);
   Sphericity_algo_18->SetLeftMargin(0.15);
   Sphericity_algo_18->SetFrameBorderMode(0);
   Sphericity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_2 = new TH1D("VbbHcc_algo_Sphericity_stack_2","",25,0,1);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(1,4319.118);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(2,4058.894);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(3,2295.566);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(4,1313.041);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(5,704.4256);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(6,329.3339);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(7,135.7194);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(8,59.52779);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(9,30.10043);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(10,13.10901);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(11,11.11001);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(12,6.555405);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(13,4.2521);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(14,3.727698);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(15,2.367735);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(16,2.404006);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(17,1.726232);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(18,0.512072);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(19,0.2067329);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(20,0.3023572);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(21,0.05476569);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(1,26.12869);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(2,25.38865);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(3,19.05153);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(4,14.523);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(5,10.63298);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(6,7.302097);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(7,4.771531);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(8,3.081707);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(9,2.199811);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(10,1.300445);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(11,1.334262);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(12,1.01126);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(13,0.7761785);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(14,0.7190067);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(15,0.6100202);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(16,0.610911);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(17,0.4711346);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(18,0.290186);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(19,0.1035501);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(20,0.3023572);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(21,0.05476569);
   VbbHcc_algo_Sphericity_stack_2->SetEntries(162879);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->Draw("HIST");
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
