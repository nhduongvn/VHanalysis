void Aplanarity_both_16_logY()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Tue Aug 22 09:18:48 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2,-3.947162,1.133333,2.119141);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLogy();
   Aplanarity_both_16->SetLeftMargin(0.15);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_9 = new TH1D("VbbHcc_both_Aplanarity_stack_9","",50,0,1);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(1,17.17759);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(2,5.243018);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(3,2.610827);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(4,1.511952);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(5,0.9619253);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(6,0.6131679);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(7,0.405096);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(8,0.2719898);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(9,0.1708102);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(10,0.1092428);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(11,0.06785967);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(12,0.05391494);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(13,0.03161488);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(14,0.02055928);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(15,0.01212756);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(16,0.006969318);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(17,0.007555835);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(18,0.003089239);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(19,0.002245122);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(20,0.0009130579);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(22,0.001087504);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(1,0.138138);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(2,0.07597099);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(3,0.0533061);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(4,0.04052016);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(5,0.03218966);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(6,0.02581899);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(7,0.02065045);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(8,0.0171577);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(9,0.0133667);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(10,0.01068629);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(11,0.008621262);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(12,0.007597196);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(13,0.005645738);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(14,0.004543674);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(15,0.003523815);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(16,0.00263942);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(17,0.002871895);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(18,0.001785111);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(19,0.001591907);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(20,0.0009130579);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(22,0.001087504);
   VbbHcc_both_Aplanarity_stack_9->SetEntries(28929);

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
