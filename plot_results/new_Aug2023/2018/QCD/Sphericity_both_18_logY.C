void Sphericity_both_18_logY()
{
//=========Macro generated from canvas: Sphericity_both_18/Sphericity_both_18
//=========  (Tue Aug 22 09:18:46 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_18 = new TCanvas("Sphericity_both_18", "Sphericity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_18->SetHighLightColor(2);
   Sphericity_both_18->Range(-0.2,0.970415,1.133333,5.263153);
   Sphericity_both_18->SetFillColor(0);
   Sphericity_both_18->SetBorderMode(0);
   Sphericity_both_18->SetBorderSize(2);
   Sphericity_both_18->SetLogy();
   Sphericity_both_18->SetLeftMargin(0.15);
   Sphericity_both_18->SetFrameBorderMode(0);
   Sphericity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_1 = new TH1D("VbbHcc_both_Sphericity_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(1,34089.48);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(2,36002.29);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(3,26213.64);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(4,25189.81);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(5,18971.81);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(6,16766.18);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(7,13880.1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(8,7081.47);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(9,8976.512);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(10,6915.214);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(11,6058.082);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(12,6112.892);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(13,4239.811);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(14,2635.889);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(15,2247.989);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(16,1764.208);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(17,1486.774);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(18,1029.054);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(19,755.7818);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(20,648.359);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(21,751.2654);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(22,50.20174);
   VbbHcc_both_Sphericity_stack_1->SetBinError(1,2584.216);
   VbbHcc_both_Sphericity_stack_1->SetBinError(2,2677.41);
   VbbHcc_both_Sphericity_stack_1->SetBinError(3,2257.139);
   VbbHcc_both_Sphericity_stack_1->SetBinError(4,2579.253);
   VbbHcc_both_Sphericity_stack_1->SetBinError(5,2863.832);
   VbbHcc_both_Sphericity_stack_1->SetBinError(6,2088.568);
   VbbHcc_both_Sphericity_stack_1->SetBinError(7,1864.545);
   VbbHcc_both_Sphericity_stack_1->SetBinError(8,1020.807);
   VbbHcc_both_Sphericity_stack_1->SetBinError(9,1563.323);
   VbbHcc_both_Sphericity_stack_1->SetBinError(10,1230.544);
   VbbHcc_both_Sphericity_stack_1->SetBinError(11,1630.16);
   VbbHcc_both_Sphericity_stack_1->SetBinError(12,2334.25);
   VbbHcc_both_Sphericity_stack_1->SetBinError(13,1062.122);
   VbbHcc_both_Sphericity_stack_1->SetBinError(14,603.653);
   VbbHcc_both_Sphericity_stack_1->SetBinError(15,643.8276);
   VbbHcc_both_Sphericity_stack_1->SetBinError(16,444.3484);
   VbbHcc_both_Sphericity_stack_1->SetBinError(17,456.4276);
   VbbHcc_both_Sphericity_stack_1->SetBinError(18,469.2568);
   VbbHcc_both_Sphericity_stack_1->SetBinError(19,341.303);
   VbbHcc_both_Sphericity_stack_1->SetBinError(20,532.9071);
   VbbHcc_both_Sphericity_stack_1->SetBinError(21,689.4139);
   VbbHcc_both_Sphericity_stack_1->SetBinError(22,35.0447);
   VbbHcc_both_Sphericity_stack_1->SetEntries(9895);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Sphericity_stack_1->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_18->Modified();
   Sphericity_both_18->cd();
   Sphericity_both_18->SetSelected(Sphericity_both_18);
}
