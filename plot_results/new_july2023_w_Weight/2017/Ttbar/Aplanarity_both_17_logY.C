void Aplanarity_both_17_logY()
{
//=========Macro generated from canvas: Aplanarity_both_17/Aplanarity_both_17
//=========  (Thu Aug 10 12:21:51 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_17 = new TCanvas("Aplanarity_both_17", "Aplanarity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_17->SetHighLightColor(2);
   Aplanarity_both_17->Range(-0.2,-1.806945,1.133333,5.070146);
   Aplanarity_both_17->SetFillColor(0);
   Aplanarity_both_17->SetBorderMode(0);
   Aplanarity_both_17->SetBorderSize(2);
   Aplanarity_both_17->SetLogy();
   Aplanarity_both_17->SetLeftMargin(0.15);
   Aplanarity_both_17->SetFrameBorderMode(0);
   Aplanarity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_3 = new TH1D("VbbHcc_both_Aplanarity_stack_3","",50,0,1);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(1,12731.74);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(2,4219.232);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(3,2062.957);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(4,1198.6);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(5,737.7111);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(6,499.9568);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(7,318.8488);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(8,216.3751);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(9,156.836);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(10,107.0318);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(11,69.5829);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(12,52.5789);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(13,33.78711);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(14,23.94392);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(15,13.46005);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(16,9.476102);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(17,5.45079);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(18,3.770941);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(19,1.802041);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(20,0.5327989);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(21,0.1519827);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(1,30.72193);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(2,17.71551);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(3,12.38833);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(4,9.45383);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(5,7.415727);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(6,6.122662);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(7,4.888754);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(8,4.012646);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(9,3.429976);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(10,2.829529);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(11,2.269446);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(12,1.980729);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(13,1.59185);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(14,1.327418);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(15,0.9880152);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(16,0.8396121);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(17,0.6298133);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(18,0.5177564);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(19,0.3666947);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(20,0.1990909);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(21,0.1091529);
   VbbHcc_both_Aplanarity_stack_3->SetEntries(333938);

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
