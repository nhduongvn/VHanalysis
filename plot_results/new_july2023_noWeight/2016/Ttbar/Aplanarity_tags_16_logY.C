void Aplanarity_tags_16_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_16/Aplanarity_tags_16
//=========  (Thu Aug 10 12:31:33 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_16 = new TCanvas("Aplanarity_tags_16", "Aplanarity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_16->SetHighLightColor(2);
   Aplanarity_tags_16->Range(-0.2,-2.181622,1.133333,5.053188);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLogy();
   Aplanarity_tags_16->SetLeftMargin(0.15);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_3 = new TH1D("VbbHcc_tags_Aplanarity_stack_3","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(1,11276.08);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(2,1684.493);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(3,458.1392);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(4,166.7016);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(5,76.93657);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(6,38.53233);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(7,23.15818);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(8,11.07834);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(9,7.635241);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(10,4.037399);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(11,3.166912);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(12,1.607094);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(13,1.155157);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(14,0.8975848);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(15,0.8403192);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(16,0.1176016);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(17,0.1392898);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(18,0.1872465);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(19,0.06964491);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(1,26.64654);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(2,10.28469);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(3,5.353305);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(4,3.23256);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(5,2.183997);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(6,1.549867);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(7,1.207412);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(8,0.8254284);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(9,0.6914531);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(10,0.5048567);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(11,0.4429273);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(12,0.3200222);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(13,0.2578314);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(14,0.2365797);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(15,0.2353798);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(16,0.0845592);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(17,0.09849278);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(18,0.1095476);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(19,0.06964491);
   VbbHcc_tags_Aplanarity_stack_3->SetEntries(225965);

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
