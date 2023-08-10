void Aplanarity_tags_18()
{
//=========Macro generated from canvas: Aplanarity_tags_18/Aplanarity_tags_18
//=========  (Thu Aug  3 12:23:36 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_18 = new TCanvas("Aplanarity_tags_18", "Aplanarity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_18->SetHighLightColor(2);
   Aplanarity_tags_18->Range(-0.2,-7.503512,1.133333,67.5316);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetLeftMargin(0.15);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_9 = new TH1D("VbbHcc_tags_Aplanarity_stack_9","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(1,57.16961);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(2,3.92011);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(3,0.6925909);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(4,0.2560072);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(5,0.1302894);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(6,0.05485869);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(7,0.03428668);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(8,0.009143115);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(9,0.01371467);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(10,0.009143115);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(11,0.002285779);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(12,0.002285779);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(14,0.002285779);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(1,0.3614928);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(2,0.09465994);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(3,0.03978831);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(4,0.02419041);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(5,0.01725725);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(6,0.01119798);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(7,0.008852783);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(8,0.004571557);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(9,0.005598991);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(10,0.004571557);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(11,0.002285779);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(12,0.002285779);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(14,0.002285779);
   VbbHcc_tags_Aplanarity_stack_9->SetEntries(27254);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_18->Modified();
   Aplanarity_tags_18->cd();
   Aplanarity_tags_18->SetSelected(Aplanarity_tags_18);
}
