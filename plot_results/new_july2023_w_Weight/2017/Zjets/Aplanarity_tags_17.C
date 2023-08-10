void Aplanarity_tags_17()
{
//=========Macro generated from canvas: Aplanarity_tags_17/Aplanarity_tags_17
//=========  (Thu Aug 10 12:23:36 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_17 = new TCanvas("Aplanarity_tags_17", "Aplanarity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_17->SetHighLightColor(2);
   Aplanarity_tags_17->Range(-0.2,-300.311,1.133333,2702.799);
   Aplanarity_tags_17->SetFillColor(0);
   Aplanarity_tags_17->SetBorderMode(0);
   Aplanarity_tags_17->SetBorderSize(2);
   Aplanarity_tags_17->SetLeftMargin(0.15);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_4 = new TH1D("VbbHcc_tags_Aplanarity_stack_4","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(1,2288.084);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(2,262.7829);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(3,61.03365);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(4,18.16507);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(5,9.608163);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(6,4.625436);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(7,3.256347);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(8,1.613274);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(9,0.5978664);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(10,0.9378458);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(11,0.1768701);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(12,0.265414);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(13,0.3330272);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(15,0.06924107);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(16,0.109069);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(1,33.77482);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(2,13.57692);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(3,6.02462);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(4,1.935866);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(5,1.530772);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(6,0.9927903);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(7,0.9164441);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(8,0.5774843);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(9,0.2303321);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(10,0.4535111);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(11,0.1251095);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(12,0.1549342);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(13,0.1694482);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(15,0.06924107);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(16,0.109069);
   VbbHcc_tags_Aplanarity_stack_4->SetEntries(17505);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Aplanarity_stack_4->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_17->Modified();
   Aplanarity_tags_17->cd();
   Aplanarity_tags_17->SetSelected(Aplanarity_tags_17);
}
