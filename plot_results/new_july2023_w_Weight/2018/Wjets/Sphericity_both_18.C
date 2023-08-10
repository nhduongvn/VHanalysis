void Sphericity_both_18()
{
//=========Macro generated from canvas: Sphericity_both_18/Sphericity_both_18
//=========  (Thu Aug 10 12:25:07 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_18 = new TCanvas("Sphericity_both_18", "Sphericity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_18->SetHighLightColor(2);
   Sphericity_both_18->Range(-0.2,-9.178941,1.133333,82.61047);
   Sphericity_both_18->SetFillColor(0);
   Sphericity_both_18->SetBorderMode(0);
   Sphericity_both_18->SetBorderSize(2);
   Sphericity_both_18->SetLeftMargin(0.15);
   Sphericity_both_18->SetFrameBorderMode(0);
   Sphericity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_5 = new TH1D("VbbHcc_both_Sphericity_stack_5","",25,0,1);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(1,60.17864);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(2,69.93479);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(3,58.77647);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(4,30.44289);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(5,27.75981);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(6,29.49828);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(7,23.52579);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(8,18.0647);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(9,11.12518);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(10,7.516807);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(11,11.63438);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(12,8.439472);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(13,4.409145);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(14,3.501972);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(15,6.738932);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(16,2.790656);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(17,4.900642);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(18,4.715799);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(19,0.5327712);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(20,0.3645995);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(21,0.01086293);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(22,0.1855336);
   VbbHcc_both_Sphericity_stack_5->SetBinError(1,5.670224);
   VbbHcc_both_Sphericity_stack_5->SetBinError(2,11.86434);
   VbbHcc_both_Sphericity_stack_5->SetBinError(3,7.731232);
   VbbHcc_both_Sphericity_stack_5->SetBinError(4,3.749162);
   VbbHcc_both_Sphericity_stack_5->SetBinError(5,4.746688);
   VbbHcc_both_Sphericity_stack_5->SetBinError(6,5.234615);
   VbbHcc_both_Sphericity_stack_5->SetBinError(7,5.190885);
   VbbHcc_both_Sphericity_stack_5->SetBinError(8,3.357818);
   VbbHcc_both_Sphericity_stack_5->SetBinError(9,3.14755);
   VbbHcc_both_Sphericity_stack_5->SetBinError(10,1.172044);
   VbbHcc_both_Sphericity_stack_5->SetBinError(11,2.792461);
   VbbHcc_both_Sphericity_stack_5->SetBinError(12,2.615139);
   VbbHcc_both_Sphericity_stack_5->SetBinError(13,0.9151063);
   VbbHcc_both_Sphericity_stack_5->SetBinError(14,0.8138709);
   VbbHcc_both_Sphericity_stack_5->SetBinError(15,2.856331);
   VbbHcc_both_Sphericity_stack_5->SetBinError(16,0.6778121);
   VbbHcc_both_Sphericity_stack_5->SetBinError(17,2.339299);
   VbbHcc_both_Sphericity_stack_5->SetBinError(18,2.881718);
   VbbHcc_both_Sphericity_stack_5->SetBinError(19,0.3274668);
   VbbHcc_both_Sphericity_stack_5->SetBinError(20,0.2670199);
   VbbHcc_both_Sphericity_stack_5->SetBinError(21,0.01086293);
   VbbHcc_both_Sphericity_stack_5->SetBinError(22,0.1855336);
   VbbHcc_both_Sphericity_stack_5->SetEntries(2591);

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
