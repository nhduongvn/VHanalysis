void Aplanarity_tags_16_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_16/Aplanarity_tags_16
//=========  (Thu Aug 10 12:20:17 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_16 = new TCanvas("Aplanarity_tags_16", "Aplanarity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_16->SetHighLightColor(2);
   Aplanarity_tags_16->Range(-0.2,-2.245964,1.133333,5.079232);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLogy();
   Aplanarity_tags_16->SetLeftMargin(0.15);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_3 = new TH1D("VbbHcc_tags_Aplanarity_stack_3","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(1,11726.38);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(2,1756.594);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(3,476.6547);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(4,172.7946);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(5,80.93426);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(6,39.55713);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(7,23.96158);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(8,11.35179);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(9,7.559199);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(10,4.231685);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(11,3.191136);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(12,1.580174);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(13,1.18858);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(14,0.8990212);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(15,0.7382667);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(16,0.2076928);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(17,0.06131771);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(18,0.2190971);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(1,28.59968);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(2,11.03568);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(3,5.734705);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(4,3.4457);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(5,2.341083);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(6,1.640453);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(7,1.278136);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(8,0.8750996);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(9,0.7129468);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(10,0.5481709);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(11,0.4630586);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(12,0.3311733);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(13,0.2726001);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(14,0.2430513);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(15,0.2266291);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(16,0.1207512);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(17,0.06131771);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(18,0.1291257);
   VbbHcc_tags_Aplanarity_stack_3->SetEntries(221451);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Aplanarity_stack_3->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_16->Modified();
   Aplanarity_tags_16->cd();
   Aplanarity_tags_16->SetSelected(Aplanarity_tags_16);
}
