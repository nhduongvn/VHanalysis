void Aplanarity_both_17()
{
//=========Macro generated from canvas: Aplanarity_both_17/Aplanarity_both_17
//=========  (Thu Aug  3 12:26:23 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_17 = new TCanvas("Aplanarity_both_17", "Aplanarity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_17->SetHighLightColor(2);
   Aplanarity_both_17->Range(-0.2,-198.4644,1.133333,1786.18);
   Aplanarity_both_17->SetFillColor(0);
   Aplanarity_both_17->SetBorderMode(0);
   Aplanarity_both_17->SetBorderSize(2);
   Aplanarity_both_17->SetLeftMargin(0.15);
   Aplanarity_both_17->SetFrameBorderMode(0);
   Aplanarity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_4 = new TH1D("VbbHcc_both_Aplanarity_stack_4","",50,0,1);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(1,1512.11);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(2,430.5418);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(3,189.7988);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(4,118.7531);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(5,63.37857);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(6,53.30532);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(7,28.44735);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(8,20.96689);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(9,13.86637);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(10,10.65799);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(11,3.981589);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(12,3.318491);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(13,3.101888);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(14,1.363297);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(15,1.146694);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(16,0.1326196);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(17,0.1746112);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(19,0.1083014);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(1,24.67439);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(2,13.99424);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(3,8.299835);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(4,8.249067);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(5,5.287608);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(6,6.258686);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(7,3.607598);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(8,3.434561);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(9,1.861167);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(10,3.012561);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(11,0.9535356);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(12,0.9301936);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(13,0.9174976);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(14,0.5540636);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(15,0.5324735);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(16,0.09377623);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(17,0.1269889);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(19,0.1083014);
   VbbHcc_both_Aplanarity_stack_4->SetEntries(17765);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Aplanarity_stack_4->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_4->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_17->Modified();
   Aplanarity_both_17->cd();
   Aplanarity_both_17->SetSelected(Aplanarity_both_17);
}
