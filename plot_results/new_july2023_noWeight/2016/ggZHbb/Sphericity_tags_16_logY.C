void Sphericity_tags_16_logY()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Thu Aug 10 12:31:32 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_16->SetHighLightColor(2);
   Sphericity_tags_16->Range(-0.2,-4.344983,1.133333,1.633934);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetLogy();
   Sphericity_tags_16->SetLeftMargin(0.15);
   Sphericity_tags_16->SetFrameBorderMode(0);
   Sphericity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_10 = new TH1D("VbbHcc_tags_Sphericity_stack_10","",25,0,1);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(1,5.734468);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(2,4.799251);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(3,2.65348);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(4,1.741895);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(5,1.040124);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(6,0.5929245);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(7,0.3107841);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(8,0.1772329);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(9,0.1335512);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(10,0.09846271);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(11,0.06623855);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(12,0.05513912);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(13,0.04403968);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(14,0.03473048);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(15,0.03401439);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(16,0.02112473);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(17,0.01539599);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(18,0.0139638);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(19,0.006086786);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(20,0.001432185);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(21,0.001074139);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(22,0.0007160924);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(23,0.0003580462);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(1,0.0453123);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(2,0.04145303);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(3,0.03082318);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(4,0.02497356);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(5,0.01929799);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(6,0.01457033);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(7,0.0105487);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(8,0.007966025);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(9,0.006915021);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(10,0.005937525);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(11,0.004869955);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(12,0.004443237);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(13,0.003970925);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(14,0.003526346);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(15,0.003489803);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(16,0.002750205);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(17,0.002347866);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(18,0.002235998);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(19,0.001476262);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(20,0.0007160924);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(21,0.0006201542);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(22,0.0005063538);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(23,0.0003580462);
   VbbHcc_tags_Sphericity_stack_10->SetEntries(49090);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Sphericity_stack_10->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_10->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_16->Modified();
   Sphericity_tags_16->cd();
   Sphericity_tags_16->SetSelected(Sphericity_tags_16);
}
