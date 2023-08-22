void Aplanarity_both_17_logY()
{
//=========Macro generated from canvas: Aplanarity_both_17/Aplanarity_both_17
//=========  (Tue Aug 22 09:18:49 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_17 = new TCanvas("Aplanarity_both_17", "Aplanarity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_17->SetHighLightColor(2);
   Aplanarity_both_17->Range(-0.2,-2.332321,1.133333,5.067525);
   Aplanarity_both_17->SetFillColor(0);
   Aplanarity_both_17->SetBorderMode(0);
   Aplanarity_both_17->SetBorderSize(2);
   Aplanarity_both_17->SetLogy();
   Aplanarity_both_17->SetLeftMargin(0.15);
   Aplanarity_both_17->SetFrameBorderMode(0);
   Aplanarity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_3 = new TH1D("VbbHcc_both_Aplanarity_stack_3","",50,0,1);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(1,11219.97);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(2,3689.833);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(3,1798.054);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(4,1041.806);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(5,641.2325);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(6,433.9081);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(7,276.2158);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(8,188.0236);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(9,136.8784);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(10,92.88126);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(11,60.95177);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(12,44.32294);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(13,30.20486);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(14,20.92145);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(15,12.16522);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(16,8.098217);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(17,4.559424);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(18,3.277555);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(19,1.507704);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(20,0.3939703);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(21,0.1313148);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(23,0.05113213);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(1,27.33867);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(2,15.62233);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(3,10.89993);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(4,8.300759);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(5,6.507194);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(6,5.360818);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(7,4.277397);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(8,3.517964);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(9,3.006604);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(10,2.472594);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(11,1.990538);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(12,1.708266);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(13,1.409697);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(14,1.158649);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(15,0.881807);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(16,0.7250205);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(17,0.5344936);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(18,0.4443666);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(19,0.310415);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(20,0.1576515);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(21,0.09501218);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(23,0.05113213);
   VbbHcc_both_Aplanarity_stack_3->SetEntries(333238);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Aplanarity_stack_3->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->Draw("HIST");
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
