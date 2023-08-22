void Aplanarity_tags_18()
{
//=========Macro generated from canvas: Aplanarity_tags_18/Aplanarity_tags_18
//=========  (Tue Aug 22 09:20:46 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_18 = new TCanvas("Aplanarity_tags_18", "Aplanarity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_18->SetHighLightColor(2);
   Aplanarity_tags_18->Range(-0.2,-2819.25,1.133333,25373.25);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetLeftMargin(0.15);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_3 = new TH1D("VbbHcc_tags_Aplanarity_stack_3","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(1,21480);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(2,3022.914);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(3,841.1054);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(4,310.5867);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(5,144.8624);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(6,67.71948);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(7,39.65298);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(8,22.96948);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(9,13.78834);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(10,9.668839);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(11,5.307935);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(12,4.195584);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(13,2.346673);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(14,1.396959);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(15,1.069881);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(16,0.4934859);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(17,0.4954643);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(18,0.6048366);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(19,0.1424616);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(20,0.1403458);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(1,43.0665);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(2,15.60381);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(3,9.2061);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(4,5.10324);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(5,3.451706);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(6,2.237705);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(7,1.747415);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(8,1.301054);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(9,1.019071);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(10,0.8473092);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(11,0.6215881);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(12,0.5509403);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(13,0.4231678);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(14,0.3208);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(15,0.2869856);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(16,0.1769589);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(17,0.206918);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(18,0.2214691);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(19,0.100831);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(20,0.09931189);
   VbbHcc_tags_Aplanarity_stack_3->SetEntries(383722);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Aplanarity_stack_3->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->Draw("HIST");
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
