void Aplanarity_both_17_logY()
{
//=========Macro generated from canvas: Aplanarity_both_17/Aplanarity_both_17
//=========  (Thu Aug 10 10:43:28 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_17 = new TCanvas("Aplanarity_both_17", "Aplanarity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_17->SetHighLightColor(2);
   Aplanarity_both_17->Range(-0.2,-1.852203,1.133333,4.098421);
   Aplanarity_both_17->SetFillColor(0);
   Aplanarity_both_17->SetBorderMode(0);
   Aplanarity_both_17->SetBorderSize(2);
   Aplanarity_both_17->SetLogy();
   Aplanarity_both_17->SetLeftMargin(0.15);
   Aplanarity_both_17->SetFrameBorderMode(0);
   Aplanarity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_4 = new TH1D("VbbHcc_both_Aplanarity_stack_4","",50,0,1);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(1,1681.936);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(2,480.1415);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(3,211.5391);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(4,131.9676);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(5,71.65351);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(6,57.71871);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(7,32.44531);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(8,22.34501);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(9,15.01694);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(10,10.85231);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(11,4.144378);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(12,3.768674);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(13,3.505408);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(14,1.231899);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(15,1.48793);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(16,0.1343389);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(17,0.2028067);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(19,0.1106342);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(1,28.3588);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(2,15.94724);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(3,9.609088);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(4,10.00547);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(5,6.454021);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(6,6.717277);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(7,4.179171);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(8,3.648391);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(9,2.121996);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(10,2.726893);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(11,0.9655714);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(12,1.104281);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(13,1.060577);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(14,0.5717653);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(15,0.7401436);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(16,0.09522872);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(17,0.1458761);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(19,0.1106342);
   VbbHcc_both_Aplanarity_stack_4->SetEntries(18216);

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
