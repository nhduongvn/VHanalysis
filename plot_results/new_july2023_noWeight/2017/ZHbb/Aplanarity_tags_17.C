void Aplanarity_tags_17()
{
//=========Macro generated from canvas: Aplanarity_tags_17/Aplanarity_tags_17
//=========  (Thu Aug 10 12:27:54 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_17 = new TCanvas("Aplanarity_tags_17", "Aplanarity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_17->SetHighLightColor(2);
   Aplanarity_tags_17->Range(-0.2,-5.566067,1.133333,50.0946);
   Aplanarity_tags_17->SetFillColor(0);
   Aplanarity_tags_17->SetBorderMode(0);
   Aplanarity_tags_17->SetBorderSize(2);
   Aplanarity_tags_17->SetLeftMargin(0.15);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_9 = new TH1D("VbbHcc_tags_Aplanarity_stack_9","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(1,42.40812);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(2,3.183395);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(3,0.5442944);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(4,0.1986594);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(5,0.07591049);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(6,0.06460468);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(7,0.01776629);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(8,0.02745699);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(9,0.008075584);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(10,0.003230234);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(11,0.006460468);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(12,0.004845351);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(13,0.001615117);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(16,0.001615117);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(1,0.2617137);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(2,0.07170464);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(3,0.0296496);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(4,0.01791251);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(5,0.01107268);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(6,0.0102149);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(7,0.005356737);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(8,0.006659297);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(9,0.003611511);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(10,0.00228412);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(11,0.003230234);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(12,0.002797464);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(13,0.001615117);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(16,0.001615117);
   VbbHcc_tags_Aplanarity_stack_9->SetEntries(28819);

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
