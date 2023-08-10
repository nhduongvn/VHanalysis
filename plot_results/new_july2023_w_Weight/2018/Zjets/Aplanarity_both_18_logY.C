void Aplanarity_both_18_logY()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Thu Aug 10 12:21:52 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(-0.2,-1.109001,1.133333,4.190357);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetLogy();
   Aplanarity_both_18->SetLeftMargin(0.15);
   Aplanarity_both_18->SetFrameBorderMode(0);
   Aplanarity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_4 = new TH1D("VbbHcc_both_Aplanarity_stack_4","",50,0,1);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(1,2414.751);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(2,663.737);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(3,324.6402);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(4,177.4943);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(5,113.3366);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(6,63.76788);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(7,36.96521);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(8,29.64998);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(9,20.29935);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(10,11.29771);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(11,5.86213);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(12,3.768342);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(13,6.686001);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(14,1.503204);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(15,0.9319312);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(16,1.00194);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(17,0.9101802);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(18,0.5271876);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(1,39.41736);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(2,21.03151);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(3,18.02857);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(4,10.55069);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(5,9.849318);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(6,6.793804);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(7,3.872631);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(8,5.215413);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(9,2.987448);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(10,2.015695);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(11,1.404842);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(12,0.9773);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(13,1.723225);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(14,0.6797702);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(15,0.7001956);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(16,0.6552349);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(17,0.6752615);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(18,0.5271876);
   VbbHcc_both_Aplanarity_stack_4->SetEntries(19219);

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
