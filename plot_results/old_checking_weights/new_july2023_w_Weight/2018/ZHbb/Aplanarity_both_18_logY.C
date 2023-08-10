void Aplanarity_both_18_logY()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Thu Aug 10 10:43:29 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(-0.2,-3.507818,1.133333,2.519638);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetLogy();
   Aplanarity_both_18->SetLeftMargin(0.15);
   Aplanarity_both_18->SetFrameBorderMode(0);
   Aplanarity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_9 = new TH1D("VbbHcc_both_Aplanarity_stack_9","",50,0,1);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(1,43.58567);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(2,12.2639);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(3,5.90459);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(4,3.295478);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(5,2.005914);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(6,1.297911);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(7,0.8383716);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(8,0.5068887);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(9,0.3192118);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(10,0.2314725);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(11,0.1516345);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(12,0.1025787);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(13,0.06665295);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(14,0.03267797);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(15,0.03742547);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(16,0.009989377);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(17,0.005830618);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(18,0.002488613);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(19,0.003449065);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(1,0.382466);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(2,0.1923667);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(3,0.1365322);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(4,0.1045517);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(5,0.0752283);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(6,0.07734177);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(7,0.04893393);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(8,0.0363742);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(9,0.03037737);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(10,0.02843659);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(11,0.0203827);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(12,0.01660091);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(13,0.0136283);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(14,0.009039619);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(15,0.01215756);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(16,0.005769998);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(17,0.004156292);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(18,0.002488613);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(19,0.003449065);
   VbbHcc_both_Aplanarity_stack_9->SetEntries(27714);

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
