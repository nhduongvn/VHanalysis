void Aplanarity_both_16_logY()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Thu Aug 10 12:33:06 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2,-3.763761,1.133333,2.24326);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLogy();
   Aplanarity_both_16->SetLeftMargin(0.15);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_9 = new TH1D("VbbHcc_both_Aplanarity_stack_9","",50,0,1);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(1,23.17443);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(2,7.152788);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(3,3.559906);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(4,2.07604);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(5,1.321741);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(6,0.8532234);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(7,0.5482064);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(8,0.3805844);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(9,0.2418153);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(10,0.1511346);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(11,0.09755051);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(12,0.07144544);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(13,0.04396642);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(14,0.02885297);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(15,0.01648741);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(16,0.009617655);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(17,0.009617655);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(18,0.004121852);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(19,0.002747902);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(20,0.001373951);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(22,0.001373951);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(1,0.1784391);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(2,0.09913414);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(3,0.06993666);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(4,0.05340764);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(5,0.04261463);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(6,0.03423868);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(7,0.02744465);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(8,0.0228671);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(9,0.01822752);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(10,0.01441012);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(11,0.01157712);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(12,0.0099077);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(13,0.007772239);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(14,0.006296233);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(15,0.004759505);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(16,0.003635132);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(17,0.003635132);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(18,0.002379753);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(19,0.00194306);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(20,0.001373951);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(22,0.001373951);
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
