void Sphericity_both_17()
{
//=========Macro generated from canvas: Sphericity_both_17/Sphericity_both_17
//=========  (Thu Aug 10 12:29:32 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_17 = new TCanvas("Sphericity_both_17", "Sphericity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_17->SetHighLightColor(2);
   Sphericity_both_17->Range(-0.2,-7.524027,1.133333,67.71624);
   Sphericity_both_17->SetFillColor(0);
   Sphericity_both_17->SetBorderMode(0);
   Sphericity_both_17->SetBorderSize(2);
   Sphericity_both_17->SetLeftMargin(0.15);
   Sphericity_both_17->SetFrameBorderMode(0);
   Sphericity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_5 = new TH1D("VbbHcc_both_Sphericity_stack_5","",25,0,1);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(1,57.32592);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(2,37.46922);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(3,32.58962);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(4,24.95829);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(5,23.30186);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(6,14.93034);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(7,11.04419);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(8,11.85392);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(9,15.78983);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(10,5.983063);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(11,7.807803);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(12,3.399483);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(13,3.925788);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(14,2.377572);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(15,2.666258);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(16,3.017795);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(17,1.107902);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(18,0.5101218);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(19,0.855593);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(20,0.09281656);
   VbbHcc_both_Sphericity_stack_5->SetBinError(1,8.004226);
   VbbHcc_both_Sphericity_stack_5->SetBinError(2,3.683662);
   VbbHcc_both_Sphericity_stack_5->SetBinError(3,3.877483);
   VbbHcc_both_Sphericity_stack_5->SetBinError(4,3.309558);
   VbbHcc_both_Sphericity_stack_5->SetBinError(5,3.415491);
   VbbHcc_both_Sphericity_stack_5->SetBinError(6,2.642914);
   VbbHcc_both_Sphericity_stack_5->SetBinError(7,1.951142);
   VbbHcc_both_Sphericity_stack_5->SetBinError(8,1.779469);
   VbbHcc_both_Sphericity_stack_5->SetBinError(9,7.059606);
   VbbHcc_both_Sphericity_stack_5->SetBinError(10,1.023281);
   VbbHcc_both_Sphericity_stack_5->SetBinError(11,1.887582);
   VbbHcc_both_Sphericity_stack_5->SetBinError(12,0.6677919);
   VbbHcc_both_Sphericity_stack_5->SetBinError(13,0.7071464);
   VbbHcc_both_Sphericity_stack_5->SetBinError(14,0.5546914);
   VbbHcc_both_Sphericity_stack_5->SetBinError(15,0.5418446);
   VbbHcc_both_Sphericity_stack_5->SetBinError(16,1.257362);
   VbbHcc_both_Sphericity_stack_5->SetBinError(17,0.3490318);
   VbbHcc_both_Sphericity_stack_5->SetBinError(18,0.2031018);
   VbbHcc_both_Sphericity_stack_5->SetBinError(19,0.4269629);
   VbbHcc_both_Sphericity_stack_5->SetBinError(20,0.08202873);
   VbbHcc_both_Sphericity_stack_5->SetEntries(2446);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Sphericity_stack_5->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_5->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_17->Modified();
   Sphericity_both_17->cd();
   Sphericity_both_17->SetSelected(Sphericity_both_17);
}
