void Aplanarity_both_18()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Tue Aug 22 09:23:19 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(-0.2,-5.310768,1.133333,47.7969);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetLeftMargin(0.15);
   Aplanarity_both_18->SetFrameBorderMode(0);
   Aplanarity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_9 = new TH1D("VbbHcc_both_Aplanarity_stack_9","",50,0,1);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(1,40.46299);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(2,11.65309);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(3,5.480812);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(4,3.069476);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(5,1.886883);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(6,1.235537);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(7,0.7886912);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(8,0.4603503);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(9,0.3150992);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(10,0.2151999);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(11,0.1403595);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(12,0.09474494);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(13,0.07361663);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(14,0.03275244);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(15,0.03991108);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(16,0.01149448);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(17,0.008387903);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(18,0.003025839);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(19,0.004193629);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(1,0.3961097);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(2,0.2037899);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(3,0.1366601);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(4,0.1129114);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(5,0.07869961);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(6,0.08448761);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(7,0.05152544);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(8,0.03760799);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(9,0.03224284);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(10,0.03021918);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(11,0.02099913);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(12,0.01748672);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(13,0.01566778);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(14,0.009796313);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(15,0.01351046);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(16,0.006637146);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(17,0.005939109);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(18,0.003025839);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(19,0.004193629);
   VbbHcc_both_Aplanarity_stack_9->SetEntries(22331);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Aplanarity_stack_9->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_9->Draw("HIST");
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
