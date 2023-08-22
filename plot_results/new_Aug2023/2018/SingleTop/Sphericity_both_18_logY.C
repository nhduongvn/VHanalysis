void Sphericity_both_18_logY()
{
//=========Macro generated from canvas: Sphericity_both_18/Sphericity_both_18
//=========  (Tue Aug 22 09:18:47 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_18 = new TCanvas("Sphericity_both_18", "Sphericity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_18->SetHighLightColor(2);
   Sphericity_both_18->Range(-0.2,-3.806257,1.133333,3.361553);
   Sphericity_both_18->SetFillColor(0);
   Sphericity_both_18->SetBorderMode(0);
   Sphericity_both_18->SetBorderSize(2);
   Sphericity_both_18->SetLogy();
   Sphericity_both_18->SetLeftMargin(0.15);
   Sphericity_both_18->SetFrameBorderMode(0);
   Sphericity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_2 = new TH1D("VbbHcc_both_Sphericity_stack_2","",25,0,1);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(1,232.9288);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(2,228.2363);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(3,167.6642);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(4,129.3166);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(5,99.17386);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(6,82.20035);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(7,68.70759);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(8,60.14712);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(9,48.58603);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(10,43.64303);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(11,32.25937);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(12,32.60109);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(13,27.0765);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(14,19.96121);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(15,17.58544);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(16,11.16394);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(17,9.451909);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(18,8.924802);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(19,4.059296);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(20,0.9707151);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(21,0.8938945);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(22,0.001627622);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(23,0.02576598);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(25,0.06807733);
   VbbHcc_both_Sphericity_stack_2->SetBinError(1,7.059758);
   VbbHcc_both_Sphericity_stack_2->SetBinError(2,6.645757);
   VbbHcc_both_Sphericity_stack_2->SetBinError(3,5.729485);
   VbbHcc_both_Sphericity_stack_2->SetBinError(4,5.107554);
   VbbHcc_both_Sphericity_stack_2->SetBinError(5,4.396642);
   VbbHcc_both_Sphericity_stack_2->SetBinError(6,4.179093);
   VbbHcc_both_Sphericity_stack_2->SetBinError(7,3.791681);
   VbbHcc_both_Sphericity_stack_2->SetBinError(8,3.550696);
   VbbHcc_both_Sphericity_stack_2->SetBinError(9,3.186832);
   VbbHcc_both_Sphericity_stack_2->SetBinError(10,2.845557);
   VbbHcc_both_Sphericity_stack_2->SetBinError(11,2.639265);
   VbbHcc_both_Sphericity_stack_2->SetBinError(12,2.559223);
   VbbHcc_both_Sphericity_stack_2->SetBinError(13,2.381415);
   VbbHcc_both_Sphericity_stack_2->SetBinError(14,1.946515);
   VbbHcc_both_Sphericity_stack_2->SetBinError(15,1.942368);
   VbbHcc_both_Sphericity_stack_2->SetBinError(16,1.472601);
   VbbHcc_both_Sphericity_stack_2->SetBinError(17,1.417802);
   VbbHcc_both_Sphericity_stack_2->SetBinError(18,1.333242);
   VbbHcc_both_Sphericity_stack_2->SetBinError(19,0.8475967);
   VbbHcc_both_Sphericity_stack_2->SetBinError(20,0.4226395);
   VbbHcc_both_Sphericity_stack_2->SetBinError(21,0.468664);
   VbbHcc_both_Sphericity_stack_2->SetBinError(22,0.07261863);
   VbbHcc_both_Sphericity_stack_2->SetBinError(23,0.02576598);
   VbbHcc_both_Sphericity_stack_2->SetBinError(25,0.06807733);
   VbbHcc_both_Sphericity_stack_2->SetEntries(14948);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_both_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->Draw("HIST");
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
