void Aplanarity_tags_17()
{
//=========Macro generated from canvas: Aplanarity_tags_17/Aplanarity_tags_17
//=========  (Thu Aug 10 12:23:36 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_17 = new TCanvas("Aplanarity_tags_17", "Aplanarity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_17->SetHighLightColor(2);
   Aplanarity_tags_17->Range(-0.2,-6.075593,1.133333,54.68034);
   Aplanarity_tags_17->SetFillColor(0);
   Aplanarity_tags_17->SetBorderMode(0);
   Aplanarity_tags_17->SetBorderSize(2);
   Aplanarity_tags_17->SetLeftMargin(0.15);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_9 = new TH1D("VbbHcc_tags_Aplanarity_stack_9","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(1,46.29023);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(2,3.528831);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(3,0.6054842);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(4,0.2188713);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(5,0.08597302);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(6,0.07517665);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(7,0.01777605);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(8,0.03122125);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(9,0.009977926);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(10,0.00376868);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(11,0.006244505);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(12,0.00591481);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(13,0.002099697);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(16,0.002081758);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(1,0.3043838);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(2,0.08340075);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(3,0.03464879);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(4,0.02039043);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(5,0.01290944);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(6,0.01232173);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(7,0.00557262);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(8,0.007840284);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(9,0.004496208);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(10,0.002665493);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(11,0.003438708);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(12,0.003537344);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(13,0.002099697);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(16,0.002081758);
   VbbHcc_tags_Aplanarity_stack_9->SetEntries(27953);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Aplanarity_stack_9->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_9->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_17->Modified();
   Aplanarity_tags_17->cd();
   Aplanarity_tags_17->SetSelected(Aplanarity_tags_17);
}
