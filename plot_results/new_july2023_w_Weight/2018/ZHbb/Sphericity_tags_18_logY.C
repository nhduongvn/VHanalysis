void Sphericity_tags_18_logY()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Thu Aug 10 12:20:17 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(-0.2,-3.523675,1.133333,2.2075);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLogy();
   Sphericity_tags_18->SetLeftMargin(0.15);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_9 = new TH1D("VbbHcc_tags_Sphericity_stack_9","",25,0,1);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(1,22.74228);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(2,18.81668);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(3,10.16658);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(4,7.26962);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(5,5.046225);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(6,2.736785);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(7,1.043103);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(8,0.528608);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(9,0.2798947);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(10,0.2216435);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(11,0.1576188);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(12,0.1351753);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(13,0.0751156);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(14,0.07789264);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(15,0.04864576);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(16,0.03634013);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(17,0.02097543);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(18,0.01342985);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(19,0.02063946);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(20,0.003348055);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(21,0.002241159);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(1,0.2659831);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(2,0.2637482);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(3,0.1751174);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(4,0.1522361);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(5,0.1277156);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(6,0.08797209);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(7,0.05529747);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(8,0.05414427);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(9,0.02712847);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(10,0.02543154);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(11,0.02054564);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(12,0.01974386);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(13,0.0140535);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(14,0.01558359);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(15,0.01115147);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(16,0.009843141);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(17,0.007576152);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(18,0.006046555);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(19,0.007395703);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(20,0.003348055);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(21,0.002241159);
   VbbHcc_tags_Sphericity_stack_9->SetEntries(27254);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Sphericity_stack_9->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_9->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_18->Modified();
   Sphericity_tags_18->cd();
   Sphericity_tags_18->SetSelected(Sphericity_tags_18);
}
