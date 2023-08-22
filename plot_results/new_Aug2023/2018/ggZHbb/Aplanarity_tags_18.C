void Aplanarity_tags_18()
{
//=========Macro generated from canvas: Aplanarity_tags_18/Aplanarity_tags_18
//=========  (Tue Aug 22 09:20:46 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_18 = new TCanvas("Aplanarity_tags_18", "Aplanarity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_18->SetHighLightColor(2);
   Aplanarity_tags_18->Range(-0.2,-2.5664,1.133333,23.0976);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetLeftMargin(0.15);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_10 = new TH1D("VbbHcc_tags_Aplanarity_stack_10","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(1,19.55352);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(2,2.037733);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(3,0.4756563);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(4,0.1886071);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(5,0.06972352);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(6,0.03478951);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(7,0.02478946);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(8,0.01309765);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(9,0.01069844);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(10,0.00745943);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(11,0.002342481);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(12,0.002327344);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(13,0.002809561);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(14,0.001231697);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(15,0.0005608122);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(16,0.0005904187);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(17,0.0005849238);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(18,0.001308646);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(1,0.1045911);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(2,0.03339275);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(3,0.01630726);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(4,0.01028178);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(5,0.00629655);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(6,0.00445176);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(7,0.003763356);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(8,0.002742689);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(9,0.002468122);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(10,0.002079319);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(11,0.001185393);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(12,0.001165338);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(13,0.0012569);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(14,0.000871313);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(15,0.0005608122);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(16,0.0005904187);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(17,0.0005849238);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(18,0.0009261631);
   VbbHcc_tags_Aplanarity_stack_10->SetEntries(40948);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Aplanarity_stack_10->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_10->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_18->Modified();
   Aplanarity_tags_18->cd();
   Aplanarity_tags_18->SetSelected(Aplanarity_tags_18);
}
