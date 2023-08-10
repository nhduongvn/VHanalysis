void Aplanarity_both_16_logY()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Thu Aug 10 12:21:51 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2,-1.833704,1.133333,6.129041);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLogy();
   Aplanarity_both_16->SetLeftMargin(0.15);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,113558.1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,31361.47);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,18054.19);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,6776.331);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,6202.575);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,4160.451);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,3054.805);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,1232.582);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,858.1481);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,490.4321);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,657.5793);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,49.52582);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,73.58862);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,103.6704);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,31.59457);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,0.1834851);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,7.115152);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,4.527797);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,6438.866);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,3203.046);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,2945.251);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,1042.023);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,1856.355);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,924.0626);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,1587.716);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,494.7305);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,409.5096);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,279.6582);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,368.0673);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,29.44491);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,36.40722);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,40.53945);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,27.62419);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,0.1834851);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,7.115152);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,4.527797);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(9914);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_16->Modified();
   Aplanarity_both_16->cd();
   Aplanarity_both_16->SetSelected(Aplanarity_both_16);
}
