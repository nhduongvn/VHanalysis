void Aplanarity_both_16()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Thu Aug 10 12:29:33 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2,-61.15892,1.133333,550.4302);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLeftMargin(0.15);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,465.9727);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,141.5321);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,72.174);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,39.96083);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,23.45326);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,18.24725);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,11.33686);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,5.313895);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,4.599452);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,2.583105);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,2.164006);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,1.364878);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,0.8508881);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,0.4653074);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,0.947822);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,0.4468063);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,0.3523464);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,0.2648783);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(22,0.04373405);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,8.501863);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,4.660824);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,3.420188);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,2.526038);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,1.916786);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,1.770446);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,1.431745);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,0.8800929);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,0.8276233);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,0.5966049);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,0.6283043);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,0.4891358);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,0.3133747);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,0.1475413);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,0.4017139);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,0.2801279);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,0.2720034);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,0.2648783);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(22,0.04373405);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(10096);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_16->Modified();
   Aplanarity_both_16->cd();
   Aplanarity_both_16->SetSelected(Aplanarity_both_16);
}
