void Aplanarity_both_17()
{
//=========Macro generated from canvas: Aplanarity_both_17/Aplanarity_both_17
//=========  (Thu Aug 10 12:29:34 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_17 = new TCanvas("Aplanarity_both_17", "Aplanarity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_17->SetHighLightColor(2);
   Aplanarity_both_17->Range(-0.2,-22.02441,1.133333,198.2196);
   Aplanarity_both_17->SetFillColor(0);
   Aplanarity_both_17->SetBorderMode(0);
   Aplanarity_both_17->SetBorderSize(2);
   Aplanarity_both_17->SetLeftMargin(0.15);
   Aplanarity_both_17->SetFrameBorderMode(0);
   Aplanarity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_5 = new TH1D("VbbHcc_both_Aplanarity_stack_5","",50,0,1);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(1,167.805);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(2,47.19625);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(3,16.34841);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(4,10.02525);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(5,7.76644);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(6,3.18472);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(7,4.817026);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(8,1.339252);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(9,0.5914153);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(10,0.6891494);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(11,0.5832546);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(12,0.08120236);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(13,0.09281656);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(14,0.2436071);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(15,0.1624047);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(18,0.08120236);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(1,11.91411);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(2,5.079588);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(3,2.420714);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(4,2.090938);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(5,2.208538);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(6,0.8573974);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(7,1.756131);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(8,0.4644854);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(9,0.2561698);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(10,0.2978555);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(11,0.2787127);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(12,0.08120236);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(13,0.08202873);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(14,0.1406466);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(15,0.1148375);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(18,0.08120236);
   VbbHcc_both_Aplanarity_stack_5->SetEntries(2446);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Aplanarity_stack_5->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_5->Draw("HIST");
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
