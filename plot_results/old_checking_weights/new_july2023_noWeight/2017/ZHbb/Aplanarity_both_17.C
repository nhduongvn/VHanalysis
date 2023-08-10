void Aplanarity_both_17()
{
//=========Macro generated from canvas: Aplanarity_both_17/Aplanarity_both_17
//=========  (Thu Aug  3 12:26:23 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_17 = new TCanvas("Aplanarity_both_17", "Aplanarity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_17->SetHighLightColor(2);
   Aplanarity_both_17->Range(-0.2,-3.697003,1.133333,33.27302);
   Aplanarity_both_17->SetFillColor(0);
   Aplanarity_both_17->SetBorderMode(0);
   Aplanarity_both_17->SetBorderSize(2);
   Aplanarity_both_17->SetLeftMargin(0.15);
   Aplanarity_both_17->SetFrameBorderMode(0);
   Aplanarity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_9 = new TH1D("VbbHcc_both_Aplanarity_stack_9","",50,0,1);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(1,28.16764);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(2,8.521357);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(3,4.065249);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(4,2.433981);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(5,1.544052);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(6,0.885084);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(7,0.5879025);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(8,0.3876281);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(9,0.2745699);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(10,0.1744326);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(11,0.1372849);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(12,0.07268026);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(13,0.04360816);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(14,0.02422675);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(15,0.02261164);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(16,0.008075584);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(17,0.01292094);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(18,0.004845351);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(19,0.001615117);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(1,0.2132933);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(2,0.1173158);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(3,0.08102995);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(4,0.062699);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(5,0.0499382);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(6,0.03780892);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(7,0.03081447);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(8,0.02502128);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(9,0.02105855);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(10,0.01678479);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(11,0.01489064);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(12,0.01083453);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(13,0.008392393);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(14,0.006255321);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(15,0.006043214);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(16,0.003611511);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(17,0.00456824);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(18,0.002797464);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(19,0.001615117);
   VbbHcc_both_Aplanarity_stack_9->SetEntries(29329);

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
