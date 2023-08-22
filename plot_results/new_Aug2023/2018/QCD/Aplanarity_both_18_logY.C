void Aplanarity_both_18_logY()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Tue Aug 22 09:18:49 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(-0.2,-0.1642903,1.133333,6.025872);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetLogy();
   Aplanarity_both_18->SetLeftMargin(0.15);
   Aplanarity_both_18->SetFrameBorderMode(0);
   Aplanarity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,134681.1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,34707.82);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,19222.52);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,13644.3);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,5977.99);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,2608.145);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,2666.018);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,1098.095);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,4029.542);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,663.0852);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,300.0613);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,919.038);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,525.7964);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,124.2436);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,575.5873);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,84.9854);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,5.698439);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(19,32.81787);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,5305.978);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,2696.838);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,2984.951);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,1977.598);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,1608.9);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,524.2106);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,752.6633);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,394.0937);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,2295.956);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,397.7487);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,91.77863);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,693.3174);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,332.6342);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,53.40315);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,530.8954);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,54.49469);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,5.698439);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(19,32.81787);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(9895);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_18->Modified();
   Aplanarity_both_18->cd();
   Aplanarity_both_18->SetSelected(Aplanarity_both_18);
}
