void Sphericity_algo_18()
{
//=========Macro generated from canvas: Sphericity_algo_18/Sphericity_algo_18
//=========  (Thu Aug 10 12:28:43 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_18 = new TCanvas("Sphericity_algo_18", "Sphericity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_18->SetHighLightColor(2);
   Sphericity_algo_18->Range(-0.2,-82237.93,1.133333,740141.3);
   Sphericity_algo_18->SetFillColor(0);
   Sphericity_algo_18->SetBorderMode(0);
   Sphericity_algo_18->SetBorderSize(2);
   Sphericity_algo_18->SetLeftMargin(0.15);
   Sphericity_algo_18->SetFrameBorderMode(0);
   Sphericity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_1 = new TH1D("VbbHcc_algo_Sphericity_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(1,626574.6);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(2,556843.9);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(3,324408.7);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(4,173377.2);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(5,82627.3);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(6,42659.8);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(7,12683.75);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(8,3688.033);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(9,1705.711);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(10,934.8539);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(11,375.3564);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(12,556.039);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(13,185.2759);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(14,126.988);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(15,91.42855);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(16,96.54629);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(17,476.9586);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(18,80.87551);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(19,9.789551);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(20,19.5791);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(1,11161.76);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(2,11063.86);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(3,21423.88);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(4,5376.336);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(5,3836.757);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(6,3481.044);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(7,2102.068);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(8,922.234);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(9,542.0448);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(10,386.1068);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(11,92.3069);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(12,375.8764);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(13,55.99528);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(14,43.78546);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(15,39.93715);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(16,40.36065);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(17,372.9425);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(18,38.71121);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(19,9.789551);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(20,13.84452);
   VbbHcc_algo_Sphericity_stack_1->SetEntries(114901);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Sphericity_stack_1->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_18->Modified();
   Sphericity_algo_18->cd();
   Sphericity_algo_18->SetSelected(Sphericity_algo_18);
}
