void Sphericity_both_18_logY()
{
//=========Macro generated from canvas: Sphericity_both_18/Sphericity_both_18
//=========  (Thu Aug 10 12:33:05 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_18 = new TCanvas("Sphericity_both_18", "Sphericity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_18->SetHighLightColor(2);
   Sphericity_both_18->Range(-0.2,-1.620779,1.133333,4.584956);
   Sphericity_both_18->SetFillColor(0);
   Sphericity_both_18->SetBorderMode(0);
   Sphericity_both_18->SetBorderSize(2);
   Sphericity_both_18->SetLogy();
   Sphericity_both_18->SetLeftMargin(0.15);
   Sphericity_both_18->SetFrameBorderMode(0);
   Sphericity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_3 = new TH1D("VbbHcc_both_Sphericity_stack_3","",25,0,1);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(1,4438.007);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(2,4862.207);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(3,3616.161);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(4,2740.549);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(5,2137.125);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(6,1697.716);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(7,1407.217);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(8,1175.45);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(9,995.3551);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(10,820.7503);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(11,718.6288);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(12,609.9168);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(13,515.5576);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(14,430.9101);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(15,357.8076);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(16,286.4053);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(17,220.7455);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(18,154.9204);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(19,93.35303);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(20,45.13231);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(21,16.07481);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(22,6.591778);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(23,1.383664);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(24,0.1999053);
   VbbHcc_both_Sphericity_stack_3->SetBinError(1,16.55341);
   VbbHcc_both_Sphericity_stack_3->SetBinError(2,17.32455);
   VbbHcc_both_Sphericity_stack_3->SetBinError(3,14.9484);
   VbbHcc_both_Sphericity_stack_3->SetBinError(4,13.01606);
   VbbHcc_both_Sphericity_stack_3->SetBinError(5,11.49494);
   VbbHcc_both_Sphericity_stack_3->SetBinError(6,10.24893);
   VbbHcc_both_Sphericity_stack_3->SetBinError(7,9.332184);
   VbbHcc_both_Sphericity_stack_3->SetBinError(8,8.528874);
   VbbHcc_both_Sphericity_stack_3->SetBinError(9,7.853132);
   VbbHcc_both_Sphericity_stack_3->SetBinError(10,7.131879);
   VbbHcc_both_Sphericity_stack_3->SetBinError(11,6.67333);
   VbbHcc_both_Sphericity_stack_3->SetBinError(12,6.151416);
   VbbHcc_both_Sphericity_stack_3->SetBinError(13,5.643242);
   VbbHcc_both_Sphericity_stack_3->SetBinError(14,5.169455);
   VbbHcc_both_Sphericity_stack_3->SetBinError(15,4.708465);
   VbbHcc_both_Sphericity_stack_3->SetBinError(16,4.208649);
   VbbHcc_both_Sphericity_stack_3->SetBinError(17,3.701916);
   VbbHcc_both_Sphericity_stack_3->SetBinError(18,3.095843);
   VbbHcc_both_Sphericity_stack_3->SetBinError(19,2.409232);
   VbbHcc_both_Sphericity_stack_3->SetBinError(20,1.673018);
   VbbHcc_both_Sphericity_stack_3->SetBinError(21,0.9976626);
   VbbHcc_both_Sphericity_stack_3->SetBinError(22,0.6394721);
   VbbHcc_both_Sphericity_stack_3->SetBinError(23,0.2929305);
   VbbHcc_both_Sphericity_stack_3->SetBinError(24,0.1025517);
   VbbHcc_both_Sphericity_stack_3->SetEntries(458232);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Sphericity_stack_3->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->Draw("HIST");
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
